
void desenhaTiroInimigo();

void decide_tiro_inimigo()
{
	desenhaTiroInimigo();
    //quadroTiroInimigo();

    tiro_inimigo.pos_y --;						// desloca o tiro para baixo

    if(tiro_inimigo.pos_y == (nave_y_inicial + alt_nav_prin/2))
    {
    	if( (tiro_inimigo.pos_x > nave_principal.pos_x) && (tiro.pos_x < nave_principal.pos_x + nave_principal.larg_nav))
    	{
    		printf("bateu mané\n");
    	}
    }

    else if(tiro_inimigo.pos_y < janela_0_y)
    {
      flag_tiro_inimigo = 0;					// encerra o tiro, caso ele alcance o final da tela
    }
}