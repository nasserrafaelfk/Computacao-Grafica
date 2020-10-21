
void desenhaMensagem(signed short int mensagem_desenhada)
{
    glColor3f(1.0, 1.0, 1.0);                             // branco, para não influenciar na textura

    glEnable(GL_TEXTURE_2D);

    switch(mensagem_desenhada)
    {
        case 0:                                               // fim de jogo
            glBindTexture(GL_TEXTURE_2D, idTexturaTextoFim);      // exibe a mensagem de fim de jogo, que é uma textura
                                                              // gerada online, para que possa ter uma fonte que o
                                                              // open gl não teria suporte (a fonte do minecraft hehe)
            break;

        case 1:
            glBindTexture(GL_TEXTURE_2D, idTexturaMensagemReiniciar);   // deseja reiniciar?
            break;

         case 2:
            if(fase <= 0)
            {
                glBindTexture(GL_TEXTURE_2D, idTexturaMensagemEncerrar);   // deseja encerrar?
            }

            else
            {
                glBindTexture(GL_TEXTURE_2D, idTexturaMensagemVoltar);   // deseja voltar ao menu?
            }

            break;

        case 3:
            glBindTexture(GL_TEXTURE_2D, idTexturaMensagemPausa);   // jogo pausado
            break;

        case 4:
            glBindTexture(GL_TEXTURE_2D, idTexturaMensagemGameOver);  // game over

        default:
            break;  
    }

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