class Epinephrine: Inventory_Base;
class Zinacef: Epinephrine
{
	
	override void OnApply(PlayerBase player)
	{
		float agent_count = player.GetSingleAgentCount(eAgents.WOUND_AGENT)
        
		if (player.GetSingleAgentCount(eAgents.WOUND_AGENT) > 0)
			player.m_AgentPool.AddAgent(eAgents.WOUND_AGENT, -agent_count);
	}
};