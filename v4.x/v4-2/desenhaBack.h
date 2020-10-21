
void desenhaBack()
{
    glColor3f(1.0, 1.0, 1.0);                             // branco, para não influenciar na textura

    glEnable(GL_TEXTURE_2D);

    glBindTexture(GL_TEXTURE_2D, idTexturaBack);

    glBegin(GL_TRIANGLE_FAN);

        glTexCoord2f(quadro_back[0], quadro_back[2]);
                                                          // desenha um quadrado do tamanho da tela, que receberá
        glVertex2f(janela_0_x, janela_0_y); // v3---v2                      // a textura do background do jogo

        glTexCoord2f(quadro_back[1], quadro_back[2]);
        glVertex2f(janela_pos_x, janela_0_y); // |     |

        glTexCoord2f(quadro_back[1], quadro_back[3]);
        glVertex2f(janela_pos_x, janela_pos_y); // |     |

        glTexCoord2f(quadro_back[0], quadro_back[3]);
        glVertex2f(janela_0_x,  janela_pos_y); // v0---v1

    glEnd();

    glDisable(GL_TEXTURE_2D);
}