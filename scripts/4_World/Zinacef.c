class Epinephrine: Inventory_Base;
class Zinacef: Epinephrine
{
	
	override void OnApply(PlayerBase player)
	{
			player.m_AgentPool.AddAgent(eAgents.WOUND_AGENT, -1000 );
			player.GetModifiersManager().DeactivateModifier(eModifiers.MDF_WOUND_INFECTION1);
			player.GetModifiersManager().DeactivateModifier(eModifiers.MDF_WOUND_INFECTION2);
	}
};