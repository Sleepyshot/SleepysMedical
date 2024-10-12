class BreakAidMdfr: ModifierBase
{
    const int LIFETIME = 5;
	private const 	float	HEALTHY_LEG = 100; //Health at which legs are no longer considered broken

	override void Init()
	{
		m_TrackActivatedTime = true;
        m_IsPersistent = true;
		m_ID 					= eModifiers1.MDF_BREAK_AID;
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

        player.AddHealth("RightLeg", "Health", HEALTHY_LEG) 
        player.AddHealth("LeftLeg", "Health", HEALTHY_LEG)

        
	}

    override void OnDeactivate(PlayerBase player)
	{

	}

	override void OnTick(PlayerBase player, float deltaT)
	{
     
	}
};


