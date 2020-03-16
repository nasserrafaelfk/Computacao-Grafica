void inicializa_matriz_inimigos()
{
	for(int i = 0; i < quant_fileira_caterpie; i ++)
	{
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