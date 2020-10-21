
void desenhaMensagem();

void desenhaMinhaCena();

void redimensionada(int width, int height);

// Callback do evento timer
void atualizaCena(int periodo) {
    
    if(teste_inimigos == 1)                         // o flag teste_inimigos serve para decidir a direção atual dos inimigos,
    {                                               // sendo positivo para direita e negativo para esquerda
      if(nave_inimigo.pos_x < fim_inim_dir)
      {                                             // os inimigos se movem para direita até atingir fim_inim_dir
        if(incremento == 1)
        {
          nave_inimigo.pos_x ++;
          incremento = 0.5;                         // o flag incremento serve para que os inimigos andem a cada dois frames
        }                                           // isso serve para que não andem rápido demais na tela

        else
          incremento = 1; 
      }

      else
        teste_inimigos *= -1;                        // muda o sentido de movimento dos inimigos
    }

    else
    {
      if(nave_inimigo.pos_x > fim_inim_esq)
      {
        if(incremento == 1)
        {
          nave_inimigo.pos_x --;
          incremento = 0.5;
        }

        else
          incremento = 1; 
        
      }

      else
        teste_inimigos *= -1;
    }

    glutPostRedisplay();                          // importante: esse é o único momento do código em que essa função deve ser
                                                  // chamada, para garantir que o jogo rode a 30 FPS
    
    if(jogo_pausado != 1)
    {
      glutTimerFunc(periodo, atualizaCena, periodo);      // se o jogo não está pausado, atualiza a tela
    }
}