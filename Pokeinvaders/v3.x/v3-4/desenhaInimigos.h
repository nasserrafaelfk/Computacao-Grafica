
void desenhaInimigos(signed short int pokemon)
{
    glColor3f(1.0, 1.0, 1.0);                             // branco, para não influenciar na textura

    glEnable(GL_TEXTURE_2D);

    switch(pokemon)                                      // decide qual inimigo será desenhado, de acordo com o
    {                                                    // parâmetro enviado na chamada da função
      case 1:
        glBindTexture(GL_TEXTURE_2D, idTexturaCaterpie);
        break;

      case 2:
        glBindTexture(GL_TEXTURE_2D, idTexturaPidgey);
        break;

      case 3:
        glBindTexture(GL_TEXTURE_2D, idTexturaButter);
        break;

      case 4:
        glBindTexture(GL_TEXTURE_2D, idTexturaPikachu);
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