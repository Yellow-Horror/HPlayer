#pragma once
#include "omPlayer.h"
//#include "sndPlayer.h"
//#include "imgPlayer.h"

class mediaPlayer : public omListener {

    public:

        //INIT
        mediaPlayer();
        void init();
        void basepath(string path);

        //RUN
        void update();
        void draw();

        //INFO
        void displayInfo();
        void displayStandby();

        //PLAYBACK
        bool isPlaying();
        bool isPaused();
        int getPositionMs();
        int getDurationMs();

        //CONTROL
        void load(vector<string> playlist);
        void load();
        int  playlistSize();

        void play(vector<string> playlist);
        void play(string file);
        void play(int index);       
        void play();

        void next();
        void prev();
        void stop();
        void pause();
        void resume();
        void seek(int timemilli);

        //EVENTS LISTENER
        void onVideoEnd();
        void onVideoFreeze();

        //INFO
        string media();


        //GENERIC PARAMS
        string  name;
        bool    info;
        int     volume;
        bool    mute;
        bool    ahdmi;
        bool    loop;
        
        //VIDEO PARAMS
        bool    textured;
        int     zoom;
        int     blur;
        

        
    private:
                
        omPlayer* video;
        //sndPlayer sound;
        //imgPlayer image;

        string  basePath;

        void clearscreen();
        
        vector<ofFile>  mediaFiles;
        int             currentIndex;

};