
void desenhaMenu()
{
    glColor3f(1.0, 1.0, 1.0);

    glEnable(GL_TEXTURE_2D);

    switch(item_menu)
    {
        case 1:
            glBindTexture(GL_TEXTURE_2D, idTexturaMenuCampanha);
        break;

        case 2:
            glBindTexture(GL_TEXTURE_2D, idTexturaMenuInfinito);
        break;

        case 3:
            glBindTexture(GL_TEXTURE_2D, idTexturaMenuCreditos);
        break;

        default:
            glBindTexture(GL_TEXTURE_2D, idTexturaMenu);
        break;
    }

    glBegin(GL_TRIANGLE_FAN);

        glTexCoord2f(0, 0);
        glVertex2f(janela_0_x, janela_0_y);

        glTexCoord2f(1, 0);
        glVertex2f(janela_pos_x, janela_0_y);

        glTexCoord2f(1, 1);
        glVertex2f(janela_pos_x, janela_pos_y);

        glTexCoord2f(0, 1);
        glVertex2f(janela_0_x,  janela_pos_y);

    glEnd();

    glDisable(GL_TEXTURE_2D);
}