#ifndef DISPLAY_H
#define DISPLAY_H

#include <SDL2/SDL.h>
#include <string>

using namespace std;

class Display
{
    public:
        Display(int width, int height, const string& title);
        void Clear(float r, float g, float b, float a);
        virtual ~Display();
        void Update();
        bool IsClosed();

    protected:

    private:
        Display(const Display& other) {}
        void operator=(const Display& other) {}

        SDL_Window* m_window;
        SDL_GLContext m_glContext;
        bool isClosed;
};

#endif // DISPLAY_H
