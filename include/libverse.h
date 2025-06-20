/*
** EPITECH PROJECT, 2025
** Wolf
** File description:
** libgraphic.h
*/

#ifndef LIBGRAPHIC_H
    #define LIBGRAPHIC_H

    #include <SFML/Graphics.h>
    #include "struct.h"

game_t *init_game(void);

void clean_game(game_t *game);

void free_tab_scene(game_t *game);

void destroy_game(game_t *game);

void load_config_file(game_t *game);

sfRenderWindow *make_window(sfVector2i dimensions,
    int bits, char *name, sfUint32 style);

void change_the_mode_window(window_t *win);

window_t *create_window(void);

void destroy_window(window_t *window);

void load_config_music(game_t *game);

void destroy_a_music(music_t *music);

void destroy_all_music(game_t *game);


int find_type(char *str);

void *create_element(int type, char *filename);

ressource_t *create_ressource(char *id, void *element, int type);

void add_ressource(ressource_t **begin, ressource_t *new_ressource);

void create_ressource_link(ressource_t **begin, char *id,
    void *element, int type);

void create_a_ressource_in_the_game(game_t *game, char *id,
    void *element, int type);

ressource_t *find_a_ressouce_from_id(ressource_t *begin, char *id);

void destroy_ressource(ressource_t **ressource);

void destroy_all_ressource(ressource_t **ressource_begin);

scene_t **init_tab_scene(int nb_scene);

void add_element_to_scene(sfVector2f *pos, ressource_t *ressource,
    component_t **begin);

void change_scene(game_t *game, int new_scene);

void clean_scene(scene_t *scene);

void destroy_scene(scene_t *scene);

void create_layer(scene_t *scene);

void clean_layer(layer_t *layer);

void destroy_layer(layer_t *layer);


void rev_component(component_t **begin);

component_t *create_component(sfVector2f *pos, ressource_t *ressource);

void add_a_component_to_layer(component_t *component, scene_t *scene, int id);

void draw_component_of_scene(sfRenderWindow *window, scene_t *scene);

void destroy_component(component_t *component);

void destroy_layer(layer_t *layer);

void destroy_scene(scene_t *scene);

void destroy_game(game_t *game);

void free_tab_scene(game_t *game);

void destroy_window(window_t *window);

#endif /* LIBGRAPHIC_H */
