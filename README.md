<h1>Obrigado por baixar nosso jogo! Aqui está o tutorial de como executá-lo:</h1>


<h4>1) Para realizar a instalação das bibliotecas necessárias, devemos acessar o Terminal do Linux.
Para isso, pressione <code>CRTL + ALT + T</code> ou procure por Terminal no Menu Linux.</h4>
<h4>2) Após abrir o Terminal, precisamos verificar se todas as informações dos pacotes
de fontes já instaladas estão configuradas na versão mais recente, caso não esteja,
será feita a atualização. Para isso, execute o comando no terminal:</h4>
<p><code>sudo apt-get update</code></p>
<p>Coloque sua senha para fazer a verificação e aguarde a finalização.</p>
<h4>3) Após seu sistema concluir as atualizações, iremos instalar alguns mecanismos
necessários para desenvolvermos alguns processos, pelo comando via terminal:</h4>
<p><code>sudo apt-get install build-essential</code></p>
<p>No meu caso, todas ferramentas já estão instaladas. Entretanto, caso apareça uma
mensagem perguntando se deseja continuar, pressione <strong>s</strong> e logo em seguida <strong>enter</strong>.</p>
<h4>4) A partir de agora iremos instalar todas as bibliotecas, começando pela FreeGlut
pelo comando:</h4>
<p><code>sudo apt-get install freeglut3-dev</code></p>
<p>Pressione <strong>s</strong> caso seja necessário para continuar o processo.</p>
<h4>5) Iremos instalar a biblioteca Glew pelo comando:</h4>
<p><code>sudo apt-get install libglew-dev</code></p>
<p>Pressione <strong>s</strong> caso seja necessário para continuar o processo.</p>
<h4>6) Agora, iremos instalar a última biblioteca, SOIL, pelo comando:</h4>
<p><code>sudo apt install libsoil-dev</code></p>
<p>Pressione <strong>s</strong> caso seja necessário para continuar o processo.</p>
<h4>7) Todas bibliotecas instaladas! Para jogar baixe o zip do repositório ou faça um git-clone para seu desktop.
  Se tiver baixado o zip primeiramente descomprima os arquivos, depois acesse a pasta da última versão com o comando:</h4>
<p><code>cd 'pasta-onde-foi-clonado-ou-baixado'/Computacao-Grafica/v4.x/v4-2</code></p>
<p>e depois dê o comando:</p>
<p><code>make run</code></p>
<p>Pronto, você já está jogando!</p>
<p><strong>--Feito e desenvolvido por Násser Rafael e Ronaldo Zica</strong></p>