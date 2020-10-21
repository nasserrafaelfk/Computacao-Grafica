
void teclaPressionada(unsigned char key, int x, int y)
{
    switch(key)
    {

    case 13:      // Tecla "ENTER"

      switch(item_menu)
      {
        case 1:
          fase = 1;
        break;

        case 2:

        break;

        case 3:

        break;

        default:

        break;
      }

    break;

    case 27:      // Tecla "ESC"

        mensagem_encerrar = 1;

        break;

    case 32:      // Tecla "ESPAÇO"

        if(fase > 0)
        {
          if( (flag_tiro == 0) && (pokemon_capturado == 0) )
          {
            tiro.pos_x = nave_principal.pos_x;
            tiro.pos_y = tiro_y;
            flag_tiro = 1;

            teste_corrida = -1;
          }
        }
        
        break;

    case 'p':
    case 'P':

        if(fase > 0 && flag_game_over == 0)
        {
          if(jogo_pausado == 0)
          {
              jogo_pausado = 1;                           // pausa o jogo
              break;
          }

          else
              jogo_pausado = 0;
              glutTimerFunc(0, atualizaCena, velocidade_inimigos);
        }

        break;

    case 'r':
    case 'R':

      if(fase > 0)
      {
        mensagem_reiniciar = 1;
      }

        break;

    case 's':
    case 'S':

      if(fase > 0)
      {
        if(mensagem_reiniciar == 1)
        {
          reinicia_jogo();                               // reinicia o jogo
          mensagem_reiniciar = 0;
        }
      }

      if(mensagem_encerrar == 1)
      {
        if(fase <= 0)
        {
          exit(0);  // Sai do joguinho
        }

        else
        {
          fase = 0;
          mensagem_encerrar = 0;
          item_menu = 0;
        }
      }

      break;

    case 'n':
    case 'N':

      if(fase > 0)
      {
        if(mensagem_reiniciar == 1)
        {
          mensagem_reiniciar = 0;
        }
      }

      if(mensagem_encerrar == 1)
      {
        mensagem_encerrar = 0;
      }

      break;

    default:
        break;
    }
}