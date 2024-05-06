class Epinephrine: Inventory_Base;
class Cipro: TestInjector
{
	
	override void OnApply(PlayerBase player)
	{
		float agent_count = player.GetSingleAgentCount(eAgents.SALMONELLA)
        
		if (player.GetSingleAgentCount(eAgents.SALMONELLA) > 0)
			player.m_AgentPool.AddAgent(eAgents.SALMONELLA, -agent_count);
	}
};