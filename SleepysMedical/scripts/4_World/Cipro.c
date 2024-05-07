class Epinephrine: Inventory_Base;
class Cipro: TestInjector
{
	
	override void OnApply(PlayerBase player)
	{
			player.m_AgentPool.AddAgent(eAgents.SALMONELLA, -1000);
			player.GetModifiersManager().DeactivateModifier(eModifiers.MDF_SALMONELLA);
	}
};