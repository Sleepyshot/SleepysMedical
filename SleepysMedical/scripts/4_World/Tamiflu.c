class Epinephrine: Inventory_Base;
class Tamiflu: Epinephrine
{
	
	override void OnApply(PlayerBase player)
	{
		float agent_count = player.GetSingleAgentCount(eAgents.INFLUENZA)
        
		if (player.GetSingleAgentCount(eAgents.INFLUENZA) > 0)
			player.m_AgentPool.AddAgent(eAgents.INFLUENZA, -agent_count);
	}
};