
void desenhaTiroInimigo();

int verificaColisaoTiroInimigo()
{
    int dx, dy;
    float distancia;

    dx = tiro_inimigo.pos_x - nave_principal.pos_x;
    dy = tiro_inimigo.pos_y - nave_principal.pos_y;

    distancia = sqrt((dx * dx) + (dy * dy));

    if(distancia < (larg_tiro_inimigo/2 + alt_tiro_inimigo/2))
    {
        return 1;
    }

    return 0;
}

void decide_tiro_inimigo()
{
	desenhaTiroInimigo();

    if( verificaColisaoTiroInimigo() )
    {
        //printf("bateu\n");

        if(quantidade_vidas > 0)
        {
            quantidade_vidas --;
        }

        else
        {
            flag_game_over = 1;
            quantidade_vidas --;
        }

        flag_tiro_inimigo = 0;
    }

    else if(tiro_inimigo.pos_y < janela_0_y)
    {
      flag_tiro_inimigo = 0;					// encerra o tiro, caso ele alcance o final da tela
    }

    tiro_inimigo.pos_y -= velocidade_tiro_inimigos;                      // desloca o tiro para baixo
}