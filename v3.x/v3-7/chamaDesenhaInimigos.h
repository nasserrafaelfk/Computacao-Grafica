
void desenhaInimigos(signed short int pokemon);

void quadroInimigos();

void chamaDesenhaInimigos()
{
    for(int i = 0; i < quant_fileira_caterpie; i ++)
    {

      for(int j = 0; j < quant_caterpie; j ++)
      {
        if(mat_caterpie[i][j] == 1)
        {
          desenhaInimigos(1);                               // caso esse inimigo atual esteja vivo, desenha-o
        }                                                   // para os inimigos "caterpie" foi utilizado uma matriz
                                                            // para armazenar quem está vivo e quem não, porém, para
        nave_inimigo.pos_x += larg_nav_inim;                // os demais foi utilizado vetores, já que todos os demais
      }                                                     // possuem apenas uma linha de inimigos

      nave_inimigo.pos_x -= (quant_caterpie * larg_nav_inim);
      nave_inimigo.pos_y += alt_nav_inim;                   // após desenhar o caterpie, ajusta a posição para que o primeiro
    }                                                       // pidgey possa ser desenhado

    nave_inimigo.pos_x += larg_nav_inim;

    for(int i = 0; i < quant_pidgey; i ++)
      {
        if(vet_pidgey[i] == 1)
        {
          desenhaInimigos(2);
        }

        nave_inimigo.pos_x += larg_nav_inim;
      }
                                                            // desenha os pidgeys e desloca para posição dos butterfree's
    nave_inimigo.pos_x -= (larg_nav_inim * quant_pidgey);

    nave_inimigo.pos_x += larg_nav_inim;
    nave_inimigo.pos_y += alt_nav_inim;

    for(int i = 0; i < quant_butter; i ++)
    {
      if(vet_butter[i] == 1)
      {
        desenhaInimigos(3);
      }

      nave_inimigo.pos_x += larg_nav_inim;
    }                                                     // desenha os butterfree's e desloca para posição dos pikachus

    nave_inimigo.pos_x -= (2 * larg_nav_inim);
    nave_inimigo.pos_y += alt_nav_inim;                                 // posicao do primeiro pikachu

    if(vet_pikachu[1] == 1)
    {
      desenhaInimigos(4);
    }

    nave_inimigo.pos_x -= (3 * larg_nav_inim);                          // posicao do segundo pikachu


    if(vet_pikachu[0] == 1)
    {
      desenhaInimigos(4);
    }

    nave_inimigo.pos_x -= (3 * larg_nav_inim);                              
    nave_inimigo.pos_y -= (5 * alt_nav_inim);                            // retorna a posição inicial

    quadroInimigos();
}