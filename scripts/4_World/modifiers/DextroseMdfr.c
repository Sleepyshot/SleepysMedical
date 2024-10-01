class DextroseMdfr: ModifierBase
{
    const int LIFETIME = 60;
    float water_multiplier = 2 // 1 will remove the multiplier 2 will double... and so on
    float energy_multiplier = 2
    float blood_multiplier = 2
 
	ref HumanMovementState		m_MovementState	= new HumanMovementState();
		
	override void Init()
	{
		m_TrackActivatedTime = true;
        m_IsPersistent = true;
		m_ID 					= eModifiers1.MDF_DEXTROSE;
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
	}

    override void OnDeactivate(PlayerBase player)
	{
		player.DecreaseHealingsCount();
	}

	override void OnTick(PlayerBase player, float deltaT)
	{
		player.GetMovementState(m_MovementState);
		float energy = player.GetStatEnergy().Get();
		float metabolic_speed = MiscGameplayFunctions.GetEnergyMetabolicSpeed(m_MovementState.m_iMovement);// the speed at which the player uses their energy based on their current movement
		
		float modifier = energy/PlayerConstants.SL_ENERGY_MAX + PlayerConstants.CONSUMPTION_MULTIPLIER_BASE; 
		metabolic_speed *= modifier; //non linear shaping for consumption curve (comment out to have it linear)
		
		player.GetStatEnergy().Add( (metabolic_speed * deltaT) * energy_multiplier);	// with a positive value we get the opposite effect of the energy consuption an thus we counter act it for a short time	
		player.AddHealth("", "Blood", (PlayerConstants.SALINE_BLOOD_REGEN_PER_SEC * deltaT) * blood_multiplier);
		player.GetStatWater().Add( (PlayerConstants.SALINE_WATER_REGEN_PER_SEC * deltaT) * water_multiplier);
       
	}
};


