class BioStimMdfr: ModifierBase
{
    const int LIFETIME = 5;
    float current_water;
    float current_energy;
	int set_hydration = 100;
	int set_energy = 100;

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

		if (player.GetHealth("","Health") > 100)
		{
			player.AddHealth("","", - 100)// kill the player
		}

		if (current_energy < PlayerConstants.LOW_ENERGY_THRESHOLD || current_water < PlayerConstants.LOW_WATER_THRESHOLD)
		{
				player.AddHealth("", "", -100);// kill the player
			
		}
		else
		{
			player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_VOMIT);
			player.GetStatWater().Add( -current_water + set_hydration );// calculate full water loss
			player.GetStatEnergy().Add( -current_energy + set_energy );// calculate full energy loss


        	player.AddHealth("", "Health", 30);
			player.AddHealth("","Shock", -100);
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