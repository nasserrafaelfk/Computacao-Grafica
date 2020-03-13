#include <SOIL/SOIL.h>
#include <GL/glew.h>
#include <GL/freeglut.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct{
  int pos_x;
  int pos_y;
  int larg_nav;
  int alt_nav;
} navinha;

navinha nave_principal;                                 // isso precisa ser global?
navinha nave_inimigo;

signed char incremento = 1;

GLuint idTexturaNave;
GLuint idTexturaBack;
GLuint idTexturaCaterpie;
GLuint idTexturaPidgey;

GLuint carregaTextura(const char* arquivo) {
    GLuint idTextura = SOIL_load_OGL_texture(
                           arquivo,
                           SOIL_LOAD_AUTO,
                           SOIL_CREATE_NEW_ID,
                           SOIL_FLAG_INVERT_Y
                       );

    if (idTextura == 0) {
        printf("Erro do SOIL: '%s'\n", SOIL_last_result());
    }

    return idTextura;
}

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

void desenhaInimigos(char pokemon)
{
    glColor3f(1.0, 1.0, 1.0);                             // branco, para não influenciar na textura

    glEnable(GL_TEXTURE_2D);

    if(pokemon == 1)
      glBindTexture(GL_TEXTURE_2D, idTexturaCaterpie);

    if(pokemon == 2)
      glBindTexture(GL_TEXTURE_2D, idTexturaPidgey);  

    if(pokemon == 3)
      glBindTexture(GL_TEXTURE_2D, idTexturaPidgey);      // MUDAR PARA OUTRO POKEMON

    glPushMatrix();                                       // usando o Método Bão ©

    glTranslatef(nave_inimigo.pos_x, nave_inimigo.pos_y, 0);

    glBegin(GL_TRIANGLE_FAN);

        glTexCoord2f(0, 0);
        glVertex2f(-nave_inimigo.larg_nav/2, -nave_inimigo.alt_nav/2); // v3---v2

        glTexCoord2f(1, 0);
        glVertex2f( nave_inimigo.larg_nav/2, -nave_inimigo.alt_nav/2); // |     |

        glTexCoord2f(1, 1);
        glVertex2f( nave_inimigo.larg_nav/2,  nave_inimigo.alt_nav/2); // |     |

        glTexCoord2f(0, 1);
        glVertex2f(-nave_inimigo.larg_nav/2,  nave_inimigo.alt_nav/2); // v0---v1

    glEnd();

    glPopMatrix();

    glDisable(GL_TEXTURE_2D);
}

void desenhaMinhaCena()
{
    glClear(GL_COLOR_BUFFER_BIT);

    desenhaBack();

    desenhaNavinha();

    for(int i = 0; i < 3; i ++)
    {

      for(int j = 0; j < 10; j ++)
      {
        desenhaInimigos(1);
        nave_inimigo.pos_x += 7;
      }

      nave_inimigo.pos_x -= 70;
      nave_inimigo.pos_y += 7;
    }

    nave_inimigo.pos_x += 7;

    for(int i = 0; i < 8; i ++)
      {
        desenhaInimigos(2);
        nave_inimigo.pos_x += 7;
      }

    nave_inimigo.pos_x -= 49;
    nave_inimigo.pos_y += 7;

    for(int i = 0; i < 6; i ++)
    {
      desenhaInimigos(3);
      nave_inimigo.pos_x += 7;
    }

    nave_inimigo.pos_x -= 56;                              
    nave_inimigo.pos_y -= 28;                            // retorna a posição inicial

    glutSwapBuffers();
}

void configura_tam_naves()
{
    nave_principal.pos_x = 50;                                // inicialização da posição da nave principal
    nave_principal.pos_y = 20;
    nave_principal.larg_nav = 10;                             // obs: organizar melhor a função setup
    nave_principal.alt_nav = 10;

    nave_inimigo.pos_x = 5;
    nave_inimigo.pos_y = 55;
    nave_inimigo.larg_nav = 7;                             // obs: organizar melhor a função setup
    nave_inimigo.alt_nav = 7;
}

void carregaTexturas()
{
    idTexturaNave = carregaTextura("nave.png");
    idTexturaBack = carregaTextura("back.png");
    idTexturaCaterpie = carregaTextura("caterpie.png");
    idTexturaPidgey = carregaTextura("pidgey.png");
}

void setup()
{
    glClearColor(0.0, 0.0, 0.0, 0.0);                         // preto

    glEnable(GL_BLEND );
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);  

    carregaTexturas();

    configura_tam_naves();
}

void redimensionada(int width, int height)
{
   glViewport(0, 0, width, height);

   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   glOrtho(0.0, 100.0, 0.0, 100.0, -1.0, 1.0);

   glMatrixMode(GL_MODELVIEW);
   glLoadIdentity();
}

void teclaPressionada(unsigned char key, int x, int y)
{
    switch(key)
    {
    case 27:      // Tecla "ESC"
        exit(0);  // Sai da aplicação
        break;

    case 32:      // Tecla "ESPAÇO"
        //atira
        break;

    default:
        break;
    }
}

void teclaEspPressionada(int key, int x, int y)
{
    switch(key)
    {
    case GLUT_KEY_RIGHT:                      // direita

        if(nave_principal.pos_x < 90)
        {
            nave_principal.pos_x ++;
        }

        glutPostRedisplay();

        break;

    case GLUT_KEY_LEFT:                       // esquerda

        if(nave_principal.pos_x > 10)
        {
            nave_principal.pos_x --;
        }

        glutPostRedisplay();

        break;

    default:
        break;
    }
}

// Callback do evento timer
void atualizaCena(int periodo) {
    
    if(incremento == 1)
    {
      if(nave_inimigo.pos_x < 30)
        nave_inimigo.pos_x ++;

      else
        incremento *= -1;
    }

    else
    {
      if(nave_inimigo.pos_x > 5)
        nave_inimigo.pos_x --;

      else
        incremento *= -1;
    }

    // Pede ao GLUT para redesenhar a tela, assim que possível
    glutPostRedisplay();

    // Se registra novamente, para que fique sempre sendo chamada (30 FPS)
    glutTimerFunc(periodo, atualizaCena, periodo);
}

int main(int argc, char** argv)
{
   glutInit(&argc, argv);

   glutInitContextVersion(1, 1);
   glutInitContextProfile(GLUT_COMPATIBILITY_PROFILE);

   glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);    // obs: trocar para GLUT_DOUBLE pra fazer animação
   glutInitWindowSize(500, 500);
   glutInitWindowPosition(100, 100);

   glutCreateWindow("joguinho");                    // obs: mudar esse nome dps

   glutDisplayFunc(desenhaMinhaCena);
   glutReshapeFunc(redimensionada);
   glutKeyboardFunc(teclaPressionada);
   glutSpecialFunc(teclaEspPressionada);            // setas e fx
   glutTimerFunc(0, atualizaCena, 132);               // função timer para as naves inimigas andarem

   setup();                                         // obs: organizar essa função dps

   glutMainLoop();
   return 0;
}