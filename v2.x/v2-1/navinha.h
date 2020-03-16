typedef struct{
  int pos_x;
  int pos_y;
  int larg_nav;
  int alt_nav;
} navinha;

navinha nave_principal;

void desenhaNavinha()
{
    glColor3f(1.0, 1.0, 1.0);                             // branco, para não influenciar na textura

    glEnable(GL_TEXTURE_2D);

    glBindTexture(GL_TEXTURE_2D, idTexturaNave);

    glPushMatrix();                                       // usando o Método Bão ©

    glTranslatef(nave_principal.pos_x, nave_principal.pos_y, 0);

    glBegin(GL_TRIANGLE_FAN);

        glTexCoord2f(0, 0);
        glVertex2f(-nave_principal.larg_nav/2, -nave_principal.alt_nav/2); // v3---v2

        glTexCoord2f(1, 0);
        glVertex2f( nave_principal.larg_nav/2, -nave_principal.alt_nav/2); // |     |

        glTexCoord2f(1, 1);
        glVertex2f( nave_principal.larg_nav/2,  nave_principal.alt_nav/2); // |     |

        glTexCoord2f(0, 1);
        glVertex2f(-nave_principal.larg_nav/2,  nave_principal.alt_nav/2); // v0---v1

    glEnd();

    glPopMatrix();

    glDisable(GL_TEXTURE_2D);
}