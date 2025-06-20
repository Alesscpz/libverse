/*
** EPITECH PROJECT, 2025
** Wolf3D
** File description:
** project_funct.h
*/

#ifndef PROJECT_H
    #define PROJECT_H

    #include <SFML/Graphics.h>
    #include "struct.h"

int init_scene(game_t *game);

void handle_event(game_t *g);

int loop(game_t *game);

int project(void);

void print_help(void);

int check_env(char **env);

void create_game_scene(game_t *game);

void create_error_scene(game_t *game);

void create_backgound_error_ressource(game_t *game);

void create_text_error_ressource(game_t *game);

void init_pause_menu(game_t *game);

void init_start_menu(game_t *game);

int save_game(char *filename, game_t *game);

size_t wrong_name(char *name);

size_t read_content(char *file, game_t *game);

size_t load_save(char *filename, game_t *game);

size_t arraylen(char **tab);

void free_tab(char **tab);

char **parse_user_input(char *input, int *i, char *separator);

#endif /* PROJECT_H */
