#include <stdio.h>
#include <stdlib.h>
main()
{
    system("color F0");
   int op;
   do
    {
        system("cls");
        printf("==========TIMER DE PC===========\n\n");
        printf("Create sleep   >  press 1\n");
        printf("remove timer   >  press 2\n");
        printf("quit           >  press 3\n");
        scanf("%d",&op);
        printf("================================\n");
        system("pause");
        op=menu_invalido(1,3,op);

        if(op==1)
        timer();
        else if (op==2)
        tirar_timer();
        else
        {
            system("cls");
            printf("\n\na program of luizhenriquefbb\n\n");
        }


    }while (op>=1 && op<=2);
}



timer()
{
    int horas, minutos,segundos=0;

    printf("\nShutDown pc in how long?\n");

    printf("hours\n> ");
    scanf("%d", &horas);
    segundos+=horas*3600;

    printf("minutes\n> ");
    scanf("%d",&minutos);
    segundos+=minutos*60;
    /*  VARIAVEL NO SYSTEM
    char cmd[256];
    ...
    sprintf(cmd, "blah blah %d", x);
    system(cmd);
    ...
    */
    char cmd[256];

    sprintf(cmd, "shutdown -s -f -t %d", segundos);
    system(cmd);

    }

tirar_timer()
{
    system("shutdown -a");
}
