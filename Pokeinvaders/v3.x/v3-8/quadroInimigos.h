
void quadroInimigos()
{
	if(contador_frames_inimigos < quantidade_frames_ini)
	{
		contador_frames_inimigos ++;
	}

	else
	{
		if(teste_inimigos < 0)
		{
			if(flag_quadro_inimigo == 1)
			{
				nave_inimigo.quadro_atual[0] = 0.0;       // muda o frame atual do personagem, para gerar uma animação
		        nave_inimigo.quadro_atual[1] = 0.17;
		        nave_inimigo.quadro_atual[2] = 0;
		        nave_inimigo.quadro_atual[3] = 1;

		        flag_quadro_inimigo = 2;
			}

			else if(flag_quadro_inimigo == 2)
			{
				nave_inimigo.quadro_atual[0] = 0.17;       // muda o frame atual do personagem, para gerar uma animação
		        nave_inimigo.quadro_atual[1] = 0.33;
		        nave_inimigo.quadro_atual[2] = 0;
		        nave_inimigo.quadro_atual[3] = 1;

		        flag_quadro_inimigo = 3;
			}

			else if(flag_quadro_inimigo == 3)
			{
				nave_inimigo.quadro_atual[0] = 0.33;       // muda o frame atual do personagem, para gerar uma animação
		        nave_inimigo.quadro_atual[1] = 0.50;
		        nave_inimigo.quadro_atual[2] = 0;
		        nave_inimigo.quadro_atual[3] = 1;

		        flag_quadro_inimigo = 1;
			}
		}

		else
		{
			if(flag_quadro_inimigo == 1)
			{
				nave_inimigo.quadro_atual[0] = 0.50;       // muda o frame atual do personagem, para gerar uma animação
		        nave_inimigo.quadro_atual[1] = 0.67;
		        nave_inimigo.quadro_atual[2] = 0;
		        nave_inimigo.quadro_atual[3] = 1;

		        flag_quadro_inimigo = 2;
			}

			else if(flag_quadro_inimigo == 2)
			{
				nave_inimigo.quadro_atual[0] = 0.67;       // muda o frame atual do personagem, para gerar uma animação
		        nave_inimigo.quadro_atual[1] = 0.83;
		        nave_inimigo.quadro_atual[2] = 0;
		        nave_inimigo.quadro_atual[3] = 1;

		        flag_quadro_inimigo = 3;
			}

			else if(flag_quadro_inimigo == 3)
			{
				nave_inimigo.quadro_atual[0] = 0.83;       // muda o frame atual do personagem, para gerar uma animação
		        nave_inimigo.quadro_atual[1] = 1.00;
		        nave_inimigo.quadro_atual[2] = 0;
		        nave_inimigo.quadro_atual[3] = 1;

		        flag_quadro_inimigo = 1;
			}
		}

		contador_frames_inimigos = 0;
	}
}