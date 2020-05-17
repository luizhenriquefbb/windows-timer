int menu_invalido(int min, int max, int option)
{

    while (option<min || option > max)
    {
        system("cls");
        printf("invalid option. press a number between %d and %d\n", min, max);
        scanf("%d",&option);
    }
    return option;
}
