void configura_tam_naves()
{
    nave_principal.pos_x = nave_x_inicial;                   // inicialização da posição da nave principal
    nave_principal.pos_y = nave_y_inicial;
    nave_principal.larg_nav = larg_nav_prin;
    nave_principal.alt_nav = alt_nav_prin;

    nave_inimigo.pos_x = nave_x_inim;
    nave_inimigo.pos_y = nave_y_inim;
    nave_inimigo.larg_nav = larg_nav_inim;                             // obs: organizar melhor a função setup
    nave_inimigo.alt_nav = alt_nav_inim;

    tiro.larg_nav = larg_tiro;
    tiro.alt_nav = alt_tiro;
}