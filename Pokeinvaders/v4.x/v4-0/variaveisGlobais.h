
#define janela_tam_x 1000
#define janela_tam_y 1000

#define janela_0_x 0
#define janela_0_y 15

#define janela_pos_x 100
#define janela_pos_y 100

#define tam_tela 100

#define velocidade_inimigos 33

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

#define y_min_inimigo 50
#define y_max_inimigo 55

#define alt_nav_inim 7
#define larg_nav_inim 7

#define quant_fileira_caterpie 3
#define quant_caterpie 10

#define quant_pidgey 8

#define quant_butter 6

#define quant_pikachu 2

#define tiro_x 50
#define tiro_y 30

#define alt_tiro 2.5
#define larg_tiro 2.5

#define texto_fim_x 50
#define texto_fim_y 55

#define texto_fim_alt 8
#define texto_fim_larg 80

#define quantidade_frames_esp 5
#define quantidade_frames_ini 5

#define altura_nuvens 20
#define largura_nuvens 60

#define nuvens_x 50
#define nuvens_y 80

#define vidas_pos_x 10
#define vidas_pos_y 7.5

signed short int teste_inimigos = 1;
signed short int incremento = 1;
signed short int flag_tiro = 0;
signed short int fim_de_jogo = 0;
signed short int teste_corrida = 0;
signed short int jogo_pausado = 0;
signed short int mensagem_reiniciar = 0;
signed short int mensagem_encerrar = 0;
signed short int deslocamento_inimigos = -1;
signed short int contador_frames = 0;
signed short int flag_quadro_inimigo = 1;
signed short int contador_frames_inimigos = 0;
signed short int flag_quadro_tiro = 1;
signed short int fase = 0;							// fase 0 = menu
signed short int tiros_param = 1;
signed short int flag_quadro_back = 1;
signed short int contador_quadro_back = 0;
signed short int quantidade_vidas = 3;
signed short int pokemon_capturado = 0;
signed short int item_menu = 0;

float quadro_back[4];
float quadro_vidas[4];

short int mat_caterpie[quant_fileira_caterpie][quant_caterpie];
short int vet_pidgey[quant_pidgey];
short int vet_butter[quant_butter];
short int vet_pikachu[quant_pikachu];

typedef struct{
  int pos_x;
  int pos_y;
  int larg_nav;
  int alt_nav;
  float quadro_atual[4];
} navinha;

navinha nave_principal;
navinha nave_inimigo;
navinha tiro;
navinha nuvens;
