
void teclaEspPressionada(int key, int x, int y)
{
    switch(key)
    {
    case GLUT_KEY_RIGHT:                      // direita

        if(nave_principal.pos_x < fim_nave_dir)
        {
            nave_principal.pos_x ++;         // se o personagem não atingiu o canto da tela, desloca para a direta
        }

        if(teste_corrida == 0)
        {
            nave_principal.quadro_atual[0] = 0.1;       // muda o frame atual do personagem, para gerar uma animação
            nave_principal.quadro_atual[1] = 0.2;
            nave_principal.quadro_atual[2] = 0;
            nave_principal.quadro_atual[3] = 1;

            teste_corrida = 1;
        }

        else
        {
            nave_principal.quadro_atual[0] = 0.0;      // muda o frame atual do personagem, para gerar uma animação
            nave_principal.quadro_atual[1] = 0.1;
            nave_principal.quadro_atual[2] = 0;
            nave_principal.quadro_atual[3] = 1;

            teste_corrida = 0;
        }

        break;

    case GLUT_KEY_LEFT:                       // esquerda

        if(nave_principal.pos_x > fim_nave_esq)
        {
            nave_principal.pos_x --;        // se o personagem não atingiu o canto da tela, desloca para a esquerda
        }

        if(teste_corrida == 0)
        {
            nave_principal.quadro_atual[0] = 0.9;       // muda o frame atual do personagem, para gerar uma animação
            nave_principal.quadro_atual[1] = 1.0;
            nave_principal.quadro_atual[2] = 0;
            nave_principal.quadro_atual[3] = 1;

            teste_corrida = 1;
        }

        else
        {
            nave_principal.quadro_atual[0] = 0.8;       // muda o frame atual do personagem, para gerar uma animação
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
