# Introducão #

Aqui você encontrará uma breve explicação sobre a organização dos diretórios do projeto e dicas de como compilar com os asquivos de projetos de várias IDE's.

# Organização dos diretórios #

Na raiz do projeto, encontram-se as seguintes pastas :

  * algebralinearvcc6
    * **algebralinearvcc6.dsp**
    * algebralinearvcc6.plg
  * Codigo\_Fonte
    * main.c
    * OperacoesGraficas.c
    * OperacoesGraficas.h
    * util.c
    * util.h
  * Projeto\_Codeblock\_Linux
    * Algebra Linear.cbp
    * Algebra Linear.layout
    * **workspace.workspace**
  * Projeto\_Codeblock\_Windows
    * AlgebraLinear.cbp
    * AlgebraLinear.layout
    * **workspace.workspace**
  * Projeto\_VisualCPP2008
    * **AlgebraLinear.sln**
    * AlgebraLinear.vcproj

Para facilitar a compilação, foram criados arquivos de projeto no **Visual Studio 2008 Express (Projeto\_VisualCPP2008)** , no **Visual Studio 6 (algebralinearvcc6)** e no **Code::Blocks** , sendo que nesse ultimo há um projeto para **windows (Projeto\_Codeblock\_Windows)** e **linux (Projeto\_Codeblock\_Windows)**. Para compilar o projeto em uma dessas IDE's , basta acessar a parta da IDE e do sistema operacional desejado e abrir um dos arquivos que estão em negrito, os mesmos já estão apontando para os arquivos do código fonte.