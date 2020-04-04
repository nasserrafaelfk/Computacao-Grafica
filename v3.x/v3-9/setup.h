
void setup()
{
    glClearColor(0.0, 0.0, 0.0, 0.0);                         // preto

    glEnable(GL_BLEND );
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);  

    carregaTexturas();

    configura_tam_naves();

    inicializa_matriz_inimigos();

//    using namespace irrklang;

//    ISoundEngine *SoundEngine = createIrrKlangDevice();

//    SoundEngine->play2D("menu.mp3", GL_TRUE);
}
