class BioStimMdfr: ModifierBase
{
    const int LIFETIME = 60;
    bool is_stomach_empty = false;
    float current_water;
    float current_energy;

	override void Init()
	{
		m_TrackActivatedTime = true;
        m_IsPersistent = true;
		m_ID 					= eModifiers1.MDF_BIOSTIM;
		m_TickIntervalInactive 	= DEFAULT_TICK_TIME_INACTIVE;
		m_TickIntervalActive 	= 1;
		//DisableDeactivateCheck();
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
        player.AddHealth("", "Health", 30)

        current_water = player.GetStatWater().Get();
        current_energy = player.GetStatEnergy().Get();
        if (current_energy < 200 && current_water < 200)
            is_stomach_empty = true;

        if (!is_stomach_empty)
        {
            player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_VOMIT);
            player.GetStatWater().Add( -current_water + 100 );// calculate full water loss
            player.GetStatEnergy().Add( -current_energy + 100 );// calculate full energy loss
        }
	}

    override void OnDeactivate(PlayerBase player)
	{
		player.DecreaseHealingsCount();
	}

	override void OnTick(PlayerBase player, float deltaT)
	{
        if(is_stomach_empty)
        {
            float chance_of_sneeze = 10;
            float random_number = Math.RandomFloat(0,100);
            
            if(  random_number < chance_of_sneeze )
            {
                player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_COUGH);
            }

            player.AddHealth("","Blood",-PlayerConstants.HEMOLYTIC_BLOOD_DRAIN_PER_SEC * 2.5 * deltaT);
        }
    }
};