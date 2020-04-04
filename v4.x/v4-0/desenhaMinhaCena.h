
void desenhaNavinha();

void desenhaNuvens();

void atualiza_x_nuvens();

void desenhaVidas();

void desenhaMenu();

void desenhaMinhaCena()
{
    glClear(GL_COLOR_BUFFER_BIT);

    if(fase == 0)
    {
      
      desenhaMenu();

      if(mensagem_encerrar == 1)
      {
        desenhaMensagem(2);
      }

    }

    else
    {
      desenhaBack();                            // por questões de estética, o fundo sempre será desenhado
      desenhaNuvens();

      atualiza_x_nuvens();

      desenhaNavinha();                         // assim como a nave principal

      if( ( (mensagem_reiniciar == 0) && (mensagem_encerrar == 0) ) && (jogo_pausado == 0) )
      {
        if(fim_de_jogo == 0)                      // se o jogo não acabou, desenha o jogo, composto por:
        {
          chamaDesenhaInimigos();                 // inimigos

          chamaDesenhaTiro();                     // e tiro da nave principal
        }

        else
        {
          desenhaMensagem(0);                      // desenha mensagem de fim de jogo
        }
      }

      else if(mensagem_reiniciar == 1)
      {
        desenhaMensagem(1);
      }

      else if(mensagem_encerrar == 1)
      {
        desenhaMensagem(2);
      }

      else if(jogo_pausado == 1)
      {
        chamaDesenhaInimigos();
        desenhaMensagem(3);
      }

      desenhaVidas();
    }

    glutSwapBuffers();
}