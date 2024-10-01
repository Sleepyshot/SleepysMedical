class Epinephrine: Inventory_Base;
class Doxycycline: Epinephrine
{
	
	override void OnApply(PlayerBase player)
	{
			player.m_AgentPool.AddAgent(eAgents.CHOLERA, -1000);
			player.GetModifiersManager().DeactivateModifier(eModifiers.MDF_CHOLERA);
	}
};