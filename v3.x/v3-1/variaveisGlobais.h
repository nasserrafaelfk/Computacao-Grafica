#define janela_tam_x 500
#define janela_tam_y 500
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

#define alt_nav_inim 7
#define larg_nav_inim 7

#define quant_fileira_caterpie 3
#define quant_caterpie 10

#define quant_pidgey 8

#define quant_butter 6

#define quant_pikachu 2

#define tiro_x 50
#define tiro_y 30

#define alt_tiro 5
#define larg_tiro 5

#define texto_fim_x 50
#define texto_fim_y 55

#define texto_fim_alt 8
#define texto_fim_larg 80

signed short int teste_inimigos = 1;
signed short int incremento = 1;
signed short int flag_tiro = 0;
signed short int fim_de_jogo = 0;
signed short int teste_corrida = 0;
signed short int jogo_pausado = 0;

short int mat_caterpie[quant_fileira_caterpie][quant_caterpie];
short int vet_pidgey[quant_pidgey];
short int vet_butter[quant_butter];
short int vet_pikachu[quant_pikachu];