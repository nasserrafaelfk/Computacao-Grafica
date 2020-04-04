
void verificaColisao();

void verificaFimDeJogo();

void desenhaTiro();

void quadroTiro();

void desenhaPokebolaCapturado();

void quadroPokebolaCapturado();

void chamaDesenhaTiro()
{
    if(flag_tiro)							// verifica se há um tiro para ser desenhado, ou seja, se o jogador apertou
    {										// espaço
        desenhaTiro();
        quadroTiro();
        tiro.pos_y ++;						// desloca o tiro para cima

        if(tiro.pos_y >= tam_tela)
        {
          flag_tiro = 0;					// encerra o tiro, caso ele alcance o final da tela
        }
    }

    else if(pokemon_capturado)
    {
        desenhaPokebolaCapturado();
        quadroPokebolaCapturado();
    }
}