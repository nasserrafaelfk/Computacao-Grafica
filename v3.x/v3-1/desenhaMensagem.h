void desenhaMensagem()
{
	glColor3f(1.0, 1.0, 1.0);                             // branco, para não influenciar na textura

    glEnable(GL_TEXTURE_2D);

    glBindTexture(GL_TEXTURE_2D, idTexturaTextoFim);

    glPushMatrix();                                       // usando o Método Bão ©

    glTranslatef(texto_fim_x, texto_fim_y, 0);

    glBegin(GL_TRIANGLE_FAN);

        glTexCoord2f(0, 0);
        glVertex2f(-texto_fim_larg/2, -texto_fim_alt/2); // v3---v2

        glTexCoord2f(1, 0);
        glVertex2f( texto_fim_larg/2, -texto_fim_alt/2); // |     |

        glTexCoord2f(1, 1);
        glVertex2f( texto_fim_larg/2,  texto_fim_alt/2); // |     |

        glTexCoord2f(0, 1);
        glVertex2f(-texto_fim_larg/2,  texto_fim_alt/2); // v0---v1

    glEnd();

    glPopMatrix();

    glDisable(GL_TEXTURE_2D);
}