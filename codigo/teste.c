#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_acodec.h>
#include <allegro5/allegro_audio.h>
 
const int LARGURA_TELA = 640;
const int ALTURA_TELA = 480;

//Apontador do display do jogo
ALLEGRO_DISPLAY *janela = NULL;

//Apontador fa fila de eventos
ALLEGRO_EVENT_QUEUE *fila_eventos = NULL;

//Apontador da imagem do menu inicial
ALLEGRO_BITMAP *fundo = NULL;

//Apontador da fonte ttf
ALLEGRO_FONT *fonte = NULL;

//Apontador da fonte ttf do menu inicial
ALLEGRO_FONT *fonte_menu = NULL;

//Apontador da imagens da historia do jogo
ALLEGRO_BITMAP *imagem = NULL;

//imgaens tutorial
ALLEGRO_BITMAP *como = NULL;
//Imagens de primeiros socorros
ALLEGRO_BITMAP *jogo = NULL;
ALLEGRO_BITMAP *jogo2 = NULL;
ALLEGRO_BITMAP *jogo3 = NULL;
ALLEGRO_BITMAP *jogo4 = NULL;
ALLEGRO_BITMAP *jogo5 = NULL;
ALLEGRO_BITMAP *jogo6 = NULL;
ALLEGRO_BITMAP *jogo7 = NULL;
ALLEGRO_BITMAP *jogo8 = NULL;
ALLEGRO_BITMAP *jogo9 = NULL;
ALLEGRO_BITMAP *jogo10 = NULL;
ALLEGRO_BITMAP *jogo11 = NULL;
ALLEGRO_BITMAP *jogo12 = NULL;
ALLEGRO_BITMAP *jogo13 = NULL;
ALLEGRO_BITMAP *jogo14 = NULL;
ALLEGRO_BITMAP *jogo15 = NULL;
ALLEGRO_BITMAP *jogo16 = NULL;
ALLEGRO_BITMAP *jogo17 = NULL;
ALLEGRO_BITMAP *jogo18 = NULL;
ALLEGRO_BITMAP *jogo19 = NULL;
ALLEGRO_BITMAP *jogo20 = NULL;
ALLEGRO_BITMAP *jogo21 = NULL;
ALLEGRO_BITMAP *jogo22 = NULL;
ALLEGRO_BITMAP *jogo23 = NULL;
ALLEGRO_BITMAP *jogo24 = NULL;
ALLEGRO_BITMAP *jogo25 = NULL;
ALLEGRO_BITMAP *jogo26= NULL;
ALLEGRO_BITMAP *jogo27 = NULL;
ALLEGRO_BITMAP *jogo28 = NULL;
ALLEGRO_BITMAP *jogo29= NULL;
ALLEGRO_BITMAP *jogo30= NULL;
ALLEGRO_BITMAP *jogo31= NULL;
ALLEGRO_BITMAP *jogo32= NULL;
ALLEGRO_BITMAP *jogo33= NULL;


//Imagens de mecanica
ALLEGRO_BITMAP *mec = NULL;
ALLEGRO_BITMAP *mec2 = NULL;
ALLEGRO_BITMAP *mec3 = NULL;
ALLEGRO_BITMAP *mec4 = NULL;
ALLEGRO_BITMAP *mec5 = NULL;
ALLEGRO_BITMAP *mec6 = NULL;
ALLEGRO_BITMAP *mec7 = NULL;
ALLEGRO_BITMAP *mec8 = NULL;
ALLEGRO_BITMAP *mec9 = NULL;
ALLEGRO_BITMAP *mec10 = NULL;
ALLEGRO_BITMAP *mec11 = NULL;
ALLEGRO_BITMAP *mec12 = NULL;
ALLEGRO_BITMAP *mec13 = NULL;
ALLEGRO_BITMAP *mec14 = NULL;
ALLEGRO_BITMAP *mec15 = NULL;
ALLEGRO_BITMAP *mec16 = NULL;
ALLEGRO_BITMAP *mec17 = NULL;
ALLEGRO_BITMAP *mec18 = NULL;
ALLEGRO_BITMAP *mec19 = NULL;
ALLEGRO_BITMAP *mec20 = NULL;
ALLEGRO_BITMAP *mec21 = NULL;




//Imagens de meio Ambiente
ALLEGRO_BITMAP *meio = NULL;
ALLEGRO_BITMAP *meio2 = NULL;
ALLEGRO_BITMAP *meio3 = NULL;
ALLEGRO_BITMAP *meio4 = NULL;
ALLEGRO_BITMAP *meio5 = NULL;
ALLEGRO_BITMAP *meio6 = NULL;
ALLEGRO_BITMAP *meio7 = NULL;
ALLEGRO_BITMAP *meio8 = NULL;
ALLEGRO_BITMAP *meio9 = NULL;
ALLEGRO_BITMAP *meio10 = NULL;
ALLEGRO_BITMAP *meio11 = NULL;
ALLEGRO_BITMAP *meio12 = NULL;
ALLEGRO_BITMAP *meio13 = NULL;
ALLEGRO_BITMAP *meio14 = NULL;


//Imagens de legislacao
ALLEGRO_BITMAP *leg = NULL;
ALLEGRO_BITMAP *leg2 = NULL;
ALLEGRO_BITMAP *leg3 = NULL;
ALLEGRO_BITMAP *leg4 = NULL;
ALLEGRO_BITMAP *leg5 = NULL;
ALLEGRO_BITMAP *leg6 = NULL;
ALLEGRO_BITMAP *leg7 = NULL;
ALLEGRO_BITMAP *leg8 = NULL;
ALLEGRO_BITMAP *leg9 = NULL;
ALLEGRO_BITMAP *leg10 = NULL;
ALLEGRO_BITMAP *leg11 = NULL;
ALLEGRO_BITMAP *leg12 = NULL;
ALLEGRO_BITMAP *leg13 = NULL;
ALLEGRO_BITMAP *leg14 = NULL;
ALLEGRO_BITMAP *leg15 = NULL;
ALLEGRO_BITMAP *leg16 = NULL;
ALLEGRO_BITMAP *leg17 = NULL;
ALLEGRO_BITMAP *leg18 = NULL;
ALLEGRO_BITMAP *leg19 = NULL;
ALLEGRO_BITMAP *leg20 = NULL;
ALLEGRO_BITMAP *leg21 = NULL;
ALLEGRO_BITMAP *leg22 = NULL;
ALLEGRO_BITMAP *leg23 = NULL;
ALLEGRO_BITMAP *leg24 = NULL;
ALLEGRO_BITMAP *leg25 = NULL;
ALLEGRO_BITMAP *leg26 = NULL;
ALLEGRO_BITMAP *leg27 = NULL;
ALLEGRO_BITMAP *leg28 = NULL;
ALLEGRO_BITMAP *leg29 = NULL;
ALLEGRO_BITMAP *leg30 = NULL;
ALLEGRO_BITMAP *leg31 = NULL;
ALLEGRO_BITMAP *leg32 = NULL;
ALLEGRO_BITMAP *leg33 = NULL;
ALLEGRO_BITMAP *leg34 = NULL;
ALLEGRO_BITMAP *leg35 = NULL;
ALLEGRO_BITMAP *leg36 = NULL;
ALLEGRO_BITMAP *leg37 = NULL;
ALLEGRO_BITMAP *leg38 = NULL;
ALLEGRO_BITMAP *leg39 = NULL;
ALLEGRO_BITMAP *leg40 = NULL;
ALLEGRO_BITMAP *leg41 = NULL;
ALLEGRO_BITMAP *leg42 = NULL;

//Imagens de sinalizacao
ALLEGRO_BITMAP *sinal = NULL;
ALLEGRO_BITMAP *sinal2 = NULL;
ALLEGRO_BITMAP *sinal3 = NULL;
ALLEGRO_BITMAP *sinal4 = NULL;
ALLEGRO_BITMAP *sinal5 = NULL;
ALLEGRO_BITMAP *sinal6 = NULL;
ALLEGRO_BITMAP *sinal7 = NULL;
ALLEGRO_BITMAP *sinal8 = NULL;
ALLEGRO_BITMAP *sinal9 = NULL;
ALLEGRO_BITMAP *sinal10 = NULL;
ALLEGRO_BITMAP *sinal11 = NULL;
ALLEGRO_BITMAP *sinal12 = NULL;
ALLEGRO_BITMAP *sinal13 = NULL;
ALLEGRO_BITMAP *sinal14 = NULL;
ALLEGRO_BITMAP *sinal15 = NULL;
ALLEGRO_BITMAP *sinal16 = NULL;
ALLEGRO_BITMAP *sinal17 = NULL;
ALLEGRO_BITMAP *sinal18 = NULL;
ALLEGRO_BITMAP *sinal19 = NULL;
ALLEGRO_BITMAP *sinal20 = NULL;
ALLEGRO_BITMAP *sinal21 = NULL;
ALLEGRO_BITMAP *sinal22 = NULL;
ALLEGRO_BITMAP *sinal23 = NULL;
ALLEGRO_BITMAP *sinal24 = NULL;
ALLEGRO_BITMAP *sinal25 = NULL;
ALLEGRO_BITMAP *sinal26 = NULL;
ALLEGRO_BITMAP *sinal27 = NULL;
ALLEGRO_BITMAP *sinal28 = NULL;


