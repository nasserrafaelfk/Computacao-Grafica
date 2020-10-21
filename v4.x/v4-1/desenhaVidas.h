
void desenhaVidas()
{
	glColor3f(1.0, 1.0, 1.0);                             // branco, para não influenciar na textura

    glEnable(GL_TEXTURE_2D);

    glBindTexture(GL_TEXTURE_2D, idTexturaSpriteCorrida);

    glPushMatrix();                                       // usando o Método Bão ©

    glTranslatef(vidas_pos_x, vidas_pos_y, 0);

    glBegin(GL_TRIANGLE_FAN);

        glTexCoord2f(0.8, 0);
        glVertex2f(-nave_principal.larg_nav/2, -nave_principal.alt_nav/2); // v3---v2

        glTexCoord2f(0.9, 0);
        glVertex2f( nave_principal.larg_nav/2, -nave_principal.alt_nav/2); // |     |

        glTexCoord2f(0.9, 1);
        glVertex2f( nave_principal.larg_nav/2,  nave_principal.alt_nav/2); // |     |

        glTexCoord2f(0.8, 1);
        glVertex2f(-nave_principal.larg_nav/2,  nave_principal.alt_nav/2); // v0---v1

    glEnd();

  //------------------------------------------------------------------------------------------------------------

    switch(quantidade_vidas)
    {
    	case 0:
    		quadro_vidas[0] = 0.75;
    		quadro_vidas[1] = 1.00;
    		break;

    	case 1:
    		quadro_vidas[0] = 0.00;
    		quadro_vidas[1] = 0.25;	
    		break;

    	case 2:
    		quadro_vidas[0] = 0.25;
    		quadro_vidas[1] = 0.50;
    		break;

    	case 3:
    		quadro_vidas[0] = 0.50;
    		quadro_vidas[1] = 0.75;
    		break;

    	default:
    		quadro_vidas[0] = 0.75;				// em caso de bug, indicar 0 vidas
    		quadro_vidas[1] = 1.00;
    		break;
    }

    glBindTexture(GL_TEXTURE_2D, idTexturaVidas);

    glBegin(GL_TRIANGLE_FAN);

        glTexCoord2f(quadro_vidas[0], quadro_vidas[2]);
        glVertex2f( nave_principal.larg_nav/2, -nave_principal.alt_nav/4); // v3---v2

        glTexCoord2f(quadro_vidas[1], quadro_vidas[2]);
        glVertex2f( nave_principal.larg_nav, -nave_principal.alt_nav/4); // |     |

        glTexCoord2f(quadro_vidas[1], quadro_vidas[3]);
        glVertex2f( nave_principal.larg_nav,  nave_principal.alt_nav/4); // |     |

        glTexCoord2f(quadro_vidas[0], quadro_vidas[3]);
        glVertex2f( nave_principal.larg_nav/2,  nave_principal.alt_nav/4); // v0---v1

    glEnd();

    //---------------------------------------------------------------------------------------------------------

    glPopMatrix();

    glDisable(GL_TEXTURE_2D);
}