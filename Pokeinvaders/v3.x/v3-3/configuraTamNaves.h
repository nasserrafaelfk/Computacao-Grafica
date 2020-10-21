
void configura_tam_naves()
{
    nave_principal.pos_x = nave_x_inicial;                   // inicialização da posição da nave principal
    nave_principal.pos_y = nave_y_inicial;
    nave_principal.larg_nav = larg_nav_prin;
    nave_principal.alt_nav = alt_nav_prin;

    nave_principal.quadro_atual[0] = 0.4;                    // define o sprite da nave no instante inicial do jogo
    nave_principal.quadro_atual[1] = 0.5;
    nave_principal.quadro_atual[2] = 0;
    nave_principal.quadro_atual[3] = 1;

    nave_inimigo.pos_x = nave_x_inim;                       // inicialização da nave inimiga
    nave_inimigo.pos_y = nave_y_inim;
    nave_inimigo.larg_nav = larg_nav_inim;
    nave_inimigo.alt_nav = alt_nav_inim;

    tiro.larg_nav = larg_tiro;                              // cria a navinha tiro, que ainda não possui sprite inicial
    tiro.alt_nav = alt_tiro;
}