
void desenhaNavinha();

void desenhaMinhaCena()
{
    glClear(GL_COLOR_BUFFER_BIT);

    desenhaBack();                            // por questões de estética, o fundo sempre será desenhado

    if(fim_de_jogo == 0)                      // se o jogo não acabou, desenha o jogo, composto por:
    {
      desenhaNavinha();                       // nave principal

      chamaDesenhaInimigos();                 // inimigos

      chamaDesenhaTiro();                     // e tiro da nave principal
    }

    else
    {
      desenhaMensagem();                      // desenha mensagem de fim de jogo
    }

    glutSwapBuffers();
}