
void atualiza_x_nuvens()
{
	if(nuvens.pos_x > -largura_nuvens/2)
	{
		nuvens.pos_x --;
	}

	else
	{
		nuvens.pos_x = janela_pos_x + largura_nuvens;
	}
}