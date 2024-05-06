class Epinephrine: Inventory_Base;
class Tamiflu: Epinephrine
{
	
	override void OnApply(PlayerBase player)
	{
		float agent_count = player.GetSingleAgentCount(eAgents.INFLUENZA)
        
		if (agent_count > 0)
			player.m_AgentPool.AddAgent(eAgents.INFLUENZA, -agent_count);
			player.GetModifiersManager().DeactivateModifier(eModifiers.MDF_INFLUENZA);
	}
};