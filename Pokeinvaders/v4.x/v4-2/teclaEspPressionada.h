
void teclaEspPressionada(int key, int x, int y)
{
    switch(key)
    {
    case GLUT_KEY_RIGHT:                      // direita

        if(fase > 0)
        {
            if(nave_principal.pos_x < fim_nave_dir)
            {
                nave_principal.pos_x += 2;         // se o personagem não atingiu o canto da tela, desloca para a direta
            }

            if(teste_corrida == 0)
            {
                nave_principal.quadro_atual[0] = 0.5;       // muda o frame atual do personagem, para gerar uma animação
                nave_principal.quadro_atual[1] = 0.6;
                nave_principal.quadro_atual[2] = 0;
                nave_principal.quadro_atual[3] = 1;

                teste_corrida = 1;
            }

            else if(teste_corrida == 1)
            {
                nave_principal.quadro_atual[0] = 0.4;      // muda o frame atual do personagem, para gerar uma animação
                nave_principal.quadro_atual[1] = 0.5;
                nave_principal.quadro_atual[2] = 0;
                nave_principal.quadro_atual[3] = 1;

                teste_corrida = 2;
            }

            else if(teste_corrida == 2)
            {
                nave_principal.quadro_atual[0] = 0.6;      // muda o frame atual do personagem, para gerar uma animação
                nave_principal.quadro_atual[1] = 0.7;
                nave_principal.quadro_atual[2] = 0;
                nave_principal.quadro_atual[3] = 1;

                teste_corrida = 0;
            }
        }

        break;

    case GLUT_KEY_LEFT:                       // esquerda

        if(fase > 0)
        {
            if(nave_principal.pos_x > fim_nave_esq)
            {
                nave_principal.pos_x -= 2;        // se o personagem não atingiu o canto da tela, desloca para a esquerda
            }

            if(teste_corrida == 0)
            {
                nave_principal.quadro_atual[0] = 0.2;       // muda o frame atual do personagem, para gerar uma animação
                nave_principal.quadro_atual[1] = 0.3;
                nave_principal.quadro_atual[2] = 0;
                nave_principal.quadro_atual[3] = 1;

                teste_corrida = 1;
            }

            else if(teste_corrida == 1)
            {
                nave_principal.quadro_atual[0] = 0.1;       // muda o frame atual do personagem, para gerar uma animação
                nave_principal.quadro_atual[1] = 0.2;
                nave_principal.quadro_atual[2] = 0;
                nave_principal.quadro_atual[3] = 1;

                teste_corrida = 2;
            }

            else if(teste_corrida == 2)
            {
                nave_principal.quadro_atual[0] = 0.3;       // muda o frame atual do personagem, para gerar uma animação
                nave_principal.quadro_atual[1] = 0.4;
                nave_principal.quadro_atual[2] = 0;
                nave_principal.quadro_atual[3] = 1;

                teste_corrida = 0;
            
            }
        }

        break;

    case GLUT_KEY_UP:

        if(fase <= 0)
        {
            if(item_menu > 0)
            {
                item_menu --;
            }
        }

    break;

    case GLUT_KEY_DOWN:

        if(fase <= 0)
        {
            if(item_menu < 4)
            {
                item_menu ++;
            }
        }

    break;

    default:
        break;
    }
}
