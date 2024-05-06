class Epinephrine: Inventory_Base;
class Cipro: TestInjector
{
	
	override void OnApply(PlayerBase player)
	{
		float agent_count = player.GetSingleAgentCount(eAgents.SALMONELLA)
        
		if (agent_count > 0)
			player.m_AgentPool.AddAgent(eAgents.SALMONELLA, -agent_count);
			player.GetModifiersManager().DeactivateModifier(eModifiers.MDF_SALMONELLA);
	}
};