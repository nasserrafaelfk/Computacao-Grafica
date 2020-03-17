navinha tiro;

void verificaColisao();

void verificaFimDeJogo();

void desenhaTiro()
{
    glColor3f(1.0, 1.0, 1.0);                             // branco, para não influenciar na textura

    glEnable(GL_TEXTURE_2D);

    glBindTexture(GL_TEXTURE_2D, idTexturaPokebola);

    glPushMatrix();                                       // usando o Método Bão ©

    glTranslatef(tiro.pos_x, tiro.pos_y, 0);

    glBegin(GL_TRIANGLE_FAN);

        glTexCoord2f(0, 0);
        glVertex2f(-larg_tiro/2, -alt_tiro/2); // v3---v2

        glTexCoord2f(1, 0);
        glVertex2f( larg_tiro/2, -alt_tiro/2); // |     |

        glTexCoord2f(1, 1);
        glVertex2f( larg_tiro/2,  alt_tiro/2); // |     |

        glTexCoord2f(0, 1);
        glVertex2f(-larg_tiro/2,  alt_tiro/2); // v0---v1

    glEnd();

    glPopMatrix();

    glDisable(GL_TEXTURE_2D);

    verificaColisao();

    verificaFimDeJogo();
}


void chamaDesenhaTiro()
{
    if(flag_tiro)
    {
        desenhaTiro();
         tiro.pos_y ++;

        if(tiro.pos_y >= tam_tela)
        {
          flag_tiro = 0;
        }
    }
}