//Imagens de direcao defensiva
ALLEGRO_BITMAP *dd = NULL;
ALLEGRO_BITMAP *dd2 = NULL;
ALLEGRO_BITMAP *dd3 = NULL;
ALLEGRO_BITMAP *dd4 = NULL;
ALLEGRO_BITMAP *dd5 = NULL;
ALLEGRO_BITMAP *dd6 = NULL;
ALLEGRO_BITMAP *dd7 = NULL;
ALLEGRO_BITMAP *dd8 = NULL;
ALLEGRO_BITMAP *dd9 = NULL;
ALLEGRO_BITMAP *dd10 = NULL;
ALLEGRO_BITMAP *dd11 = NULL;
ALLEGRO_BITMAP *dd12 = NULL;
ALLEGRO_BITMAP *dd13 = NULL;
ALLEGRO_BITMAP *dd14 = NULL;
ALLEGRO_BITMAP *dd15 = NULL;
ALLEGRO_BITMAP *dd16 = NULL;
ALLEGRO_BITMAP *dd17 = NULL;
ALLEGRO_BITMAP *dd18 = NULL;
ALLEGRO_BITMAP *dd19 = NULL;
ALLEGRO_BITMAP *dd20 = NULL;
ALLEGRO_BITMAP *dd21 = NULL;
ALLEGRO_BITMAP *dd22 = NULL;
ALLEGRO_BITMAP *dd23 = NULL;
ALLEGRO_BITMAP *dd24 = NULL;
ALLEGRO_BITMAP *dd25 = NULL;
ALLEGRO_BITMAP *dd26 = NULL;
ALLEGRO_BITMAP *dd27 = NULL;
ALLEGRO_BITMAP *dd28 = NULL;
ALLEGRO_BITMAP *dd29 = NULL;
ALLEGRO_BITMAP *dd30 = NULL;
ALLEGRO_BITMAP *dd31 = NULL;
ALLEGRO_BITMAP *dd32 = NULL;
ALLEGRO_BITMAP *dd33 = NULL;
ALLEGRO_BITMAP *dd34 = NULL;
ALLEGRO_BITMAP *dd35 = NULL;
ALLEGRO_BITMAP *dd36 = NULL;
ALLEGRO_BITMAP *dd37 = NULL;
ALLEGRO_BITMAP *dd38 = NULL;
ALLEGRO_BITMAP *dd39 = NULL;
ALLEGRO_BITMAP *dd40 = NULL;
ALLEGRO_BITMAP *dd41 = NULL;
ALLEGRO_BITMAP *dd42 = NULL;






//Apontador para audio
ALLEGRO_AUDIO_STREAM *musica = NULL;

//Apontador para efeitos sonoros
ALLEGRO_SAMPLE *sample = NULL;

//Funcao de escolhas de temas do jogo
void tema(int tecla)
{
    al_clear_to_color(al_map_rgb(255, 255, 255));

    //As opcoes dos temas que apareceram na tela
    al_draw_text(fonte, al_map_rgb(0, 0, 0), 10, 100, ALLEGRO_ALIGN_LEFT, "1-Primeiros Socorros");     
    al_draw_text(fonte, al_map_rgb(0, 0, 0), 10, 200, ALLEGRO_ALIGN_LEFT, "2-Sinalização");
    al_draw_text(fonte, al_map_rgb(0, 0, 0), 10, 300, ALLEGRO_ALIGN_LEFT, "3-Mecânica");
    al_draw_text(fonte, al_map_rgb(0, 0, 0), LARGURA_TELA-10, 100, ALLEGRO_ALIGN_RIGHT, "4-Direção Defensiva"); 
    al_draw_text(fonte, al_map_rgb(0, 0, 0), LARGURA_TELA-80, 200, ALLEGRO_ALIGN_RIGHT, "-5-Legislação");         
    al_draw_text(fonte, al_map_rgb(0, 0, 0), LARGURA_TELA-10, 300, ALLEGRO_ALIGN_RIGHT, "6-Meio Ambiente"); 
     al_draw_text(fonte, al_map_rgb(0, 0, 0), LARGURA_TELA-10, 400, ALLEGRO_ALIGN_RIGHT, "7-Tutorial"); 


    //Quando o usuario escolher um o tema, aparecera um apenas o tema de sua escolha com a tela branca
    switch(tecla)
    {
        case 1:
        al_clear_to_color(al_map_rgb(255, 255, 255));
        al_draw_text(fonte, al_map_rgb(0, 255, 0), 10, 100, ALLEGRO_ALIGN_LEFT, "1-Primeiros Socorros");
        break;

        case 2:
        al_clear_to_color(al_map_rgb(255, 255, 255));
        al_draw_text(fonte, al_map_rgb(0, 255, 0), 10, 200, ALLEGRO_ALIGN_LEFT, "2-Sinalização");
        break;

        case 3:
        al_clear_to_color(al_map_rgb(255, 255, 255));
        al_draw_text(fonte, al_map_rgb(0, 255, 0), 10, 300, ALLEGRO_ALIGN_LEFT, "3-Mecânica");
        break;

        case 4:
        al_clear_to_color(al_map_rgb(255, 255, 255));
        al_draw_text(fonte, al_map_rgb(0, 255, 0), LARGURA_TELA-10, 100, ALLEGRO_ALIGN_RIGHT, "4-Direção Defensiva");
        break;

        case 5:
        al_clear_to_color(al_map_rgb(255, 255, 255));
        al_draw_text(fonte, al_map_rgb(0, 255, 0), LARGURA_TELA-80, 200, ALLEGRO_ALIGN_RIGHT, "5-Legislação");
        break;

        case 6:
        al_clear_to_color(al_map_rgb(255, 255, 255));
        al_draw_text(fonte, al_map_rgb(0, 255, 0), LARGURA_TELA-10, 300, ALLEGRO_ALIGN_RIGHT, "6-Meio Ambiente");
        break;


        case 7:
        al_clear_to_color(al_map_rgb(255, 255, 255));
        al_draw_text(fonte, al_map_rgb(0, 255, 0), LARGURA_TELA-10, 400, ALLEGRO_ALIGN_RIGHT, "7-Tutorial");
        break;
    }
}

//Funcao para as opcoes do menu
void posicao_menu(int tecla)
{
    if (tecla)
        {
            al_draw_bitmap(fundo, 0, 0, 0);
            al_draw_text(fonte_menu, al_map_rgb(0, 0, 0), LARGURA_TELA /2, 200, ALLEGRO_ALIGN_CENTRE, "Iniciar Jogo");
            al_draw_text(fonte_menu, al_map_rgb(0, 0, 0), LARGURA_TELA /2, 300, ALLEGRO_ALIGN_CENTRE, "Sair");

            if(tecla == 1)
            {
                al_draw_text(fonte_menu, al_map_rgb(0, 255, 0), LARGURA_TELA /2, 200, ALLEGRO_ALIGN_CENTRE, "Iniciar Jogo");
            }
            else if(tecla == 2)
            {
                al_draw_text(fonte_menu, al_map_rgb(255, 0, 0), LARGURA_TELA /2, 300, ALLEGRO_ALIGN_CENTRE, "Sair");
            }
            else
            {
                tecla = 5;
            }
        }
}

bool menu();

