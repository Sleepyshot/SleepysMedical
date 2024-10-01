class TranexamicAcidMdfr: ModifierBase
{
    const int LIFETIME = 60;
    float current_blood;

	override void Init()
	{
		m_TrackActivatedTime = true;
        m_IsPersistent = true;
		m_ID 					= eModifiers1.MDF_TXA;
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
		current_blood = player.GetHealth("GlobalHealth", "Blood");
		
	}

    override void OnDeactivate(PlayerBase player)
	{
		player.DecreaseHealingsCount();
	}

	override void OnTick(PlayerBase player, float deltaT)
	{
        player.SetHealth("", "Blood", current_blood );
        
    }
};