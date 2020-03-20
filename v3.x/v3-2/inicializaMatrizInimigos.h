
void inicializa_matriz_inimigos()
{															// cria as matrizes e vetores de inimigos de acordo
	for(int i = 0; i < quant_fileira_caterpie; i ++)		// com a quantidade de cada um definidos no header
	{														// variaveisGlobais.h
		for(int j = 0; j < quant_caterpie; j ++)
		{
			mat_caterpie[i][j] = 1;
		}
	}

	for(int i = 0; i < quant_pidgey; i ++)
	{
		vet_pidgey[i] = 1;
	}

	for(int i = 0; i < quant_butter; i ++)
	{
		vet_butter[i] = 1;
	}

	for(int i = 0; i < quant_pikachu; i ++)
	{
		vet_pikachu[i] = 1;
	}
}