int main()
{
    int temp=0;
    bool sair = false;
    int tecla = 0, tecla_jogo = 0;
    int enter = 0;
    int i, n, m, o, p, q, r, s;
<<<<<<< HEAD
=======
    int teclas=0;
>>>>>>> c7e6f4065a4e4c77281d61422de32931174ea44c

  
    if (!menu())
    {
        return -1;
    }
 
    al_draw_bitmap(fundo, 0, 0, 0);
    al_draw_text(fonte_menu, al_map_rgb(0, 0, 0), LARGURA_TELA /2, 200, ALLEGRO_ALIGN_CENTRE, "Iniciar Jogo");
    al_draw_text(fonte_menu, al_map_rgb(0, 0, 0), LARGURA_TELA /2, 300, ALLEGRO_ALIGN_CENTRE, "Sair");
 
    //Looping do teclado
    while (!sair)
    {
        while(!al_is_event_queue_empty(fila_eventos))
        {
            ALLEGRO_EVENT evento;
            al_wait_for_event(fila_eventos, &evento);
 
            if (evento.type == ALLEGRO_EVENT_KEY_DOWN)
            {
                switch(evento.keyboard.keycode)
                {
                    case ALLEGRO_KEY_UP:
                    tecla = 1;
                    break;

                    case ALLEGRO_KEY_DOWN:
                    tecla = 2;
                    break;

                    case ALLEGRO_KEY_LEFT:
                    tecla = 3;
                    break;

                    case ALLEGRO_KEY_RIGHT:
                    tecla = 4;
                    break;

                    case ALLEGRO_KEY_ENTER:                 

                    //Essas condicaa e para ser usadas apenas no menu
                    if(tecla == 1)
                    {
                        temp=tecla;
                        tecla=5;     
                    }
                    else if(tecla == 2)
                    {
                        enter = 5;
                    }

                    //Esse condicao sera usada apenas no desenvolvimento do jogo
                    else
                    {
                        tecla = 5;
                    }
                    break;
                }
            }
            else if (evento.type == ALLEGRO_EVENT_DISPLAY_CLOSE || enter == 5 )
            {
                sair = true;
            }
        }


        posicao_menu(tecla);

        al_flip_display();

        //Aqui e a condicao para quando escolher a opcao de iniciar jogo,
        //o jogo funcionará a partir daqui, aproveitado o looping de sair do teclado.
        if(temp==1)
        {
            if(tecla==5)
            {
                 
                //Imagens dinamicas que serao exibidas para
                //o entendimento da historia do jogo
              

                //primeira imagem a ser exibida 

        al_attach_audio_stream_to_mixer(musica, al_get_default_mixer());
        al_set_audio_stream_playing(musica, true); 

                imagem = al_load_bitmap("01.png");
                if(!imagem)
                {
                    fprintf(stderr, "falha ao carregar imagem 01 da historia.\n");
                    al_destroy_display(janela);
                    return -1;
                }
    
                al_draw_bitmap(imagem, 0, 0, 0);
                
                al_flip_display();

                al_rest(01.0);


                //Segunda imagem a ser exibida
                imagem = al_load_bitmap("02.png");
                if(!imagem)
                {
                    fprintf(stderr, "Falha ao carregar imagem 02 da historia.\n");
                    al_destroy_display(janela);
                    return -1;
                } 
    
                al_draw_bitmap(imagem, 0, 0, 0);
     
                al_flip_display();
     
                al_rest(01.0);
 

                //Terceira imagem a ser exibida
                imagem = al_load_bitmap("03.png"); 
                if(!imagem)
                {
                    fprintf(stderr, "Falha ao carregar imagem 03 da historia.\n");
                    al_destroy_display(janela);
                    return -1;
                }

                al_draw_bitmap(imagem, 0, 0, 0);
    
                al_flip_display();
 
                al_rest(01.0);
                

                //Quarta imagem a ser exibida
                imagem = al_load_bitmap("04.png");

                al_draw_bitmap(imagem, 0, 0, 0);

                al_flip_display();

                al_rest(01.0);


                //Quinta imagem a ser exibida
                imagem = al_load_bitmap("05.png");
                if(!imagem)
                {
                    fprintf(stderr, "Falha ao carregar imagem 05 da historia.\n");
                    al_destroy_display(janela);
                    return -1;
                }

                al_draw_bitmap(imagem, 0, 0, 0);

                al_flip_display();

                al_rest(01.0);
              
                //looping para funcionar o segundo menu do jogo
               
                al_destroy_audio_stream(musica);
                menu:
                while(!sair)
                {
                    al_clear_to_color(al_map_rgb(255, 255, 255));

                    al_draw_text(fonte, al_map_rgb(0, 0, 0), 10, 100, ALLEGRO_ALIGN_LEFT, "1-Primeiros Socorros");     
                    al_draw_text(fonte, al_map_rgb(0, 0, 0), 10, 200, ALLEGRO_ALIGN_LEFT, "2-Sinalização");
                    al_draw_text(fonte, al_map_rgb(0, 0, 0), 10, 300, ALLEGRO_ALIGN_LEFT, "3-Mecânica");
                    al_draw_text(fonte, al_map_rgb(0, 0, 0), LARGURA_TELA-10, 100, ALLEGRO_ALIGN_RIGHT, "4-Direção Defensiva"); 
                    al_draw_text(fonte, al_map_rgb(0, 0, 0), LARGURA_TELA-80, 200, ALLEGRO_ALIGN_RIGHT, "-5-Legislação");         
                    al_draw_text(fonte, al_map_rgb(0, 0, 0), LARGURA_TELA-10, 300, ALLEGRO_ALIGN_RIGHT, "6-Meio Ambiente");
                     al_draw_text(fonte, al_map_rgb(0, 0, 0), LARGURA_TELA-10, 400, ALLEGRO_ALIGN_RIGHT, "7-Tutorial");  

                    al_flip_display();

                    //abrindo mais um evento para funcionar a tecla do jogo, ficando facil de programar as teclas com numeros
                    while(!al_is_event_queue_empty(fila_eventos))
                    {
                        ALLEGRO_EVENT evento_jogo;
                        al_wait_for_event(fila_eventos, &evento_jogo);

                        if(evento_jogo.type == ALLEGRO_EVENT_KEY_DOWN)
                        {
                            switch(evento_jogo.keyboard.keycode)
                            {
                                case ALLEGRO_KEY_1:
                                tecla_jogo = 1;
                                break;

                                case ALLEGRO_KEY_2:
                                tecla_jogo = 2;
                                break;

                                case ALLEGRO_KEY_3:
                                tecla_jogo = 3;
                                break;

                                case ALLEGRO_KEY_4:
                                tecla_jogo = 4;
                                break;

                                case ALLEGRO_KEY_5:
                                tecla_jogo = 5;
                                break;

                                case ALLEGRO_KEY_6:
                                tecla_jogo = 6;
                                break;


                                case ALLEGRO_KEY_7:
                                tecla_jogo = 7;
                                break;
                            }
                        }
                        else if(evento_jogo.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
                        {
                            sair = true;
                        }
                    }

                    //Função do segundo menu do jogo
                    tema(tecla_jogo);
                    al_flip_display();
                    
                    //Se o usuario escolher Primeiros Socorros
     

                    if(tecla_jogo == 1)
                    {
                        al_play_sample(sample, 1.0, 0.0, 1.0, ALLEGRO_PLAYMODE_ONCE, NULL);
                        al_destroy_font(fonte);
                        al_rest(00.7);


<<<<<<< HEAD
=======
                        while(!al_is_event_queue_empty(fila_eventos))
                        {
                            ALLEGRO_EVENT jogar;
                            al_wait_for_event(fila_eventos, &jogar);

                            if(jogar.type == ALLEGRO_EVENT_KEY_DOWN)
                            {
                                switch(jogar.keyboard.keycode)
                                {
                                    case ALLEGRO_KEY_1:
                                    teclas = 1;
                                    break;

                                    case ALLEGRO_KEY_2:
                                    teclas = 2;
                                    break;

                                    case ALLEGRO_KEY_3:
                                    teclas = 3;
                                    break;

                                    case ALLEGRO_KEY_4:
                                    teclas = 4;
                                    break;

                                    case ALLEGRO_KEY_ESCAPE:
                                    teclas = 5;
                                    break;
                                }
                            }
                            else if(jogar.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
                            {
                                sair = true;
                            }
                        }


>>>>>>> c7e6f4065a4e4c77281d61422de32931174ea44c
                        //Aqui ira iniciar o jogo caso o usuario escolha o tema primeiros socorros
                        //o loop funcionara escolhendo 1 pergunta por etapa, para cada etapa terá um certo numero
                        //de perguntas para escolher aleatoriamente, que no caso aqui sao 3 perguntas, e apenas 1 sera a escolhida

                        jogo = al_load_bitmap("ps1_RESPOSTA1.png");
                        jogo2 = al_load_bitmap("ps2_RESPOSTA1.png");
                        jogo3 = al_load_bitmap("ps3_RESPOSTA2.png");                
                        jogo4 = al_load_bitmap("ps4_RESPOSTA2.png");                    
                        jogo5 = al_load_bitmap("ps5_RESPOSTA2.png");
                        jogo6 = al_load_bitmap("ps6_RESPOSTA1.png");
                        jogo7 = al_load_bitmap("ps7_RESPOSTA4.png");
                        jogo8 = al_load_bitmap("ps8_RESPOSTA3.png");
                        jogo9 = al_load_bitmap("ps9_RESPOSTA3.png");
                        jogo10 = al_load_bitmap("ps10_RESPOSTA1.png");                    
                        jogo11 = al_load_bitmap("ps11_RESPOSTA2.png");
                        jogo12 = al_load_bitmap("ps12_RESPOSTA4.png");
                        jogo13 = al_load_bitmap("ps13_RESPOSTA3.png");
                        jogo14 = al_load_bitmap("ps14_RESPOSTA1.png");                    
                        jogo15 = al_load_bitmap("ps15_RESPOSTA2.png");
                        jogo16 = al_load_bitmap("ps16_RESPOSTA2.png");
                        jogo17 = al_load_bitmap("ps17_RESPOSTA4.png");
                        jogo18 = al_load_bitmap("ps18_RESPOSTA4.png");
                        jogo19 = al_load_bitmap("ps19_RESPOSTA2.png");
                        jogo20 = al_load_bitmap("ps20_RESPOSTA2.png");
                        jogo21 = al_load_bitmap("ps21_RESPOSTA1.png");
                        jogo22 = al_load_bitmap("ps22_RESPOSTA2.png");                    
                        jogo23 = al_load_bitmap("ps23_RESPOSTA1.png");
                        jogo24 = al_load_bitmap("ps24_RESPOSTA4.png");
                        jogo25 = al_load_bitmap("ps25_RESPOSTA4.png");
                        jogo26 = al_load_bitmap("ps26_RESPOSTA3.png");
                        jogo27 = al_load_bitmap("ps27_RESPOSTA4.png");
                        jogo28 = al_load_bitmap("ps28_RESPOSTA2.png");
                        jogo29 = al_load_bitmap("ps29_RESPOSTA3.png");
                        jogo30 = al_load_bitmap("ps30_RESPOSTA1.png");
                        jogo31 = al_load_bitmap("ps32_RESPOSTA3.png");
                        jogo32 = al_load_bitmap("ps33_RESPOSTA3.png");
                        jogo33 = al_load_bitmap("ps_34_RESPOSTA3.png");

                        //PRIMEIRA PERGUNTA A SER EXIBIDA (etapa 1)

                        for(i=0; i<1; i++)
                        {
                            srand((unsigned)time(NULL));
                            n = rand() % 3;

                            if(n == 0)
                            {
                                al_draw_bitmap(jogo, 0, 0, 0);
                                al_flip_display();
<<<<<<< HEAD
                               

                                if(tecla_jogo==1){

                                    goto proxima;
                                }
                                else{
                                    goto menu;
                                }
=======

                                do{
                               if(teclas==2){
                                goto proxima;
                               }


                           }while(teclas==0);

                                
>>>>>>> c7e6f4065a4e4c77281d61422de32931174ea44c
                            }
                            else if(n == 1)
                            {
                                al_draw_bitmap(jogo2, 0, 0, 0);
                                al_flip_display();
<<<<<<< HEAD
                                
                                 if(tecla_jogo==1){

                                    goto proxima;
                                }
                                else{
                                    goto menu;
                                }
=======
                                 do{
                               if(teclas==2){
                               goto proxima;
                               }


                           }while(teclas==0);
                                 
                                
>>>>>>> c7e6f4065a4e4c77281d61422de32931174ea44c
                            }
                            else if(n == 2)
                            {
                                al_draw_bitmap(jogo3, 0, 0, 0);
                                al_flip_display();
<<<<<<< HEAD
                                 if(tecla_jogo==1){

                                    goto proxima;
                                }
                                else{
                                    goto menu;
                                }
=======
                                do{
                               if(teclas==2){
                                goto proxima;
                               }


                           }while(teclas==0);
                                 

>>>>>>> c7e6f4065a4e4c77281d61422de32931174ea44c
                            }
                            else if(n==3)
                            {
                             al_draw_bitmap(jogo4, 0, 0, 0);
                                al_flip_display();
<<<<<<< HEAD
                                 if(tecla_jogo==1){

                                    goto proxima;
                                }
                                else{
                                    goto menu;
                                } 
=======

                                 do{
                               if(teclas==2){
                                goto proxima;
                               }


                           }while(teclas==0);
                                 
>>>>>>> c7e6f4065a4e4c77281d61422de32931174ea44c
                            }
                        }

                        //SEGUNDA PERGUNTA A SER EXIBIDA (etapa 2)
<<<<<<< HEAD
                        proxima:
=======
                       proxima:
>>>>>>> c7e6f4065a4e4c77281d61422de32931174ea44c
                        for(i=0; i<1; i++)
                        {
                            m = rand() % 4;
                            if(m == 0)
                            {
                                al_draw_bitmap(jogo5, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(m == 1)
                            {
                                al_draw_bitmap(jogo6, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(m == 2)
                            {
                                al_draw_bitmap(jogo7, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(m == 3)
                            {
                              al_draw_bitmap(jogo8, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);  
                            }
                            else if(m == 4)
                            {
                              al_draw_bitmap(jogo9, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);  
                            }
                        }

                        //TERCEIRA PERGUNTA A SER EXIBIDA (etapa3)

                         for(i=0; i<1; i++)
                        {
                            o = rand() % 5;
                            if(o == 0)
                            {
                                al_draw_bitmap(jogo10, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(o == 1)
                            {
                                al_draw_bitmap(jogo11, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(o == 2)
                            {
                                al_draw_bitmap(jogo12, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(o == 3)
                            {
                              al_draw_bitmap(jogo13, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);  
                            }
                            else if(o == 4)
                            {
                              al_draw_bitmap(jogo14, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);  
                            }
                        }

                        //QUARTA PERGUNTA A SER EXIBIDA (etapa4)

                         for(i=0; i<1; i++)
                        {
                            p = rand() % 3;
                            if(p == 0)
                            {
                                al_draw_bitmap(jogo15, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(p == 1)
                            {
                                al_draw_bitmap(jogo16, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(p == 2)
                            {
                                al_draw_bitmap(jogo17, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(p == 3)
                            {
                              al_draw_bitmap(jogo18, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);  
                            }
                        }


                        //Quinta pergunta a ser exibida(etapa 5)


                        for(i=0; i<1; i++)
                        {
                            q = rand() % 4;
                            if(q == 0)
                            {
                                al_draw_bitmap(jogo19, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(q == 1)
                            {
                                al_draw_bitmap(jogo20, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(q == 2)
                            {
                                al_draw_bitmap(jogo21, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(q == 3)
                            {
                              al_draw_bitmap(jogo22, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);  
                            }
                            else if(q == 4)
                            {
                              al_draw_bitmap(jogo23, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);  
                            }
                        }

                        //Sexta pergunta a ser exibida (etapa6)
                        for(i=0; i<1; i++)
                        {
                            r = rand() % 4;
                            if(r == 0)
                            {
                                al_draw_bitmap(jogo24, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(r == 1)
                            {
                                al_draw_bitmap(jogo25, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(r == 2)
                            {
                                al_draw_bitmap(jogo26, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(r == 3)
                            {
                              al_draw_bitmap(jogo27, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);  
                            }
                            else if(r == 4)
                            {
                              al_draw_bitmap(jogo28, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);  
                            }
                        }

                         //Setima pergunta a ser exibida (etapa 7)
                         for(i=0; i<1; i++)
                        {
                            s = rand() % 4;
                            if(s == 0)
                            {
                                al_draw_bitmap(jogo29, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(s == 1)
                            {
                                al_draw_bitmap(jogo30, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(s == 2)
                            {
                                al_draw_bitmap(jogo31, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(s == 3)
                            {
                              al_draw_bitmap(jogo32, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);  
                            }

                            else if(s == 4)
                            {
                              al_draw_bitmap(jogo33, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);  
                            }


                        }




                        sair = true;
                   

                      }

                      //Se o usuario escolher sinalizacao
                      else
                        if(tecla_jogo == 2)
                        {

                            al_rest(0.07);

                         sinal = al_load_bitmap("sinal1_RESPOSTA2.png");
                          sinal2 = al_load_bitmap("perg_placa_1 - resp. 1.png");
                          sinal3 = al_load_bitmap("sinal3_RESPOSTA3.png");
                          sinal4 = al_load_bitmap("perg_placa_1 - resp. 1.png");
                          sinal5 = al_load_bitmap("sinal5_RESPOSTA1.png");
                          sinal6 = al_load_bitmap("perg_placa_3 - resp. 4.png");
                          sinal7 = al_load_bitmap("sinal7_RESPOSTA1.png");
                          sinal8 = al_load_bitmap("perg_placa_4 - resp. 3.png");
                          sinal9 = al_load_bitmap("sinal9_RESPOSTA2.png");
                          sinal10 = al_load_bitmap("perg_placa_5 - resp. 3.png");
                          sinal11 = al_load_bitmap("sinal11_RESPOSTA2.png");
                          sinal12 = al_load_bitmap("sinal12_RESPOSTA4.png");
                          sinal13 = al_load_bitmap("sinal13_RESPOSTA2.png");
                          sinal14 = al_load_bitmap("perg_placa_6 - resp. 4.png");
                          sinal15 = al_load_bitmap("sinal15_RESPOSTA2.png");
                          sinal16 = al_load_bitmap("sinal16_RESPOSTA3.png");
                          sinal17 = al_load_bitmap("sinal17_RESPOSTA4.png");
                          sinal18 = al_load_bitmap("perg_placa_7 - resp. 1.png");
                          sinal19 = al_load_bitmap("perg_placa_8 - resp. 3.png");
                          sinal20 = al_load_bitmap("perg_placa_9 - resp. 3.png");
                          sinal21 = al_load_bitmap("perg_placa_10 - resp.3.png");
                          sinal22 = al_load_bitmap("perg_placa_11 - resp. 2.png");
                          sinal23 = al_load_bitmap("sinal2_RESPOSTA3.png");
                          sinal24 = al_load_bitmap("sinal4_RESPOSTA2.png");
                          sinal25 = al_load_bitmap("sinal6_RESPOSTA3.png");
                          sinal26 = al_load_bitmap("sinal8_RESPOSTA2.png");
                          sinal27 = al_load_bitmap("sinal10_RESPOSTA3.png");
                          sinal28 = al_load_bitmap("sinal14_RESPOSTA2.png");


                         //Primeira pergunta a ser exibida

                          for(i=0; i<1; i++)
                        {
                            srand((unsigned)time(NULL));
                            n = rand() % 3;

                            if(n == 0)
                            {
                                al_draw_bitmap(sinal, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(n == 1)
                            {
                                al_draw_bitmap(sinal2, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(n == 2)
                            {
                                al_draw_bitmap(sinal3, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                             }
                            else if(n==3)
                            {
                             al_draw_bitmap(sinal4, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);   
                            }

                      }




                     //Segunda pergunta a ser exibida

                      for(i=0; i<1; i++)
                        {
                            srand((unsigned)time(NULL));
                            m = rand() % 3;

                            if(m == 0)
                            {
                                al_draw_bitmap(sinal5, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(m == 1)
                            {
                                al_draw_bitmap(sinal6, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(m == 2)
                            {
                                al_draw_bitmap(sinal7, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                             }
                            else if(m==3)
                            {
                             al_draw_bitmap(sinal8, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);   
                            }

                      }


                     //Terceira pergunta a ser exibida

                      for(i=0; i<1; i++)
                        {
                            srand((unsigned)time(NULL));
                            o = rand() % 3;

                            if(o == 0)
                            {
                                al_draw_bitmap(sinal9, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(o == 1)
                            {
                                al_draw_bitmap(sinal10, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(o == 2)
                            {
                                al_draw_bitmap(sinal11, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                             }
                            else if(o==3)
                            {
                             al_draw_bitmap(sinal12, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);   
                            }

                      }


                      //Quarta pergunta a ser exibida

                      for(i=0; i<1; i++)
                        {
                            srand((unsigned)time(NULL));
                            p = rand() % 3;

                            if(p == 0)
                            {
                                al_draw_bitmap(sinal13, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(p == 1)
                            {
                                al_draw_bitmap(sinal14, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(p == 2)
                            {
                                al_draw_bitmap(sinal15, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                             }
                            else if(p == 3)
                            {
                             al_draw_bitmap(sinal16, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);   
                            }

                      }
                       

                       //Quinta pergunta a ser exibida

                      for(i=0; i<1; i++)
                        {
                            srand((unsigned)time(NULL));
                            q = rand() % 3;

                            if(q == 0)
                            {
                                al_draw_bitmap(sinal17, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(q == 1)
                            {
                                al_draw_bitmap(sinal18, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(q == 2)
                            {
                                al_draw_bitmap(sinal19, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                             }
                            else if(q==3)
                            {
                             al_draw_bitmap(sinal20, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);   
                            }

                      }


                      //Sexta pergunta a ser exibida

                      for(i=0; i<1; i++)
                        {
                            srand((unsigned)time(NULL));
                            r = rand() % 3;

                            if(r == 0)
                            {
                                al_draw_bitmap(sinal21, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(r == 1)
                            {
                                al_draw_bitmap(sinal22, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(r == 2)
                            {
                                al_draw_bitmap(sinal23, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                             }
                            else if(r == 3)
                            {
                             al_draw_bitmap(sinal24, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);   
                            }

                      }



                      for(i=0; i<1; i++)
                        {
                            srand((unsigned)time(NULL));
                            s = rand() % 3;

                            if(s == 0)
                            {
                                al_draw_bitmap(sinal25, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(s == 1)
                            {
                                al_draw_bitmap(sinal26, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(s == 2)
                            {
                                al_draw_bitmap(sinal27, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                             }
                            else if(s == 3)
                            {
                             al_draw_bitmap(sinal28, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);   
                            }

                      }


                      sair=true;
                  }












                      //Se o usuario escolher legislacao

                      else if(tecla_jogo == 4)
                    {

                        al_rest(0.07);

                            dd = al_load_bitmap("dd1_RESPOSTA4.png");
                            dd2 = al_load_bitmap("dd2_RESPOSTA2.png");
                            dd3 = al_load_bitmap("dd3_RESPOSTA1.png");
                            dd4 = al_load_bitmap("dd4_RESPOSTA1.png");
                            dd5 = al_load_bitmap("dd5_RESPOSTA1.png");
                            dd6 = al_load_bitmap("dd6_RESPOSTA1.png");
                            dd7 = al_load_bitmap("dd7_RESPOSTA2.png");
                            dd8 = al_load_bitmap("dd8_RESPOSTA2.png");
                            dd9 = al_load_bitmap("dd9_RESPOSTA2.png");
                            dd10 = al_load_bitmap("dd10_RESPOSTA1.png");
                            dd11 = al_load_bitmap("dd11_RESPOSTA2.png");
                            dd12 = al_load_bitmap("dd12_RESPOSTA2.png");
                            dd13 = al_load_bitmap("dd13_RESPOSTA4.png");
                            dd14 = al_load_bitmap("dd14_RESPOSTA4.png");
                            dd15 = al_load_bitmap("dd15_RESPOSTA3.png");
                            dd16 = al_load_bitmap("dd16_RESPOSTA4.png");
                            dd17 = al_load_bitmap("dd17_RESPOSTA2.png");
                            dd18 = al_load_bitmap("dd18_RESPOSTA3.png");
                            dd19 = al_load_bitmap("dd19_RESPOSTA2.png");
                            dd20 = al_load_bitmap("dd20_RESPOSTA4.png");
                            dd21 = al_load_bitmap("dd21_RESPOSTA3.png");
                            dd22 = al_load_bitmap("dd22_RESPOSTA4.png");
                            dd23 = al_load_bitmap("dd23_RESPOSTA2.png");
                            dd24 = al_load_bitmap("dd24_RESPOSTA2.png");
                            dd25 = al_load_bitmap("dd25_RESPOSTA4.png");
                            dd26 = al_load_bitmap("dd26_RESPOSTA4.png");
                            dd27 = al_load_bitmap("dd27_RESPOSTA4.png");
                            dd28 = al_load_bitmap("dd29_RESPOSTA2.png");
                            dd29 = al_load_bitmap("dd30_RESPOSTA4.png");
                            dd30 = al_load_bitmap("dd31_RESPOSTA4.png");
                            dd31 = al_load_bitmap("dd32_RESPOSTA1.png");
                            dd32 = al_load_bitmap("dd34_RESPOSTA4.png");
                            dd33 = al_load_bitmap("dd35_RESPOSTA4.png");
                            dd34 = al_load_bitmap("dd36_RESPOSTA1.png");
                            dd35 = al_load_bitmap("dd37_RESPOSTA4.png");
                            dd36 = al_load_bitmap("dd38_RESPOSTA1.png");
                            dd37 = al_load_bitmap("dd39_RESPOSTA3.png");
                            dd38 = al_load_bitmap("dd40_RESPOSTA1.png");
                            dd39 = al_load_bitmap("dd41_RESPOSTA1.png");
                            dd40 = al_load_bitmap("dd42_RESPOSTA4.png");
                            dd41 = al_load_bitmap("dd43_RESPOSTA1.png");
                            dd42 = al_load_bitmap("dd44_RESPOSTA4.png");




                            //Primeira pergunta a ser exibida

                         for(i=0; i<1; i++)
                        {
                            srand((unsigned)time(NULL));
                            n = rand() % 5;

                            if(n == 0)
                            {
                                al_draw_bitmap(dd, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(n == 1)
                            {
                                al_draw_bitmap(dd2, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(n == 2)
                            {
                                al_draw_bitmap(dd3, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                             }
                            else if(n==3)
                            {
                             al_draw_bitmap(dd4, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);   
                            }
                            else if(n==4)
                            {
                             al_draw_bitmap(dd5, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);  
                        }

                         else if(n==5)
                            {
                             al_draw_bitmap(dd6, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);  
                        }
                    }





                    //Segunda pergunta a ser exibida

                         for(i=0; i<1; i++)
                        {
                            srand((unsigned)time(NULL));
                            m = rand() % 5;

                            if(m == 0)
                            {
                                al_draw_bitmap(dd7, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(m == 1)
                            {
                                al_draw_bitmap(dd8, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(m == 2)
                            {
                                al_draw_bitmap(dd9, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(m==3)
                            {
                             al_draw_bitmap(dd11, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);   
                            }
                            else if(m==4)
                            {
                             al_draw_bitmap(dd12, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);  
                        }

                         else if(m==5)
                            {
                             al_draw_bitmap(dd13, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);  
                        }
                    }


                    //Terceira pergunta a ser exibida

                         for(i=0; i<1; i++)
                        {
                            srand((unsigned)time(NULL));
                            o = rand() % 5;

                            if(o == 0)
                            {
                                al_draw_bitmap(dd14, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(o == 1)
                            {
                                al_draw_bitmap(dd15, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(o == 2)
                            {
                                al_draw_bitmap(dd16, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(o == 3)
                            {
                             al_draw_bitmap(dd17, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);   
                            }
                            else if(o == 4)
                            {
                             al_draw_bitmap(dd18, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);  
                        }

                         else if(o == 5)
                            {
                             al_draw_bitmap(dd19, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);  
                        }
                    }



                    //Quarta imagem a ser exibida

                         for(i=0; i<1; i++)
                        {
                            srand((unsigned)time(NULL));
                            p = rand() % 5;

                            if(p == 0)
                            {
                                al_draw_bitmap(dd20, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(p == 1)
                            {
                                al_draw_bitmap(dd21, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(p == 2)
                            {
                                al_draw_bitmap(dd22, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(p==3)
                            {
                             al_draw_bitmap(dd23, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);   
                            }
                            else if(p==4)
                            {
                             al_draw_bitmap(dd24, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);  
                        }

                         else if(p==5)
                            {
                             al_draw_bitmap(dd25, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);  
                        }
                    }

                    //Quinta pergunta a ser exibida

                         for(i=0; i<1; i++)
                        {
                            srand((unsigned)time(NULL));
                            q = rand() % 5;

                            if(q == 0)
                            {
                                al_draw_bitmap(dd26, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(q == 1)
                            {
                                al_draw_bitmap(dd27, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(q == 2)
                            {
                                al_draw_bitmap(dd28, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(q==3)
                            {
                             al_draw_bitmap(dd29, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);   
                            }
                            else if(q==4)
                            {
                             al_draw_bitmap(dd30, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);  
                        }

                         else if(q==5)
                            {
                             al_draw_bitmap(dd31, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);  
                        }
                    }


                    //Sexta pergunta a ser exibida

                         for(i=0; i<1; i++)
                        {
                            srand((unsigned)time(NULL));
                            r = rand() % 5;

                            if(r == 0)
                            {
                                al_draw_bitmap(dd32, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(r == 1)
                            {
                                al_draw_bitmap(dd33, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(r == 2)
                            {
                                al_draw_bitmap(dd34, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(r == 3)
                            {
                             al_draw_bitmap(dd35, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);   
                            }
                            else if(r == 4)
                            {
                             al_draw_bitmap(dd36, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);  
                        }

                         else if(r == 5)
                            {
                             al_draw_bitmap(dd37, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);  
                        }
                    }



                    //Setima pergunta a ser exibida

                         for(i=0; i<1; i++)
                        {
                            srand((unsigned)time(NULL));
                            s = rand() % 5;

                            if(s == 0)
                            {
                                al_draw_bitmap(dd38, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(s == 1)
                            {
                                al_draw_bitmap(dd39, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(s == 2)
                            {
                                al_draw_bitmap(dd40, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(s==3)
                            {
                             al_draw_bitmap(dd41, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);   
                            }
                            else if(s==4)
                            {
                             al_draw_bitmap(dd42, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);  
                        }

                         else if(s==5)
                            {
                             al_draw_bitmap(dd10, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);  
                        }


                    }






                      sair=true;

                        }


                        else

                      if(tecla_jogo == 3)
                    {

                        al_rest(0.07);
                    


                        mec = al_load_bitmap("mec1_RESPOSTA1.png");
                        mec2 = al_load_bitmap("mec2_RESPOSTA1.png");
                        mec3 = al_load_bitmap("mec3_RESPOSTA3.png");
                        mec4 = al_load_bitmap("mec4_RESPOSTA1.png");
                        mec5 = al_load_bitmap("mec5_RESPOSTA2.png");
                        mec6 = al_load_bitmap("mec6_RESPOSTA1.png");
                        mec7 = al_load_bitmap("mec7_RESPOSTA4.png");
                        mec8 = al_load_bitmap("mec9_RESPOSTA1.png");
                        mec9 = al_load_bitmap("mec10_RESPOSTA4.png");
                        mec10 = al_load_bitmap("mec11_RESPOSTA3.png");
                        mec11 = al_load_bitmap("mec12_RESPOSTA4.png");
                        mec12 = al_load_bitmap("mec14_RESPOSTA4.png");
                        mec13 = al_load_bitmap("mec15_RESPOSTA3.png");
                        mec14 = al_load_bitmap("mec16_RESPOSTA1.png");
                        mec15 = al_load_bitmap("mec17_RESPOSTA1.png");
                        mec16 = al_load_bitmap("mec18_RESPOSTA3.png");
                        mec17 = al_load_bitmap("mec19_RESPOSTA2.png");
                        mec18 = al_load_bitmap("mec20_RESPOSTA1.png");
                        mec19 = al_load_bitmap("mec21_RESPOSTA1.png");
                        mec20 = al_load_bitmap("mec22_RESPOSTA4.png");
                        mec21 = al_load_bitmap("mec23_RESPOSTA2.png");



                        //Primeira pergunta a ser exibida

                         for(i=0; i<1; i++)
                        {
                            srand((unsigned)time(NULL));
                            n = rand() % 2;

                            if(n == 0)
                            {
                                al_draw_bitmap(mec, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(n == 1)
                            {
                                al_draw_bitmap(mec2, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(n == 2)
                            {
                                al_draw_bitmap(mec3, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                           
                    }


                    //Segunda pergunta a ser exibida

                    for(i=0; i<1; i++)
                        {
                            srand((unsigned)time(NULL));
                            m = rand() % 2;

                            if(m == 0)
                            {
                                al_draw_bitmap(mec4, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(m == 1)
                            {
                                al_draw_bitmap(mec5, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(m == 2)
                            {
                                al_draw_bitmap(mec6, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                           
                    }



                    //Terceira pergunta a ser exibida


                    for(i=0; i<1; i++)
                        {
                            srand((unsigned)time(NULL));
                            o = rand() % 2;

                            if(o == 0)
                            {
                                al_draw_bitmap(mec7, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(o == 1)
                            {
                                al_draw_bitmap(mec8, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(o == 2)
                            {
                                al_draw_bitmap(mec9, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                           
                    }

                    //Quarta pergunta a ser exibida

                    for(i=0; i<1; i++)
                        {
                            srand((unsigned)time(NULL));
                            p = rand() % 2;

                            if(p == 0)
                            {
                                al_draw_bitmap(mec10, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(p == 1)
                            {
                                al_draw_bitmap(mec11, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(p == 2)
                            {
                                al_draw_bitmap(mec12, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                           
                    }



                    //Quinta pergunta a ser exibida

                    for(i=0; i<1; i++)
                        {
                            srand((unsigned)time(NULL));
                            q = rand() % 2;

                            if(q == 0)
                            {
                                al_draw_bitmap(mec13, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(q == 1)
                            {
                                al_draw_bitmap(mec14, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(q == 2)
                            {
                                al_draw_bitmap(mec15, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                           
                    }


                    //Sexta pergunta a ser exibida
                    for(i=0; i<1; i++)
                        {
                            srand((unsigned)time(NULL));
                            r = rand() % 2;

                            if(r == 0)
                            {
                                al_draw_bitmap(mec16, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(r == 1)
                            {
                                al_draw_bitmap(mec17, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(r == 2)
                            {
                                al_draw_bitmap(mec18, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                           
                    }



                    //setima pergunta a ser exibida


                    for(i=0; i<1; i++)
                        {
                            srand((unsigned)time(NULL));
                            s = rand() % 2;

                            if(s == 0)
                            {
                                al_draw_bitmap(mec19, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(s == 1)
                            {
                                al_draw_bitmap(mec20, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(s == 2)
                            {
                                al_draw_bitmap(mec21, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                           
                    }

                    sair=true;
                }



                      else

                      if(tecla_jogo == 5)
                    {

                        al_rest(0.07);


                         leg = al_load_bitmap("Legislação1_resposta1.png");
                         leg2 = al_load_bitmap("Legislação3_resposta3.png");
                         leg3 = al_load_bitmap("Legislação4_resposta1.png");
                         leg4 = al_load_bitmap("Legislação5_resposta2.png");
                         leg5 = al_load_bitmap("Legislação6_resposta1.png");
                        leg6 = al_load_bitmap("Legislação7_resposta2.png");
                        leg7 = al_load_bitmap("Legislação8_resposta1.png");
                         leg8 = al_load_bitmap("Legislação9_resposta1.png");
                         leg9 = al_load_bitmap("Legislação10_resposta3.png");
                         leg10 = al_load_bitmap("Legislação11_resposta4.png");
                         leg11 = al_load_bitmap("Legislação12_resposta1.png");
                         leg12 = al_load_bitmap("Legislação13_resposta4.png");
                         leg13 = al_load_bitmap("Legislação14_resposta2.png");
                         leg14 = al_load_bitmap("Legislação15_resposta1.png");
                         leg15 = al_load_bitmap("Legislação16_resposta3.png");
                         leg16 = al_load_bitmap("Legislação17_resposta1.png");
                         leg17 = al_load_bitmap("Legislação18_resposta1.png");
                         leg18 = al_load_bitmap("Legislação19_resposta1.png");
                         leg19 = al_load_bitmap("Legislação20_resposta1.png");
                         leg20 = al_load_bitmap("Legislação21_resposta3.png");
                         leg21 = al_load_bitmap("Legislação22_resposta1.png");
                         leg22 = al_load_bitmap("Legislação23_resposta3.png");
                         leg23 = al_load_bitmap("Legislação24_resposta2.png");
                         leg24 = al_load_bitmap("Legislação25_resposta2.png");
                         leg25 = al_load_bitmap("Legislação26_resposta3.png");
                         leg26 = al_load_bitmap("Legislação27_resposta4.png");
                         leg27 = al_load_bitmap("Legislação28_resposta3.png");
                         leg28 = al_load_bitmap("Legislação29_resposta3.png");
                         leg29 = al_load_bitmap("Legislação30_resposta1.png");
                         leg30 = al_load_bitmap("Legislação31_resposta1.png");
                         leg31 = al_load_bitmap("Legislação34_resposta2.png");
                         leg32 = al_load_bitmap("Legislação35_resposta4.png");
                         leg33 = al_load_bitmap("Legislação36_resposta1.png");
                         leg34 = al_load_bitmap("Legislação37_resposta3.png");
                         leg35 = al_load_bitmap("Legislação38_resposta1.png");
                         leg36 = al_load_bitmap("Legislação39_resposta3.png");
                         leg37 = al_load_bitmap("Legislação40_resposta3.png");
                         leg38 = al_load_bitmap("Legislação41_resposta4.png");
                         leg39 = al_load_bitmap("Legislação42_resposta4.png");
                         leg40 = al_load_bitmap("Legislação43_resposta1.png");
                         leg41 = al_load_bitmap("Legislação45_resposta2.png");
                         leg42 = al_load_bitmap("Legislação46_resposta2.png");

                         //Primeira pergunta a ser exibida

                         for(i=0; i<1; i++)
                        {
                            srand((unsigned)time(NULL));
                            n = rand() % 5;

                            if(n == 0)
                            {
                                al_draw_bitmap(leg, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(n == 1)
                            {
                                al_draw_bitmap(leg2, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(n == 2)
                            {
                                al_draw_bitmap(leg3, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(n==3)
                            {
                             al_draw_bitmap(leg4, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);   
                            }
                            else if(n==4)
                            {
                             al_draw_bitmap(leg5, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);  
                        }

                         else if(n==5)
                            {
                             al_draw_bitmap(leg6, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);  
                        }
                    }

                        //Segunda pergunta a ser exibida

                         for(i=0; i<1; i++)
                        {
                            srand((unsigned)time(NULL));
                            m = rand() % 5;

                            if(m == 0)
                            {
                                al_draw_bitmap(leg7, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(m == 1)
                            {
                                al_draw_bitmap(leg8, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(m == 2)
                            {
                                al_draw_bitmap(leg9, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(m==3)
                            {
                             al_draw_bitmap(leg10, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);   
                            }
                            else if(m==4)
                            {
                             al_draw_bitmap(leg11, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);  
                        }

                         else if(m==5)
                            {
                             al_draw_bitmap(leg12, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);  
                        }

                    }

                        //Terceira imagem

                         for(i=0; i<1; i++)
                        {
                            srand((unsigned)time(NULL));
                            o = rand() % 5;

                            if(o == 0)
                            {
                                al_draw_bitmap(leg13, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(o == 1)
                            {
                                al_draw_bitmap(leg14, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(o == 2)
                            {
                                al_draw_bitmap(leg15, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(o ==3)
                            {
                             al_draw_bitmap(leg16, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);   
                            }
                            else if(o ==4)
                            {
                             al_draw_bitmap(leg17, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);  
                        }

                         else if(o == 5)
                            {
                             al_draw_bitmap(leg18, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);  
                        }

                    }





                        //Quarta pergunta a ser exibida
                         for(i=0; i<1; i++)
                        {
                            srand((unsigned)time(NULL));
                            p = rand() % 5;

                            if(p == 0)
                            {
                                al_draw_bitmap(leg19, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(p == 1)
                            {
                                al_draw_bitmap(leg20, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(p == 2)
                            {
                                al_draw_bitmap(leg21, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(p ==3)
                            {
                             al_draw_bitmap(leg22, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);   
                            }
                            else if(p ==4)
                            {
                             al_draw_bitmap(leg23, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);  
                        }

                         else if(p == 5)
                            {
                             al_draw_bitmap(leg24, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);  
                        }

                    }

                    //Quinta pergunta a ser exibida
                    for(i=0; i<1; i++)
                        {
                            srand((unsigned)time(NULL));
                            q = rand() % 5;

                            if(q == 0)
                            {
                                al_draw_bitmap(leg25, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(q == 1)
                            {
                                al_draw_bitmap(leg26, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(q == 2)
                            {
                                al_draw_bitmap(leg27, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(q ==3)
                            {
                             al_draw_bitmap(leg28, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);   
                            }
                            else if(q ==4)
                            {
                             al_draw_bitmap(leg29, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);  
                        }

                         else if(q == 5)
                            {
                             al_draw_bitmap(leg30, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);  
                        }

                    }

                    //Sexta pergunta a ser exibida

                    for(i=0; i<1; i++)
                        {
                            srand((unsigned)time(NULL));
                            r = rand() % 5;

                            if(r == 0)
                            {
                                al_draw_bitmap(leg31, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(r == 1)
                            {
                                al_draw_bitmap(leg32, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(r == 2)
                            {
                                al_draw_bitmap(leg33, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(r ==3)
                            {
                             al_draw_bitmap(leg34, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);   
                            }
                            else if(r ==4)
                            {
                             al_draw_bitmap(leg35, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);  
                        }

                         else if(r == 5)
                            {
                             al_draw_bitmap(leg36, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);  
                        }

                    }

                    //setima pergunta a ser exibida


                    for(i=0; i<1; i++)
                        {
                            srand((unsigned)time(NULL));
                            s = rand() % 5;

                            if(s == 0)
                            {
                                al_draw_bitmap(leg37, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(s == 1)
                            {
                                al_draw_bitmap(leg38, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(s == 2)
                            {
                                al_draw_bitmap(leg39, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(s ==3)
                            {
                             al_draw_bitmap(leg40, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);   
                            }
                            else if(s ==4)
                            {
                             al_draw_bitmap(leg41, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);  
                        }

                         else if(s == 5)
                            {
                             al_draw_bitmap(leg42, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);  
                        }



                    }

                        sair=true;
                    }


                    else

                      if(tecla_jogo == 6)
                    {

                        al_rest(0.07);

                        meio = al_load_bitmap("meioamb1_RESPOSTA2.png");
                        meio2 = al_load_bitmap("meioamb2_RESPOSTA2.png");
                        meio3 = al_load_bitmap("meioamb3_RESPOSTA1.png");
                        meio4 = al_load_bitmap("meioamb4_RESPOSTA4.png");
                        meio5 = al_load_bitmap("meioamb6_RESPOSTA4.png");
                        meio6 = al_load_bitmap("meioamb7_RESPOSTA4.png");
                        meio7 = al_load_bitmap("meioamb8_RESPOSTA3.png");
                        meio8 = al_load_bitmap("meioamb9_RESPOSTA3.png");
                        meio9 = al_load_bitmap("meioamb10_RESPOSTA4.png");
                        meio10 = al_load_bitmap("meioamb12_RESPOSTA1.png");
                        meio11 = al_load_bitmap("meioamb13_RESPOSTA3.png");
                        meio12 = al_load_bitmap("meioamb14_RESPOSTA1.png");
                        meio13 = al_load_bitmap("meioamb15_RESPOSTA1.png");
                        meio14 = al_load_bitmap("meioamb16_RESPOSTA3.png");

                         for(i=0; i<1; i++)
                        {
                            srand((unsigned)time(NULL));
                            n = rand() % 1;

                            if(n == 0)
                            {
                                al_draw_bitmap(meio, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(n == 1)
                            {
                                al_draw_bitmap(meio2, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }

                        }

                         //Segunda pergunta a ser exibida

                         for(i=0; i<1; i++)
                        {
                            srand((unsigned)time(NULL));
                            m = rand() % 1;

                            if(m == 0)
                            {
                                al_draw_bitmap(meio3, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(m == 1)
                            {
                                al_draw_bitmap(meio4, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }

                        }

                        //Terceira pergunta a ser exibida


                         for(i=0; i<1; i++)
                        {
                            srand((unsigned)time(NULL));
                            o = rand() % 1;

                            if(o == 0)
                            {
                                al_draw_bitmap(meio5, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(o == 1)
                            {
                                al_draw_bitmap(meio6, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }

                        }


                         //Quarta pergunta a ser exibida

                         for(i=0; i<1; i++)
                        {
                            srand((unsigned)time(NULL));
                            p = rand() % 1;

                            if(p == 0)
                            {
                                al_draw_bitmap(meio7, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(p == 1)
                            {
                                al_draw_bitmap(meio8, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }

                        }


                        //Quinta pergunta a ser exibida


                         for(i=0; i<1; i++)
                        {
                            srand((unsigned)time(NULL));
                            q = rand() % 1;

                            if(q == 0)
                            {
                                al_draw_bitmap(meio9, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(q == 1)
                            {
                                al_draw_bitmap(meio10, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }

                        }

                        //Sexta pergunta a ser exibida


                         for(i=0; i<1; i++)
                        {
                            srand((unsigned)time(NULL));
                            r = rand() % 1;

                            if(r == 0)
                            {
                                al_draw_bitmap(meio11, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(r == 1)
                            {
                                al_draw_bitmap(meio12, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }

                        }

                        //Setima pergunta a ser exibida


                         for(i=0; i<1; i++)
                        {
                            srand((unsigned)time(NULL));
                            s = rand() % 1;

                            if(n == 0)
                            {
                                al_draw_bitmap(meio13, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }
                            else if(s == 1)
                            {
                                al_draw_bitmap(meio14, 0, 0, 0);
                                al_flip_display();
                                al_rest(02.0);
                            }

                        }

                        sair=true;
                    }


                    else if(tecla_jogo==7){
                        al_rest(0.07);

                        como = al_load_bitmap("como jogar.jpg");

                        al_draw_bitmap(como, 0,0,0);
                        
                        al_flip_display();
                        al_rest(05.0);
                        tecla_jogo=0;
                        goto menu;
                        al_flip_display();
                    }







                


                } 


            }
        }
    }
            
    al_destroy_display(janela);
    al_destroy_event_queue(fila_eventos);
    al_destroy_sample(sample);

    return 0;
}

bool menu()
{
    if (!al_init())
    {
        fprintf(stderr, "Falha ao inicializar a Allegro.\n");
        return false;
    }
    
    al_init_font_addon(); 
 
    if (!al_init_ttf_addon())
    {
        fprintf(stderr, "Falha ao inicializar add-on allegro_ttf.\n");
        return false;
    }


    if (!al_install_audio())
    {
        fprintf(stderr, "Falha ao inicializar áudio.\n");
        return false;
    }

    if (!al_reserve_samples(1))
    {
        fprintf(stderr, "Falha ao alocar canais de áudio.\n");
        return false;
    }
 
    if (!al_init_acodec_addon())
    {
        fprintf(stderr, "Falha ao inicializar codecs de áudio.\n");
        return false;
    }
 
    if (!al_init_image_addon())
    {
        fprintf(stderr, "Falha ao inicializar add-on allegro_image.\n");
        return false;
    }

     sample = al_load_sample("errado.ogg");
    if (!sample)
    {
        fprintf(stderr, "Falha ao carregar sample.\n");
        al_destroy_display(janela);
        return false;
    }
 
    if (!al_install_keyboard())
    {
        fprintf(stderr, "Falha ao inicializar o teclado.\n");
        return false;
    }
    
    //Criando a janela do jogo
    janela = al_create_display(LARGURA_TELA, ALTURA_TELA);
    if (!janela)
    {
        fprintf(stderr, "Falha ao criar janela.\n");
        return false;
    }
    
    //Titulo que aparecera na tela do jogo
    al_set_window_title(janela, "Se Aventurando no Trânsito");
 
    fonte = al_load_font("CHANTICL.TTF", 27, 0);
    if (!fonte)
    {
        fprintf(stderr, "Falha ao carregar \"fonte comic.ttf\".\n");
        al_destroy_display(janela);
        return false;
    }

    fonte_menu = al_load_font("CHANTICL.TTF", 60, 0);
    if(!fonte_menu)
    {
      fprintf(stderr, "Falha ao iniciar fonte_menu\n");
      al_destroy_display(janela);
      return false;
    }
    
    //Criando fila de eventos
    fila_eventos = al_create_event_queue();
    if (!fila_eventos)
    {
        fprintf(stderr, "Falha ao criar fila de eventos.\n");
        al_destroy_display(janela);
          al_destroy_sample(sample);
        return false;
    }

    musica = al_load_audio_stream("Soul_Thang_60.ogg", 4, 1024);
    if (!musica)
    {
        fprintf(stderr, "Falha ao carregar audio.\n");
        al_destroy_event_queue(fila_eventos);
        al_destroy_display(janela);
        al_destroy_sample(sample);
        
        return false;
    }
    
    //Carregando imagem de fundo do menu inicial 
    fundo = al_load_bitmap("men.jpg");
    if (!fundo)
    {
        fprintf(stderr, "Falha ao carregar imagem de fundo.\n");
        al_destroy_display(janela);
        al_destroy_event_queue(fila_eventos);
        return false;
    }
 
    al_register_event_source(fila_eventos, al_get_keyboard_event_source());
    al_register_event_source(fila_eventos, al_get_display_event_source(janela));

    return true;
}