
void desenhaNuvens()
{
	glColor3f(1.0, 1.0, 1.0);                             // branco, para não influenciar na textura

    glEnable(GL_TEXTURE_2D);

    if( (fase == 1) || (fase == 2) )
    {
        glBindTexture(GL_TEXTURE_2D, idTexturaNuvens);
    }

    if( (fase == 3) || (fase == 4) )
    {
        glBindTexture(GL_TEXTURE_2D, idTexturaNuvensEscuras);
    }

    glPushMatrix();                                       // usando o Método Bão ©

    glTranslatef(nuvens.pos_x, nuvens.pos_y, 0);

    glBegin(GL_TRIANGLE_FAN);
                                                          // desenha a nave principal, de acordo com o
                                                          // sprite atual dela

        glTexCoord2f(0, 0);
        glVertex2f(-nuvens.larg_nav/2, -nuvens.alt_nav/2); // v3---v2

        glTexCoord2f(1, 0);
        glVertex2f( nuvens.larg_nav/2, -nuvens.alt_nav/2); // |     |

        glTexCoord2f(1, 1);
        glVertex2f( nuvens.larg_nav/2,  nuvens.alt_nav/2); // |     |

        glTexCoord2f(0, 1);
        glVertex2f(-nuvens.larg_nav/2,  nuvens.alt_nav/2); // v0---v1

    glEnd();

    glPopMatrix();

    glDisable(GL_TEXTURE_2D);
}