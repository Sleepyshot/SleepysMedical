class Epinephrine: Inventory_Base;
class UnknownInjector: Epinephrine
{
	
	override void OnApply(PlayerBase player)
	{
		if (!player)
			return;
        float disease_selection = Math.RandomInt(1,4);
        
        if (disease_selection == 1)
        {
            if(player.GetModifiersManager().IsModifierActive(eModifiers.MDF_INFLUENZA))
            {
                return;
            }
            // common cold activates in 200 agents
            player.m_AgentPool.AddAgent(eAgents.INFLUENZA, 250); 
            
        }
        else if (disease_selection == 2)
        {
            if(player.GetModifiersManager().IsModifierActive(eModifiers.MDF_CHOLERA))
            {
                return;
            }
            // cholera activates at 250 agents
            player.m_AgentPool.AddAgent(eAgents.CHOLERA, 300); 
        }
        else if (disease_selection == 3)
        {
            if(player.GetModifiersManager().IsModifierActive(eModifiers.MDF_SALMONELLA))
            {
                return;
            }
            //salmonella activates at 60 agents
            player.m_AgentPool.AddAgent(eAgents.SALMONELLA, 70); 
        }
        else
        {
            if(player.GetModifiersManager().IsModifierActive(eModifiers.MDF_WOUND_INFECTION1) || player.GetModifiersManager().IsModifierActive(eModifiers.MDF_WOUND_INFECTION2) )
            {
                return;
            }
            // wound infection1 in 100 agents wound infection2 in 250 agents
            player.m_AgentPool.AddAgent(eAgents.WOUND_AGENT, 50);
        }
	}	
};