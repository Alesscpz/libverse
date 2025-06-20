/*
** EPITECH PROJECT, 2025
** wolf3d
** File description:
** init_program.c
*/

#include "macro.h"
#include "struct.h"
#include "project_funct.h"

int init_scene(game_t *game)
{
    int status = EPI_SUCCESS;

    if (status == EPI_SUCCESS)
        status = loop(game);
    return status;
}
