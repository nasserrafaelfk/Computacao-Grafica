
int verificaFimDeJogo(int flag_chamada);

void criaTiroInimigo()
{
	int inimigo_sorteado_x, inimigo_sorteado_y, inimigo_sorteado, tipo_sorteado;

	do{
		tipo_sorteado = rand() % TIPOS_INIMIGOS;

		switch(tipo_sorteado)
		{
			case 0:

				inimigo_sorteado_x = rand() % quant_caterpie;
				inimigo_sorteado_y = rand() % quant_fileira_caterpie;

				if(mat_caterpie [inimigo_sorteado_x][inimigo_sorteado_y] == 1)
				{
					flag_tiro_inimigo = 2;
					tiro_inimigo.pos_x = nave_inimigo.pos_x + (larg_nav_inim * inimigo_sorteado_x);
					tiro_inimigo.pos_y = nave_inimigo.pos_y + (alt_nav_inim * inimigo_sorteado_y);

					//printf("%d %d\n", tiro_inimigo.pos_x, tiro_inimigo.pos_y);
				}

				break;

			case 1:

				inimigo_sorteado = rand() % quant_pidgey;

				if(vet_pidgey [inimigo_sorteado] == 1)
				{
					flag_tiro_inimigo = 2;
					tiro_inimigo.pos_x = nave_inimigo.pos_x + (larg_nav_inim * inimigo_sorteado);
					tiro_inimigo.pos_y = nave_inimigo.pos_y + (alt_nav_inim * 1);

					//printf("%d %d\n", tiro_inimigo.pos_x, tiro_inimigo.pos_y);
				}

				break;

			case 2:

				inimigo_sorteado = rand() % quant_butter;

				if(vet_butter [inimigo_sorteado] == 1)
				{
					flag_tiro_inimigo = 2;
					tiro_inimigo.pos_x = nave_inimigo.pos_x + (larg_nav_inim * inimigo_sorteado);
					tiro_inimigo.pos_y = nave_inimigo.pos_y + (alt_nav_inim * 2);

					//printf("%d %d\n", tiro_inimigo.pos_x, tiro_inimigo.pos_y);
				}

				break;

			case 3:

				inimigo_sorteado = rand() % quant_pikachu;

				if(vet_pikachu [inimigo_sorteado] == 1)
				{
					flag_tiro_inimigo = 2;
					tiro_inimigo.pos_x = nave_inimigo.pos_x + (larg_nav_inim * inimigo_sorteado);
					tiro_inimigo.pos_y = nave_inimigo.pos_y + (alt_nav_inim * 3);

					//printf("%d %d\n", tiro_inimigo.pos_x, tiro_inimigo.pos_y);
				}

				break;

			default:
				break;
		}

	}while(flag_tiro_inimigo != 2);


	tiro_inimigo.quadro_atual[0] = 0;
	tiro_inimigo.quadro_atual[1] = 1;
	tiro_inimigo.quadro_atual[2] = 0;
	tiro_inimigo.quadro_atual[3] = 1;
}

void decide_tiro_inimigo();

void atualizaTiroInimigo()
{
	if(flag_tiro_inimigo == 0)
	{
		if(contador_tiro_inimigo < DELAY_TIRO_INIMIGO)
		{
			contador_tiro_inimigo ++;
		}

		else
		{
			contador_tiro_inimigo = 0;
			flag_tiro_inimigo = 1;
		}
	}

	else if(flag_tiro_inimigo == 1)
	{
		if( verificaFimDeJogo(1) )
		{
			criaTiroInimigo();
		}
	}

	else if(flag_tiro_inimigo == 2)
	{
		decide_tiro_inimigo();
	}
}