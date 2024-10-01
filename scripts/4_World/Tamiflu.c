class Epinephrine: Inventory_Base;
class Tamiflu: Epinephrine
{
	
	override void OnApply(PlayerBase player)
	{
			player.m_AgentPool.AddAgent(eAgents.INFLUENZA, -1000);
			player.GetModifiersManager().DeactivateModifier(eModifiers.MDF_INFLUENZA);
	}
};