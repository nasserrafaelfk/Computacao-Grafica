#include <SOIL/SOIL.h>
#include <GL/glew.h>
#include <GL/freeglut.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "variaveisGlobais.h"
#include "texturas.h"
#include "navinha.h"
#include "background.h"
#include "inimigos.h"
#include "tiro.h"
#include "funcoesDisplay.h"
#include "sizeNaves.h"
#include "eventosTeclado.h"
#include "matriz_inimigos.h"

void setup()
{
    glClearColor(0.0, 0.0, 0.0, 0.0);                         // preto

    glEnable(GL_BLEND );
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);  

    carregaTexturas();

    configura_tam_naves();

    inicializa_matriz_inimigos();
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