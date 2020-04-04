
void encerraJogo();

void verificaFimDeJogo()
{
	if( (vet_pikachu[0] == 0) && (vet_pikachu[1] == 0) )		// testa primeiro se as duas nave superiores foram destruidas, para evitar fazer testes a toa
	{
		short int flag_fim_de_jogo = 1;

		for(int i = 0; i < quant_fileira_caterpie; i ++)
		{
			for(int j = 0; j < quant_caterpie; j ++)
			{
				if(mat_caterpie[i][j] == 1)
				{
					flag_fim_de_jogo = 0;
					break;
				}
			}

			if(flag_fim_de_jogo == 0)
			{
				break;
			}
		}

		if(flag_fim_de_jogo == 1)
		{
			for(int i = 0; i < quant_pidgey; i ++)
			{
				if(vet_pidgey[i] == 1)
				{
					flag_fim_de_jogo = 0;
					break;
				}
			}
		}

		if(flag_fim_de_jogo == 1)
		{
			for(int i = 0; i < quant_butter; i ++)
			{
				if(vet_butter[i] == 1)
				{
					flag_fim_de_jogo = 0;
					break;
				}
			}
		}


		if(flag_fim_de_jogo == 1)
		{
			encerraJogo();

			if(fim_de_jogo == 0)
			{
				reinicia_jogo();
			}
		}
	}
}