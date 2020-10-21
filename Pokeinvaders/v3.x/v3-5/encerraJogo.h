
void encerraJogo()
{
	switch(fase)
	{
		case 1:
			fase = 2;
			fim_de_jogo = 0;
		break;

		case 2:
			fase = 3;
			fim_de_jogo = 0;
		break;

		case 3:
			fase = 4;
			fim_de_jogo = 0;
		break;

		case 4:
			fim_de_jogo = 1;
			break;

		default:
			break;
	}
}