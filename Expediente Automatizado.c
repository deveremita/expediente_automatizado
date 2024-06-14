#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>


//#region função para rodar os script .bat
void runScript(const char *scriptName){
    char command[100];
    sprintf(command, "start %s", scriptName);
    system(command);

}
//#endregion


int main() {
    while (1) {
        system("chcp 65001 > nul");
        setlocale(LC_ALL,"pt_BR.UTF-8");
        system("cls");
        printf("Em quais atividades deseja se focar?\n");
        printf("*** 1 - Projetos E Atividades GOL/Smiles\n");
        printf("*** 2 - Marketing Digital (Afiliados, Lojas Digitais, Etc...)\n");
        printf("*** 3 - Estudos - Cursos Em Andamento\n");
        printf("*** 4 - Estudos - Programação\n");
        printf("*** 5 - Lazer, Arte, Curiosidades E Afins\n");
        printf("*** 6 - Sites variados para diferentes fins\n");
        printf("*** 7 - Ferramentas Online\n");
        printf("*** 0 - Editar O Código Deste Projeto\n");

        char choice;
        printf("Digite o número da opção desejada: ");
        choice = _getch();
        printf("%c\n", choice);

        switch (choice){
        case '1':
            runScript("ProjetosGolSmiles.bat"); 
            break;
        case '2':
            runScript("MarketingDigital.bat"); 
            break;
        case '3':
            runScript("CursosEmAndamento.bat");
            break;
        case '4':
            runScript("EstudosProgramacao.bat");
            break;
        case '5':
            runScript("LazerArteCuriosidadesEAfins.bat");
            break;
        case '6':
            runScript("OutrosSites.bat");
            break;
        case '7':
            runScript("FerramentasOnline.bat");
            break;
        case '0':
            system("code .");
            break;
        default:
            break;
        }
        exit(0);
    }
    return 0;
}