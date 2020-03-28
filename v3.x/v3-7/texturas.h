
GLuint idTexturaBack;
GLuint idTexturaNuvens;
GLuint idTexturaNuvensEscuras;

GLuint idTexturaVidas;

GLuint idTexturaSpriteCorrida;
GLuint idTexturaPokebola;

GLuint idTexturaMensagemReiniciar;
GLuint idTexturaMensagemEncerrar;
GLuint idTexturaMensagemPausa;
GLuint idTexturaTextoFim;

GLuint idTexturaAlakazam;
GLuint idTexturaBlas;
GLuint idTexturaBuba;
GLuint idTexturaButter;
GLuint idTexturaCaterpie;
GLuint idTexturaChar;
GLuint idTexturaCharizard;
GLuint idTexturaHypno;
GLuint idTexturaMew;
GLuint idTexturaMewtwo;
GLuint idTexturaPidgey;
GLuint idTexturaPikachu;
GLuint idTexturaRaichu;
GLuint idTexturaSnorlax;
GLuint idTexturaSquirtle;
GLuint idTexturaVenu;

GLuint carregaTextura(const char* arquivo) {
    GLuint idTextura = SOIL_load_OGL_texture(
                           arquivo,
                           SOIL_LOAD_AUTO,
                           SOIL_CREATE_NEW_ID,
                           SOIL_FLAG_INVERT_Y
                       );

    if (idTextura == 0) {
        printf("Erro do SOIL: '%s'\n", SOIL_last_result());
        printf("Erro ao abrir o arquivo: %s\n.", arquivo);
    }

    return idTextura;
}

void carregaTexturas()
{
    idTexturaBack = carregaTextura("back.png");
    idTexturaNuvens = carregaTextura("nuvens.png");
    idTexturaNuvensEscuras = carregaTextura("nuvens_escuras.png");

    idTexturaVidas = carregaTextura("vidas.png");

    idTexturaSpriteCorrida = carregaTextura("sprite_corrida.png");
    idTexturaPokebola = carregaTextura("sprite_pokebola.png");
    
    idTexturaMensagemReiniciar = carregaTextura("mensagemReiniciar.png");
    idTexturaMensagemEncerrar = carregaTextura("mensagemEncerrar.png");
    idTexturaMensagemPausa = carregaTextura("mensagemPausa.png");
    idTexturaTextoFim = carregaTextura("texto_fim.png");

    idTexturaAlakazam = carregaTextura("sprite_alakazam.png");
    idTexturaBlas = carregaTextura("sprite_blas.png");
    idTexturaBuba = carregaTextura("sprite_buba.png");
    idTexturaButter = carregaTextura("sprite_butterfree.png");
    idTexturaCaterpie = carregaTextura("sprite_caterpie.png");
    idTexturaChar = carregaTextura("sprite_char.png");
    idTexturaCharizard = carregaTextura("sprite_charizard.png");
    idTexturaHypno = carregaTextura("sprite_hypno.png");
    idTexturaMew = carregaTextura("sprite_mew.png");
    idTexturaMewtwo = carregaTextura("sprite_mewtwo.png");
    idTexturaPidgey = carregaTextura("sprite_pidgey.png");
    idTexturaPikachu = carregaTextura("sprite_pikachu.png");
    idTexturaRaichu = carregaTextura("sprite_raichu.png");
    idTexturaSnorlax = carregaTextura("sprite_snorlax.png");
    idTexturaSquirtle = carregaTextura("sprite_squirtle.png");
    idTexturaVenu = carregaTextura("sprite_venu.png");
}