void configura_tam_naves();
void inicializa_matriz_inimigos();

void reinicia_jogo()
{
    configura_tam_naves();
    inicializa_matriz_inimigos();
}

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

          nave_principal.quadro_atual[0] = 0.4;
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
            jogo_pausado = 1;
            break;
        }

        else
            jogo_pausado = 0;
            glutTimerFunc(0, atualizaCena, velocidade_inimigos); 
        break;

    case 'r':
    case 'R':
        reinicia_jogo();
        break;

    default:
        break;
    }
}

void teclaEspPressionada(int key, int x, int y)
{
    switch(key)
    {
    case GLUT_KEY_RIGHT:                      // direita

        if(nave_principal.pos_x < fim_nave_dir)
        {
            nave_principal.pos_x ++;
        }

        if(teste_corrida == 0)
        {
            nave_principal.quadro_atual[0] = 0.1;
            nave_principal.quadro_atual[1] = 0.2;
            nave_principal.quadro_atual[2] = 0;
            nave_principal.quadro_atual[3] = 1;

            teste_corrida = 1;
        }

        else
        {
            nave_principal.quadro_atual[0] = 0.0;
            nave_principal.quadro_atual[1] = 0.1;
            nave_principal.quadro_atual[2] = 0;
            nave_principal.quadro_atual[3] = 1;

            teste_corrida = 0;
        }

        break;

    case GLUT_KEY_LEFT:                       // esquerda

        if(nave_principal.pos_x > fim_nave_esq)
        {
            nave_principal.pos_x --;
        }

        if(teste_corrida == 0)
        {
            nave_principal.quadro_atual[0] = 0.9;
            nave_principal.quadro_atual[1] = 1.0;
            nave_principal.quadro_atual[2] = 0;
            nave_principal.quadro_atual[3] = 1;

            teste_corrida = 1;
        }

        else
        {
            nave_principal.quadro_atual[0] = 0.8;
            nave_principal.quadro_atual[1] = 0.9;
            nave_principal.quadro_atual[2] = 0;
            nave_principal.quadro_atual[3] = 1;

            teste_corrida = 0;
        }

        break;

    default:
        break;
    }
}