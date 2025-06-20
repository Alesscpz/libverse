/*
** EPITECH PROJECT, 2025
** Wolf3D
** File description:
** check_env.c
*/

#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include "macro.h"

int check_env(char **env)
{
    int len = strlen(DISPLAY_CHECK);

    for (int i = 0; env[i] != NULL; i++)
        if (!strncmp(DISPLAY_CHECK, env[i], len))
            return EPI_SUCCESS;
    printf(ER_ENV);
    return EPI_FAIL;
}
