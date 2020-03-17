void desenhaMensagem();

void desenhaMinhaCena()
{
    glClear(GL_COLOR_BUFFER_BIT);

    desenhaBack();

    if(fim_de_jogo == 0)
    {
      desenhaNavinha();

      chamaDesenhaInimigos();

      chamaDesenhaTiro();
    }

    else
    {
      desenhaMensagem();
    }

    glutSwapBuffers();
}

void redimensionada(int width, int height)
{
   glViewport(0, 0, width, height);

   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   glOrtho(0.0, 100.0, 0.0, 100.0, -1.0, 1.0);

   glMatrixMode(GL_MODELVIEW);
   glLoadIdentity();
}

// Callback do evento timer
void atualizaCena(int periodo) {
    
    if(teste_inimigos == 1)
    {
      if(nave_inimigo.pos_x < fim_inim_dir)
      {
        if(incremento == 1)
        {
          nave_inimigo.pos_x ++;
          incremento = 0.5;
        }

        else
          incremento = 1; 
      }

      else
        teste_inimigos *= -1;
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

    // Pede ao GLUT para redesenhar a tela, assim que possível
    glutPostRedisplay();

    // Se registra novamente, para que fique sempre sendo chamada (30 FPS)
    if(jogo_pausado != 1)
    {
      glutTimerFunc(periodo, atualizaCena, periodo);
    }
}