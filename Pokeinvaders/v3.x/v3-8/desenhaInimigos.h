
void desenhaInimigos(signed short int pokemon)
{
    glColor3f(1.0, 1.0, 1.0);                             // branco, para não influenciar na textura

    glEnable(GL_TEXTURE_2D);

    switch(pokemon)                                      // decide qual inimigo será desenhado, de acordo com o
    {                                                    // parâmetro enviado na chamada da função
      case 1:
        if(fase == 1)
            glBindTexture(GL_TEXTURE_2D, idTexturaCaterpie);

        else if(fase == 2)
            glBindTexture(GL_TEXTURE_2D, idTexturaBuba);

        else if(fase == 3)
            glBindTexture(GL_TEXTURE_2D, idTexturaVenu);

        else if(fase == 4)
            glBindTexture(GL_TEXTURE_2D, idTexturaHypno);

        break;

      case 2:
        if(fase == 1)
            glBindTexture(GL_TEXTURE_2D, idTexturaPidgey);

        else if(fase == 2)
            glBindTexture(GL_TEXTURE_2D, idTexturaSquirtle);

        else if(fase == 3)
            glBindTexture(GL_TEXTURE_2D, idTexturaBlas);

        else if(fase == 4)
            glBindTexture(GL_TEXTURE_2D, idTexturaAlakazam);

        break;

      case 3:
        if(fase == 1)
            glBindTexture(GL_TEXTURE_2D, idTexturaButter);

        else if(fase == 2)
            glBindTexture(GL_TEXTURE_2D, idTexturaChar);

        else if(fase == 3)
            glBindTexture(GL_TEXTURE_2D, idTexturaCharizard);

        else if(fase == 4)
            glBindTexture(GL_TEXTURE_2D, idTexturaMew);

        break;

      case 4:
        if(fase == 1)
            glBindTexture(GL_TEXTURE_2D, idTexturaPikachu);

        else if(fase == 2)
            glBindTexture(GL_TEXTURE_2D, idTexturaRaichu);

        else if(fase == 3)
            glBindTexture(GL_TEXTURE_2D, idTexturaSnorlax);

        else if(fase == 4)
            glBindTexture(GL_TEXTURE_2D, idTexturaMewtwo);
        break;

      default:
        break;
    }

    glPushMatrix();                                       // usando o Método Bão ©

    glTranslatef(nave_inimigo.pos_x, nave_inimigo.pos_y, 0);

    glBegin(GL_TRIANGLE_FAN);

        glTexCoord2f(nave_inimigo.quadro_atual[0], nave_inimigo.quadro_atual[2]);
        glVertex2f(-nave_inimigo.larg_nav/2, -nave_inimigo.alt_nav/2); // v3---v2

        glTexCoord2f(nave_inimigo.quadro_atual[1], nave_inimigo.quadro_atual[2]);
        glVertex2f( nave_inimigo.larg_nav/2, -nave_inimigo.alt_nav/2); // |     |

        glTexCoord2f(nave_inimigo.quadro_atual[1], nave_inimigo.quadro_atual[3]);
        glVertex2f( nave_inimigo.larg_nav/2,  nave_inimigo.alt_nav/2); // |     |

        glTexCoord2f(nave_inimigo.quadro_atual[0], nave_inimigo.quadro_atual[3]);
        glVertex2f(-nave_inimigo.larg_nav/2,  nave_inimigo.alt_nav/2); // v0---v1

    glEnd();

    glPopMatrix();

    glDisable(GL_TEXTURE_2D);
}