
void encerraJogo()
{
	switch(fase)
	{
		case 1:

			fase = 2;

			quadro_back[0] = 0.5;
		    quadro_back[1] = 1.0;
		    quadro_back[2] = 0.5;
		    quadro_back[3] = 1.0;

		    fim_de_jogo = 0;

		break;

		case 2:
			
			fase = 3;

			quadro_back[0] = 0.0;
		    quadro_back[1] = 0.5;
		    quadro_back[2] = 0.0;
		    quadro_back[3] = 0.5;

		    fim_de_jogo = 0;

		break;

		case 3:

			fase = 4;

			quadro_back[0] = 0.5;
		    quadro_back[1] = 1.0;
		    quadro_back[2] = 0.0;
		    quadro_back[3] = 0.5;

		    fim_de_jogo = 0;

		break;

		case 4:

			fim_de_jogo = 1;
			
			break;

		default:
			break;
	}
}