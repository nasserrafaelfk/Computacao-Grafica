
void quadroPokebolaCapturado()
{
	switch(flag_quadro_tiro)
	{
		case 1:
		tiro.quadro_atual[0] = 0.0;       // muda o frame atual da pokebola, para gerar uma animação de
        	tiro.quadro_atual[1] = 0.1;		  // giro para a mesma

        	flag_quadro_tiro = 2;
        break;

        case 2:
		tiro.quadro_atual[0] = 0.1;       // muda o frame atual da pokebola, para gerar uma animação de
        	tiro.quadro_atual[1] = 0.2;		  // giro para a mesma

        	flag_quadro_tiro = 3;
        break;

        case 3:
		tiro.quadro_atual[0] = 0.2;       // muda o frame atual da pokebola, para gerar uma animação de
        	tiro.quadro_atual[1] = 0.3;		  // giro para a mesma

        	flag_quadro_tiro = 4;
        break;

        case 4:
		tiro.quadro_atual[0] = 0.3;       // muda o frame atual da pokebola, para gerar uma animação de
        	tiro.quadro_atual[1] = 0.4;		  // giro para a mesma

        	flag_quadro_tiro = 5;
        break;

        case 5:
		tiro.quadro_atual[0] = 0.4;       // muda o frame atual da pokebola, para gerar uma animação de
        	tiro.quadro_atual[1] = 0.5;		  // giro para a mesma

        	flag_quadro_tiro = 6;
        break;

        case 6:
		tiro.quadro_atual[0] = 0.5;       // muda o frame atual da pokebola, para gerar uma animação de
        	tiro.quadro_atual[1] = 0.6;		  // giro para a mesma

        	flag_quadro_tiro = 7;
        break;

        case 7:
		tiro.quadro_atual[0] = 0.6;       // muda o frame atual da pokebola, para gerar uma animação de
        	tiro.quadro_atual[1] = 0.7;		  // giro para a mesma

        	flag_quadro_tiro = 8;
        break;

        case 8:
		tiro.quadro_atual[0] = 0.7;       // muda o frame atual da pokebola, para gerar uma animação de
        	tiro.quadro_atual[1] = 0.8;		  // giro para a mesma

        	flag_quadro_tiro = 9;
        break;

        case 9:
		tiro.quadro_atual[0] = 0.8;       // muda o frame atual da pokebola, para gerar uma animação de
        	tiro.quadro_atual[1] = 0.9;		  // giro para a mesma

        	flag_quadro_tiro = 10;
        break;

        case 10:
		tiro.quadro_atual[0] = 0.9;       // muda o frame atual da pokebola, para gerar uma animação de
        	tiro.quadro_atual[1] = 1.0;		  // giro para a mesma

        	flag_quadro_tiro = 1;

        	pokemon_capturado = 0;
        break;

        default:
        break;
	}
}