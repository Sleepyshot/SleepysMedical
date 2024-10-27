class BioStimMdfr: ModifierBase
{
    const int LIFETIME = 5;
    float current_water;
    float current_energy;
	int energy_loss = 800;
	int water_loss = 1800;
    int energy_threshold = 100;
	int water_threshold = 100;
	int uncon_threshold = 2000;
	override void Init()
	{
		m_TrackActivatedTime = true;
        m_IsPersistent = true;
		m_ID 					= eModifiers1.MDF_BIOSTIM;
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
		current_water = player.GetStatWater().Get();
        current_energy = player.GetStatEnergy().Get();

		player.IncreaseHealingsCount();

		if (current_energy < uncon_threshold || current_water < uncon_threshold)
		{		
			player.AddHealth("","Shock", -100);
		}

		if (current_energy < energy_threshold || current_water < water_threshold)
		{
				player.AddHealth("", "", -100);// kill the player
			
		}
		else
		{
			player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_VOMIT);
			player.GetStatWater().Add( -water_loss );// calculate full water loss
			player.GetStatEnergy().Add( -energy_loss );// calculate full energy loss

			player.AddHealth("", "Health", 33);
		}

		
			

	}

    override void OnDeactivate(PlayerBase player)
	{
		player.DecreaseHealingsCount();
		
	}

	override void OnTick(PlayerBase player, float deltaT)
	{
		
    }
};