
void verificaColisaoSemParar()
{
    int dx, dy, espaco_x, espaco_y = 0, iteracoes = 3;
    int altura_pidgey = nave_inimigo.pos_y + (quant_fileira_caterpie * nave_inimigo.alt_nav);
    int altura_butter = altura_pidgey + nave_inimigo.alt_nav;
    int altura_pikachu = altura_butter + nave_inimigo.alt_nav;
    double distancia;

    for(int i = 0; i < iteracoes; i ++)
    {
        espaco_x = 0;

        if(tiro.pos_y == nave_inimigo.pos_y + espaco_y)
        {
            for(int j = 0; j < quant_caterpie; j ++)
            {
                if(mat_caterpie[i][j] == 1)
                {
                    dx = tiro.pos_x - (nave_inimigo.pos_x + espaco_x);
                    dy = tiro.pos_y - (nave_inimigo.pos_y + espaco_y);

                    distancia = sqrt(dx * dx + dy * dy);

                    if(distancia < (larg_tiro/2 + nave_inimigo.larg_nav/2))
                    {
                        mat_caterpie[i][j] = 0;
                        break;
                    }
                }

                espaco_x += nave_inimigo.larg_nav;
            }
        }

        if(flag_tiro == 0)
        {
            break;
        }

        espaco_y += nave_inimigo.alt_nav;
    }

    if(tiro.pos_y == altura_pidgey)
    {
        espaco_x = nave_inimigo.larg_nav;                       // posicao inicial x deslocada para direita em uma nave

        for(int i = 0; i < quant_pidgey; i ++)
        {
            if(vet_pidgey[i] == 1)
            {
                dx = tiro.pos_x - (nave_inimigo.pos_x + espaco_x);
                dy = tiro.pos_y - (nave_inimigo.pos_y + espaco_y);

                distancia = sqrt(dx * dx + dy * dy);

                if(distancia < (larg_tiro/2 + nave_inimigo.larg_nav/2))
                {
                    vet_pidgey[i] = 0;
                    break;
                }
            }

            espaco_x += nave_inimigo.larg_nav;
        }
    }

    if(tiro.pos_y == altura_butter)
    {
        espaco_x = nave_inimigo.larg_nav * 2;                       // posicao inicial x deslocada para direita em duas naves
        espaco_y += nave_inimigo.alt_nav;                           // posicao inicial y deslocada para cima em uma nave

        for(int i = 0; i < quant_butter; i ++)
        {
            if(vet_butter[i] == 1)
            {
                dx = tiro.pos_x - (nave_inimigo.pos_x + espaco_x);
                dy = tiro.pos_y - (nave_inimigo.pos_y + espaco_y);

                distancia = sqrt(dx * dx + dy * dy);

                if(distancia < (larg_tiro/2 + nave_inimigo.larg_nav/2))
                {
                    vet_butter[i] = 0;
                    break;
                }
            }

            espaco_x += nave_inimigo.larg_nav;
        }
    }

    if(tiro.pos_y == altura_pikachu)
    {
        espaco_x = (nave_inimigo.larg_nav * 3);                       // posicao inicial x deslocada para direita em duas naves
        espaco_y += (nave_inimigo.alt_nav * 2);                           // posicao inicial y deslocada para cima em uma nave

        for(int i = 0; i < quant_pikachu; i ++)
        {
            if(vet_pikachu[i] == 1)
            {
                dx = tiro.pos_x - (nave_inimigo.pos_x + espaco_x);
                dy = tiro.pos_y - (nave_inimigo.pos_y + espaco_y);

                distancia = sqrt(dx * dx + dy * dy);

                if(distancia < (larg_tiro/2 + nave_inimigo.larg_nav/2))
                {
                    vet_pikachu[i] = 0;
                    break;
                }
            }

            espaco_x += (nave_inimigo.larg_nav * 2);
        }
        
    }
}