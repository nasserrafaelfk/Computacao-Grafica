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
          glutPostRedisplay();
        }
        
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

        break;

    case GLUT_KEY_LEFT:                       // esquerda

        if(nave_principal.pos_x > fim_nave_esq)
        {
            nave_principal.pos_x --;
        }

        break;

    default:
        break;
    }
}