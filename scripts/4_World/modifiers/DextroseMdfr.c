class DextroseMdfr: ModifierBase
{
    const int LIFETIME = 60;
    float water_multiplier = 1 // 1 will remove the multiplier 2 will double... and so on
    float energy_multiplier = 2
    float blood_multiplier = 1
 
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
		player.AddHealth("", "Blood", (PlayerConstants.SALINE_BLOOD_REGEN_PER_SEC * deltaT) * blood_multiplier);
		player.GetStatWater().Add((PlayerConstants.SALINE_WATER_REGEN_PER_SEC * deltaT) * water_multiplier);
       player.GetStatEnergy().Add((PlayerConstants.SALINE_WATER_REGEN_PER_SEC * deltaT) * energy_multiplier);
	}
};


