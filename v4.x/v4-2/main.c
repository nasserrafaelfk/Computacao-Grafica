
/*
 *  Projeto: joguinho sem nome
 *  Autores:
 *  Násser - 
 *  Ronaldo - rzica42@gmail.com
 *
 */ 

#include "includes.h"

void setup();

int main(int argc, char** argv)
{                                                       // inicializa o jogo, define condições iniciais
   glutInit(&argc, argv);                                         // inicia a glut

   glutInitContextVersion(1, 1);                                  // escolhe a versão do opengl em que será trabalhado
   glutInitContextProfile(GLUT_COMPATIBILITY_PROFILE);

   glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);                  // modos do display: double para animação e rgba para cores
   glutInitWindowSize(janela_tam_x, janela_tam_y);                // da janela, também informa o tamanho da tela
   glutInitWindowPosition(janela_pos_x, janela_pos_y);            /*IMPORTANTE: MUDAR ESSA LINHA PARA MANTER PROPORCIONALIDADE*/

   glutCreateWindow("poke invaders");                                  // cria e nomeia janela /*MUDAR O NOME DO JOGO*/

   glutDisplayFunc(desenhaMinhaCena);                             // registra as callbacks
   glutReshapeFunc(redimensionada);
   glutKeyboardFunc(teclaPressionada);
   glutSpecialFunc(teclaEspPressionada);
   glutTimerFunc(0, atualizaCena, velocidade_inimigos);           // função excencial: responsável por atualizar o jogo à 30FPS

   setup();

   glutMainLoop();                                                // trava o programa aqui e aguarda por interações do
   return 0;                                                      // usuário
}
