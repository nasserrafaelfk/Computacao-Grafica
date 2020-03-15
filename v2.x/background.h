void desenhaBack()
{
    glColor3f(1.0, 1.0, 1.0);                             // branco, para não influenciar na textura

    glEnable(GL_TEXTURE_2D);

    glBindTexture(GL_TEXTURE_2D, idTexturaBack);

    glBegin(GL_TRIANGLE_FAN);

        glTexCoord2f(0, 0);
        glVertex2f(0, 0); // v3---v2

        glTexCoord2f(1, 0);
        glVertex2f(100, 0); // |     |

        glTexCoord2f(1, 1);
        glVertex2f(100, 100); // |     |

        glTexCoord2f(0, 1);
        glVertex2f(0,  100); // v0---v1

    glEnd();

    glDisable(GL_TEXTURE_2D);
}