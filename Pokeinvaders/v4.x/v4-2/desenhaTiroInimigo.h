
void verificaColisaoSemParar();

void desenhaTiroInimigo()
{
    glColor3f(1.0, 1.0, 1.0);                             // branco, para não influenciar na textura

    glEnable(GL_TEXTURE_2D);

    glBindTexture(GL_TEXTURE_2D, idTexturaTiroInimigo);   // -->> textura de tiro inimigo implementada

    glPushMatrix();                                       // usando o Método Bão ©

    glTranslatef(tiro_inimigo.pos_x, tiro_inimigo.pos_y, 0);

    glBegin(GL_TRIANGLE_FAN);

        glTexCoord2f(tiro_inimigo.quadro_atual[0], tiro_inimigo.quadro_atual[2]);
        glVertex2f(-larg_tiro_inimigo/2, -alt_tiro_inimigo/2); // v3---v2

        glTexCoord2f(tiro_inimigo.quadro_atual[1], tiro_inimigo.quadro_atual[2]);
        glVertex2f( larg_tiro_inimigo/2, -alt_tiro_inimigo/2); // |     |

        glTexCoord2f(tiro_inimigo.quadro_atual[1], tiro_inimigo.quadro_atual[3]);
        glVertex2f( larg_tiro_inimigo/2,  alt_tiro_inimigo/2); // |     |

        glTexCoord2f(tiro_inimigo.quadro_atual[0], tiro_inimigo.quadro_atual[3]);
        glVertex2f(-larg_tiro_inimigo/2,  alt_tiro_inimigo/2); // v0---v1

    glEnd();

    glPopMatrix();

    glDisable(GL_TEXTURE_2D);

    /*
    glColor3f(1.0, 1.0, 1.0);                             // branco, para não influenciar na textura

    glEnable(GL_TEXTURE_2D);

    glBindTexture(GL_TEXTURE_2D, idTexturaPokebola);

    glPushMatrix();                                       // usando o Método Bão ©

    glTranslatef(tiro_inimigo.pos_x, tiro_inimigo.pos_y, 0);

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

    glDisable(GL_TEXTURE_2D);

    

    if(tiros_param == 1)
    {
        verificaColisao();
        tiro.pos_y ++;
        verificaColisao();
    }

    else
    {
        verificaColisaoSemParar();
        tiro.pos_y ++;
        verificaColisaoSemParar();
    }

	*/
}