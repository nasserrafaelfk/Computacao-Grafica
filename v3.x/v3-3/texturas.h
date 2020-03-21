
GLuint idTexturaNave;
GLuint idTexturaBack;
GLuint idTexturaCaterpie;
GLuint idTexturaPidgey;
GLuint idTexturaButter;
GLuint idTexturaPikachu;
GLuint idTexturaPokebola;
GLuint idTexturaTextoFim;
GLuint idTexturaSpriteCorrida;
GLuint idTexturaMensagemReiniciar;
GLuint idTexturaMensagemEncerrar;
GLuint idTexturaMensagemPausa;

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

void carregaTexturas()
{
    idTexturaNave = carregaTextura("nave.png");
    idTexturaBack = carregaTextura("back.png");
    idTexturaCaterpie = carregaTextura("caterpie.png");
    idTexturaPidgey = carregaTextura("pidgey.png");
    idTexturaButter = carregaTextura("butter.png");
    idTexturaPikachu = carregaTextura("pikachu.png");
    idTexturaPokebola = carregaTextura("pokebola.png");
    idTexturaTextoFim = carregaTextura("texto_fim.png");
    idTexturaSpriteCorrida = carregaTextura("sprite_corrida.png");
    idTexturaMensagemReiniciar = carregaTextura("mensagemReiniciar.png");
    idTexturaMensagemEncerrar = carregaTextura("mensagemEncerrar.png");
    idTexturaMensagemPausa = carregaTextura("mensagemPausa.png");

}