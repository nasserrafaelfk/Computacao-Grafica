
/*
 *  Projeto: joguinho sem nome
 *  Autores:
 *  Násser - 
 *  Ronaldo - rzica42@gmail.com
 *
 */ 

#include <SOIL/SOIL.h>
#include <GL/glew.h>
#include <GL/freeglut.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
//#include <irrklang/irrKlang.h>

#include "texturas.h"
#include "variaveisGlobais.h"

#include "atualizaCena.h"
#include "chamaDesenhaInimigos.h"
#include "chamaDesenhaTiro.h"
#include "configuraTamNaves.h"
#include "desenhaBack.h"
#include "desenhaInimigos.h"
#include "desenhaMensagem.h"
#include "desenhaMinhaCena.h"
#include "desenhaNavinha.h"
#include "desenhaTiro.h"
#include "encerraJogo.h"
#include "inicializaMatrizInimigos.h"
#include "redimensionada.h"
#include "reiniciaJogo.h"
#include "setup.h"
#include "teclaEspPressionada.h"
#include "teclaPressionada.h"
#include "verificaColisao.h"
#include "verificaFimDeJogo.h"
#include "quadroInimigos.h"
#include "quadroTiro.h"
#include "verificaColisaoSemParar.h"
#include "desenhaNuvens.h"
#include "atualiza_x_nuvens.h"
#include "desenhaVidas.h"
#include "desenhaPokebolaCapturado.h"
#include "quadroPokebolaCapturado.h"

void setup();

int main(int argc, char** argv)
{                                                       // inicializa o jogo, define condições iniciais
   glutInit(&argc, argv);                                         // inicia a glut

   glutInitContextVersion(1, 1);                                  // escolhe a versão do opengl em que será trabalhado
   glutInitContextProfile(GLUT_COMPATIBILITY_PROFILE);

   glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);                  // modos do display: double para animação e rgba para cores
   glutInitWindowSize(janela_tam_x, janela_tam_y);                // da janela, também informa o tamanho da tela
   glutInitWindowPosition(janela_pos_x, janela_pos_y);            /*IMPORTANTE: MUDAR ESSA LINHA PARA MANTER PROPORCIONALIDADE*/

   glutCreateWindow("joguinho");                                  // cria e nomeia janela /*MUDAR O NOME DO JOGO*/

   glutDisplayFunc(desenhaMinhaCena);                             // registra as callbacks
   glutReshapeFunc(redimensionada);
   glutKeyboardFunc(teclaPressionada);
   glutSpecialFunc(teclaEspPressionada);
   glutTimerFunc(0, atualizaCena, velocidade_inimigos);           // função excencial: responsável por atualizar o jogo à 30FPS

   setup();

   glutMainLoop();                                                // trava o programa aqui e aguarda por interações do
   return 0;                                                      // usuário
}
