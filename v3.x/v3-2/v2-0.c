
#include <SOIL/SOIL.h>
#include <GL/glew.h>
#include <GL/freeglut.h>
#include <stdlib.h>
#include <stdio.h>

#define janela_tam_x 500
#define janela_tam_y 500
#define janela_pos_x 100
#define janela_pos_y 100

#define tam_tela 100

#define velocidade_inimigos 132

#define fim_inim_esq 5
#define fim_inim_dir 30

#define fim_nave_esq 10
#define fim_nave_dir 90

#define nave_x_inicial 50
#define nave_y_inicial 20

#define alt_nav_prin 10
#define larg_nav_prin 10

#define nave_x_inim 5
#define nave_y_inim 55

#define alt_nav_inim 7
#define larg_nav_inim 7

#define quant_fileira_caterpie 3
#define quant_caterpie 10

#define quant_pidgey 8

#define quant_butter 6

#define tiro_x 50
#define tiro_y 30

#define alt_tiro 5
#define larg_tiro 5

typedef struct{
  int pos_x;
  int pos_y;
  int larg_nav;
  int alt_nav;
} navinha;

navinha nave_principal;                                 // isso precisa ser global?
navinha nave_inimigo;
navinha tiro;

char incremento = 1;
char flag_tiro = 0;

GLuint idTexturaNave;
GLuint idTexturaBack;
GLuint idTexturaCaterpie;
GLuint idTexturaPidgey;
GLuint idTexturaButter;
GLuint idTexturaPikachu;
GLuint idTexturaPokebola;

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

    switch(pokemon)
    {
      case 1:
        glBindTexture(GL_TEXTURE_2D, idTexturaCaterpie);
        break;

      case 2:
        glBindTexture(GL_TEXTURE_2D, idTexturaPidgey);
        break;

      case 3:
        glBindTexture(GL_TEXTURE_2D, idTexturaButter);
        break;

      case 4:
        glBindTexture(GL_TEXTURE_2D, idTexturaPikachu);
        break;

      default:
        break;
    }

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

void chamaDesenhaInimigos()
{
    for(int i = 0; i < quant_fileira_caterpie; i ++)
    {

      for(int j = 0; j < quant_caterpie; j ++)
      {
        desenhaInimigos(1);
        nave_inimigo.pos_x += larg_nav_inim;
      }

      nave_inimigo.pos_x -= (quant_caterpie * larg_nav_inim);
      nave_inimigo.pos_y += alt_nav_inim;
    }

    nave_inimigo.pos_x += larg_nav_inim;

    for(int i = 0; i < quant_pidgey; i ++)
      {
        desenhaInimigos(2);
        nave_inimigo.pos_x += larg_nav_inim;
      }

    nave_inimigo.pos_x -= (larg_nav_inim * quant_pidgey);

    nave_inimigo.pos_x += larg_nav_inim;
    nave_inimigo.pos_y += alt_nav_inim;

    for(int i = 0; i < quant_butter; i ++)
    {
      desenhaInimigos(3);
      nave_inimigo.pos_x += larg_nav_inim;
    }

    nave_inimigo.pos_x -= (2 * larg_nav_inim);
    nave_inimigo.pos_y += alt_nav_inim;
    desenhaInimigos(4);

    nave_inimigo.pos_x -= (3 * larg_nav_inim);
    desenhaInimigos(4);

    nave_inimigo.pos_x -= (3 * larg_nav_inim);                              
    nave_inimigo.pos_y -= (5 * alt_nav_inim);                            // retorna a posição inicial
}

void desenhaTiro()
{
    glColor3f(1.0, 1.0, 1.0);                             // branco, para não influenciar na textura

    glEnable(GL_TEXTURE_2D);

    glBindTexture(GL_TEXTURE_2D, idTexturaPokebola);

    glPushMatrix();                                       // usando o Método Bão ©

    glTranslatef(tiro.pos_x, tiro.pos_y, 0);

    glBegin(GL_TRIANGLE_FAN);

        glTexCoord2f(0, 0);
        glVertex2f(-larg_tiro/2, -alt_tiro/2); // v3---v2

        glTexCoord2f(1, 0);
        glVertex2f( larg_tiro/2, -alt_tiro/2); // |     |

        glTexCoord2f(1, 1);
        glVertex2f( larg_tiro/2,  alt_tiro/2); // |     |

        glTexCoord2f(0, 1);
        glVertex2f(-larg_tiro/2,  alt_tiro/2); // v0---v1

    glEnd();

    glPopMatrix();

    glDisable(GL_TEXTURE_2D);
}

void desenhaMinhaCena()
{
    glClear(GL_COLOR_BUFFER_BIT);

    desenhaBack();

    desenhaNavinha();

    chamaDesenhaInimigos();

    if(flag_tiro)
    {
      desenhaTiro();

      tiro.pos_y ++;

      if(tiro.pos_y >= tam_tela)
      {
        flag_tiro = 0;
      }
    }

    glutSwapBuffers();
}

void configura_tam_naves()
{
    nave_principal.pos_x = nave_x_inicial;                   // inicialização da posição da nave principal
    nave_principal.pos_y = nave_y_inicial;
    nave_principal.larg_nav = larg_nav_prin;
    nave_principal.alt_nav = alt_nav_prin;

    nave_inimigo.pos_x = nave_x_inim;
    nave_inimigo.pos_y = nave_y_inim;
    nave_inimigo.larg_nav = larg_nav_inim;                             // obs: organizar melhor a função setup
    nave_inimigo.alt_nav = alt_nav_inim;

    tiro.larg_nav = larg_tiro;
    tiro.alt_nav = alt_tiro;
}

void carregaTexturas()
{
    idTexturaNave = carregaTextura("nave.png");
    idTexturaBack = carregaTextura("back.png");
    idTexturaCaterpie = carregaTextura("caterpie.png");
    idTexturaPidgey = carregaTextura("pidgey.png");
    idTexturaButter = carregaTextura("butter.png");
    idTexturaPikachu = carregaTextura("pikachu.png");
    idTexturaPokebola = carregaTextura("pokebola.png");
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

        if(flag_tiro == 0)
        {
          tiro.pos_x = nave_principal.pos_x;
          tiro.pos_y = tiro_y;
          flag_tiro = 1;
          glutPostRedisplay();
        }
        
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

        if(nave_principal.pos_x < fim_nave_dir)
        {
            nave_principal.pos_x ++;
        }

        glutPostRedisplay();

        break;

    case GLUT_KEY_LEFT:                       // esquerda

        if(nave_principal.pos_x > fim_nave_esq)
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
      if(nave_inimigo.pos_x < fim_inim_dir)
        nave_inimigo.pos_x ++;

      else
        incremento *= -1;
    }

    else
    {
      if(nave_inimigo.pos_x > fim_inim_esq)
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
   glutInitWindowSize(janela_tam_x, janela_tam_y);
   glutInitWindowPosition(janela_pos_x, janela_pos_y);

   glutCreateWindow("joguinho");                    // obs: mudar esse nome dps

   glutDisplayFunc(desenhaMinhaCena);
   glutReshapeFunc(redimensionada);
   glutKeyboardFunc(teclaPressionada);
   glutSpecialFunc(teclaEspPressionada);            // setas e fx
   glutTimerFunc(0, atualizaCena, velocidade_inimigos);             
                                                    // função timer para as naves inimigas andarem

   setup();                                         // obs: organizar essa função dps

   glutMainLoop();
   return 0;
}