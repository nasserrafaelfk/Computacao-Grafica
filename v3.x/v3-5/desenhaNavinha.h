
void desenhaNavinha()
{
    glColor3f(1.0, 1.0, 1.0);                             // branco, para não influenciar na textura

    glEnable(GL_TEXTURE_2D);

    glBindTexture(GL_TEXTURE_2D, idTexturaSpriteCorrida);

    glPushMatrix();                                       // usando o Método Bão ©

    glTranslatef(nave_principal.pos_x, nave_principal.pos_y, 0);

    glBegin(GL_TRIANGLE_FAN);
                                                          // desenha a nave principal, de acordo com o
                                                          // sprite atual dela

        glTexCoord2f(nave_principal.quadro_atual[0], nave_principal.quadro_atual[2]);
        glVertex2f(-nave_principal.larg_nav/2, -nave_principal.alt_nav/2); // v3---v2

        glTexCoord2f(nave_principal.quadro_atual[1], nave_principal.quadro_atual[2]);
        glVertex2f( nave_principal.larg_nav/2, -nave_principal.alt_nav/2); // |     |

        glTexCoord2f(nave_principal.quadro_atual[1], nave_principal.quadro_atual[3]);
        glVertex2f( nave_principal.larg_nav/2,  nave_principal.alt_nav/2); // |     |

        glTexCoord2f(nave_principal.quadro_atual[0], nave_principal.quadro_atual[3]);
        glVertex2f(-nave_principal.larg_nav/2,  nave_principal.alt_nav/2); // v0---v1

    glEnd();

    glPopMatrix();

    glDisable(GL_TEXTURE_2D);
}