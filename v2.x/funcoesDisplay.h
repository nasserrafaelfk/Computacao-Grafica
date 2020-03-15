void desenhaMinhaCena()
{
    glClear(GL_COLOR_BUFFER_BIT);

    desenhaBack();

    desenhaNavinha();

    chamaDesenhaInimigos();

    if(flag_tiro)
    {
      desenhaTiro();

      tiro.pos_y ++;

      if(tiro.pos_y >= tam_tela)
      {
        flag_tiro = 0;
      }
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
    
    if(incremento == 1)
    {
      if(nave_inimigo.pos_x < fim_inim_dir)
        nave_inimigo.pos_x ++;

      else
        incremento *= -1;
    }

    else
    {
      if(nave_inimigo.pos_x > fim_inim_esq)
        nave_inimigo.pos_x --;

      else
        incremento *= -1;
    }

    // Pede ao GLUT para redesenhar a tela, assim que possível
    glutPostRedisplay();

    // Se registra novamente, para que fique sempre sendo chamada (30 FPS)
    glutTimerFunc(periodo, atualizaCena, periodo);
}