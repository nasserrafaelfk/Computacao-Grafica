
void atualizaPosicaoInimigos()
{
	
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
        {
          incremento = 1;
        }
      }

      else
      {
        teste_inimigos *= -1;                        // muda o sentido de movimento dos inimigos

        if(deslocamento_inimigos == 1)
        {
          if(nave_inimigo.pos_y == y_max_inimigo)
          {
              deslocamento_inimigos *= -1;
          }
        }

        else
        {
          if(nave_inimigo.pos_y == y_min_inimigo)
          {
              deslocamento_inimigos *= -1;
          }
        }

        nave_inimigo.pos_y += deslocamento_inimigos;
      }
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
      {
       teste_inimigos *= -1;                        // muda o sentido de movimento dos inimigos

        if(deslocamento_inimigos == 1)
        {
          if(nave_inimigo.pos_y == y_max_inimigo)
          {
              deslocamento_inimigos *= -1;
          }
        }

        else
        {
          if(nave_inimigo.pos_y == y_min_inimigo)
          {
              deslocamento_inimigos *= -1;
          }
        }

        nave_inimigo.pos_y += deslocamento_inimigos;
      }
    }

    if(teste_corrida < 0)
    {
      switch(teste_corrida)
      {
        case -1:
            nave_principal.quadro_atual[0] = 0.7;       // muda o frame atual do personagem, para gerar uma animação
            nave_principal.quadro_atual[1] = 0.8;
            nave_principal.quadro_atual[2] = 0;
            nave_principal.quadro_atual[3] = 1;

            if(contador_frames < quantidade_frames_esp)
            {
              contador_frames ++;
            }

            else
            {
              teste_corrida = -2;
              contador_frames = 0;
            }

          break;

        case -2:
            nave_principal.quadro_atual[0] = 0.8;       // muda o frame atual do personagem, para gerar uma animação
            nave_principal.quadro_atual[1] = 0.9;
            nave_principal.quadro_atual[2] = 0;
            nave_principal.quadro_atual[3] = 1;

            if(contador_frames < quantidade_frames_esp)
            {
              contador_frames ++;
            }

            else
            {
              teste_corrida = -3;
              contador_frames = 0;
            }

          break;

        case -3:
            nave_principal.quadro_atual[0] = 0.9;       // muda o frame atual do personagem, para gerar uma animação
            nave_principal.quadro_atual[1] = 1.0;
            nave_principal.quadro_atual[2] = 0;
            nave_principal.quadro_atual[3] = 1;

            if(contador_frames < quantidade_frames_esp)
            {
              contador_frames ++;
            }

            else
            {
              teste_corrida = 0;
              contador_frames = 0;
            }

          break;
      }
    }
}