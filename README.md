TUTORIAL DE INSTALAÇÃO DAS BIBLIOTECAS
GLEW, FREEGLUT E
SOIL NO LINUX MINT
1) Para realizar a instalação das bibliotecas, devemos acessar o Terminal do Linux.
Para isso, pressione CRTL + ALT + T ou procure por Terminal no Menu Linux.
2) Após abrir o Terminal, precisamos verificar se todas as informações dos pacotes
de fontes já instaladas estão configuradas na versão mais recente, caso não esteja,
será feita a atualização. Para isso, execute o comando no terminal:
sudo apt-get update
Coloque sua senha para fazer a verificação e aguarde a finalização.
3) Após seu sistema concluir as atualizações, iremos instalar alguns mecanismos
necessários para desenvolvermos alguns processos, pelo comando via terminal:
sudo apt-get install build-essential
No meu caso, todas ferramentas já estão instaladas. Entretanto, caso apareça uma
mensagem perguntando se deseja continuar, pressione s e logo em seguida enter.
4) A partir de agora iremos instalar todas as bibliotecas, começando pela FreeGlut
pelo comando:
sudo apt-get install freeglut3-dev
Pressione s caso seja necessário para continuar o processo.
5) Iremos instalar a biblioteca Glew pelo comando:
sudo apt-get install libglew-dev
Pressione s caso seja necessário para continuar o processo.
6) Agora, iremos instalar a última biblioteca, SOIL, pelo comando:
sudo apt install libsoil-dev
Pressione s caso seja necessário para continuar o processo.
7) Todas bibliotecas instaladas! No momento da compilação, utilize o comando:
gcc nome_do_arquivo.c -lglut -lGLU -lGL -lGLEW -lSOIL
para utilizar todas bibliotecas!
-- Násser Rafael