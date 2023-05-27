#pragma once
#include <bits/stdc++.h>
#include <windows.h>
#include <string>
#include <cctype>
using namespace std;



void Print_wellcome()
{
    // color(26);

    char welcome[50] = "WELCOME";
    char welcome2[50] = " TO";
    char welcome3[50] = " PERSONALIZED ";
    char welcome4[50] = " HELATH TRAKER !!";
    printf("\n\n\n\n\n\t\t\t");
    for (int wlc = 0; wlc < strlen(welcome); wlc++)
    {

        printf(" %c", welcome[wlc]);
        Sleep(100);
    }

    // ccolor(26);
    printf("\n\n\t\t\t\t ");
    for (int wlc2 = 0; wlc2 < strlen(welcome2); wlc2++)
    {

        printf(" %c", welcome2[wlc2]);
        Sleep(100);
    }

    // ccolor(26);
    printf("\n\n\n\t\t\t ");
    for (int wlc3 = 0; wlc3 < strlen(welcome3); wlc3++)
    {
        if (welcome3[wlc3] != 'D')
        {

            printf(" %c", welcome3[wlc3]);
        }
        else
        {

            printf(" %c", welcome3[wlc3]);
        }

        Sleep(100);
    }
    // ccolor(26);
    printf("\n\n\n\t\t\t\t ");
    for (int wlc3 = 0; wlc3 < strlen(welcome4); wlc3++)
    {
        if (welcome4[wlc3] != 'A' && welcome4[wlc3] != 'E')
        {

            printf(" %c", welcome4[wlc3]);
        }
        else
        {

            printf(" %c", welcome4[wlc3]);
        }
        Sleep(100);
    }
    Sleep(50);
    system("cls");
    // ccolor(26);
}

