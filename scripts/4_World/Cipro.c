class Epinephrine: Inventory_Base;
class Cipro: Epinephrine
{
	
	override void OnApply(PlayerBase player)
	{
			player.m_AgentPool.AddAgent(eAgents.SALMONELLA, -1000);// remove agents from the salmonella agent pool
			player.GetModifiersManager().DeactivateModifier(eModifiers.MDF_SALMONELLA);
	}
};