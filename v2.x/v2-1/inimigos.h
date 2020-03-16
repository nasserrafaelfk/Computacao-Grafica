navinha nave_inimigo;

void desenhaInimigos(char pokemon)
{
    glColor3f(1.0, 1.0, 1.0);                             // branco, para não influenciar na textura

    glEnable(GL_TEXTURE_2D);

    switch(pokemon)
    {
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

        glTexCoord2f(0, 0);
        glVertex2f(-nave_inimigo.larg_nav/2, -nave_inimigo.alt_nav/2); // v3---v2

        glTexCoord2f(1, 0);
        glVertex2f( nave_inimigo.larg_nav/2, -nave_inimigo.alt_nav/2); // |     |

        glTexCoord2f(1, 1);
        glVertex2f( nave_inimigo.larg_nav/2,  nave_inimigo.alt_nav/2); // |     |

        glTexCoord2f(0, 1);
        glVertex2f(-nave_inimigo.larg_nav/2,  nave_inimigo.alt_nav/2); // v0---v1

    glEnd();

    glPopMatrix();

    glDisable(GL_TEXTURE_2D);
}

void chamaDesenhaInimigos()
{
    for(int i = 0; i < quant_fileira_caterpie; i ++)
    {

      for(int j = 0; j < quant_caterpie; j ++)
      {
        desenhaInimigos(1);
        nave_inimigo.pos_x += larg_nav_inim;
      }

      nave_inimigo.pos_x -= (quant_caterpie * larg_nav_inim);
      nave_inimigo.pos_y += alt_nav_inim;
    }

    nave_inimigo.pos_x += larg_nav_inim;

    for(int i = 0; i < quant_pidgey; i ++)
      {
        desenhaInimigos(2);
        nave_inimigo.pos_x += larg_nav_inim;
      }

    nave_inimigo.pos_x -= (larg_nav_inim * quant_pidgey);

    nave_inimigo.pos_x += larg_nav_inim;
    nave_inimigo.pos_y += alt_nav_inim;

    for(int i = 0; i < quant_butter; i ++)
    {
      desenhaInimigos(3);
      nave_inimigo.pos_x += larg_nav_inim;
    }

    nave_inimigo.pos_x -= (2 * larg_nav_inim);
    nave_inimigo.pos_y += alt_nav_inim;
    desenhaInimigos(4);

    nave_inimigo.pos_x -= (3 * larg_nav_inim);
    desenhaInimigos(4);

    nave_inimigo.pos_x -= (3 * larg_nav_inim);                              
    nave_inimigo.pos_y -= (5 * alt_nav_inim);                            // retorna a posição inicial
}