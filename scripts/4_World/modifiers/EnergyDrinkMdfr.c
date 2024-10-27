class EnergyDrinkMdfr: ModifierBase
{
    const int LIFETIME = 60;
	ref HumanMovementState		m_MovementState	= new HumanMovementState();
		
	override void Init()
	{
		m_TrackActivatedTime = true;
        m_IsPersistent = true;
		m_ID 					= eModifiers1.MDF_ENERGY_DRINK;
		m_TickIntervalInactive 	= DEFAULT_TICK_TIME_INACTIVE;
		m_TickIntervalActive 	= 1;
	}
	
	override bool ActivateCondition(PlayerBase player)
	{
		return false;
	}

	override bool DeactivateCondition(PlayerBase player)
	{
		float attached_time = GetAttachedTime();
		
		if( attached_time >= LIFETIME )
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	override void OnReconnect(PlayerBase player)
	{
        OnActivate(player);
	}

    override void OnActivate(PlayerBase player)
	{
		player.IncreaseHealingsCount();
		player.GetStaminaHandler().SetStamina(100);// full stamina
	}

    override void OnDeactivate(PlayerBase player)
	{
		player.DecreaseHealingsCount();	
	}

	override void OnTick(PlayerBase player, float deltaT)
	{
		float regen_modifier_water = PlayerConstants.BLOOD_REGEN_MODIFIER_WATER_MID;
		float regen_modifier_energy = PlayerConstants.BLOOD_REGEN_MODIFIER_ENERGY_MID;
        float blood_regen_speed = PlayerConstants.BLOOD_REGEN_RATE_PER_SEC * regen_modifier_water * regen_modifier_energy; // set regen rate
		player.AddHealth("","Blood", (blood_regen_speed * deltaT));// regenerate blood

		player.GiveShock(100);// counter any shock damage that the player recieves
		player.GetStatEnergy().Add( 5  * deltaT );	//add nutrition over time
        player.GetStatWater().Add( -0.5 * deltaT );	//lower hydration over time
	}
};