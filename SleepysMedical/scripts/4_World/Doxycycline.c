class Epinephrine: Inventory_Base;
class Doxycycline: Epinephrine
{
	
	override void OnApply(PlayerBase player)
	{
		float agent_count = player.GetSingleAgentCount(eAgents.CHOLERA)
        
		if (agent_count > 0)
			player.m_AgentPool.AddAgent(eAgents.CHOLERA, -agent_count);
			player.GetModifiersManager().DeactivateModifier(eModifiers.MDF_CHOLERA);
	}
};