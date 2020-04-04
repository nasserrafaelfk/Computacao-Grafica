
void desenhaPokebolaCapturado()
{
    glColor3f(1.0, 1.0, 1.0);                             // branco, para não influenciar na textura

    glEnable(GL_TEXTURE_2D);

    glBindTexture(GL_TEXTURE_2D, idTexturaPokebolaCapturado);

    glPushMatrix();                                       // usando o Método Bão ©

    glTranslatef(tiro.pos_x, tiro.pos_y, 0);

    glBegin(GL_TRIANGLE_FAN);

        glTexCoord2f(tiro.quadro_atual[0], tiro.quadro_atual[2]);
        glVertex2f(-larg_tiro/2, -alt_tiro/2); // v3---v2

        glTexCoord2f(tiro.quadro_atual[1], tiro.quadro_atual[2]);
        glVertex2f( larg_tiro/2, -alt_tiro/2); // |     |

        glTexCoord2f(tiro.quadro_atual[1], tiro.quadro_atual[3]);
        glVertex2f( larg_tiro/2,  alt_tiro/2); // |     |

        glTexCoord2f(tiro.quadro_atual[0], tiro.quadro_atual[3]);
        glVertex2f(-larg_tiro/2,  alt_tiro/2); // v0---v1

    glEnd();

    glPopMatrix();
}