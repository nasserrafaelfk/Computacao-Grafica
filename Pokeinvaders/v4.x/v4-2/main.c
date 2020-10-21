
/*
 *  Nome do projeto: Pokéinvaders
 *  Autores:
 *
 *  Ronaldo - 
 *                   GitHub: https://github.com/ronaldozica
 *                   LinkedIn: https://www.linkedin.com/in/ronaldo-zica
 *                   Email: rzica42@gmail.com
 *  Násser  - 
 *                   GitHub: https://github.com/nasserrafaelfk
 *                   LinkedIn: https://www.linkedin.com/in/nasserrafael 
 *                   Email: nasserfoster@gmail.com
 *
 *  Descrição do projeto:
 *   
 *   Projeto desenvolvido durante o segundo período do curso de Engenharia de Computação no 
 *  CEFET-MG na modalidade Ensino Remoto. Professores: 
 *  Flávio Coutinho e Glender Brás. O jogo é uma paródia do jogo Space
 *  Invaders baseado em Pokémon e possui 4 fases, com diferentes inimigos 
 *  um nível crescente de dificuldade a cada fase.
 *  O projeto não tem fins lucrativos.
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
