
void verificaColisao();

void verificaFimDeJogo();

void desenhaTiro();

void chamaDesenhaTiro()
{
    if(flag_tiro)							// verifica se há um tiro para ser desenhado, ou seja, se o jogador apertou
    {										// espaço
        desenhaTiro();
         tiro.pos_y ++;						// desloca o tiro para cima

        if(tiro.pos_y >= tam_tela)
        {
          flag_tiro = 0;					// encerra o tiro, caso ele alcance o final da tela
        }
    }
}