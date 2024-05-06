class Epinephrine: Inventory_Base;
class Zinacef: Epinephrine
{
	
	override void OnApply(PlayerBase player)
	{
		float agent_count = player.GetSingleAgentCount(eAgents.WOUND_AGENT)
        
		if (agent_count > 0)
			player.m_AgentPool.AddAgent(eAgents.WOUND_AGENT, -agent_count );
			player.GetModifiersManager().DeactivateModifier(eModifiers.MDF_WOUND_INFECTION1);
			player.GetModifiersManager().DeactivateModifier(eModifiers.MDF_WOUND_INFECTION2);
	}
};