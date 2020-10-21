
void teclaPressionada(unsigned char key, int x, int y)
{
    switch(key)
    {
    case 27:      // Tecla "ESC"
        exit(0);  // Sai da aplicação
        break;

    case 32:      // Tecla "ESPAÇO"

        if(flag_tiro == 0)
        {
          tiro.pos_x = nave_principal.pos_x;
          tiro.pos_y = tiro_y;
          flag_tiro = 1;

          nave_principal.quadro_atual[0] = 0.4;           // define o sprite do personagem olhando para cima
          nave_principal.quadro_atual[1] = 0.5;
          nave_principal.quadro_atual[2] = 0;
          nave_principal.quadro_atual[3] = 1;

          teste_corrida = 0;
        }
        
        break;

    case 'p':
    case 'P':

        if(jogo_pausado == 0)
        {
            jogo_pausado = 1;                           // pausa o jogo
            break;
        }

        else
            jogo_pausado = 0;
            glutTimerFunc(0, atualizaCena, velocidade_inimigos); 
        break;

    case 'r':
    case 'R':
        reinicia_jogo();                               // reinica o jogo
        break;

    default:
        break;
    }
}