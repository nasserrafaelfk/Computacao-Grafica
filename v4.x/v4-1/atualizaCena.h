
void desenhaMensagem(signed short int mensagem_desenhada);

void desenhaMinhaCena();

void redimensionada(int width, int height);

void atualizaPosicaoInimigos();

// Callback do evento timer
void atualizaCena(int periodo) {
    
    atualizaPosicaoInimigos();

    glutPostRedisplay();                          // importante: esse é o único momento do código em que essa função deve ser
                                                  // chamada, para garantir que o jogo rode a 30 FPS
    
    if(jogo_pausado != 1)
    {
      glutTimerFunc(periodo, atualizaCena, periodo);      // se o jogo não está pausado, atualiza a tela
    }
}