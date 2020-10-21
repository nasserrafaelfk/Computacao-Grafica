
void reinicia_jogo()
{
	quantidade_vidas = 3;
	flag_game_over = 0;
    configura_tam_naves();
    inicializa_matriz_inimigos();
    fim_de_jogo = 0;
}