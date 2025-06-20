/*
** EPITECH PROJECT, 2025
** Wolf3D
** File description:
** main.c
*/

#include <string.h>
#include "macro.h"
#include "project_funct.h"

int main(int argc, char **argv, char **env)
{
    argv = (void *)argv;
    if ((argc == 2 && !strcmp("-h", argv[1])) ||
        (argc == 2 && !strcmp("-help", argv[1]))) {
        print_help();
        return EPI_SUCCESS;
    }
    if (argc != 1)
        return EPI_FAIL;
    if (check_env(env) == EPI_FAIL)
        return EPI_FAIL;
    return project();
}
