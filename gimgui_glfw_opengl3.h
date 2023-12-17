#pragma once

#include "imgui.h"
#include "backends/imgui_impl_glfw.h"
#include "backends/imgui_impl_opengl3.h"

#include <GLFW/glfw3.h>
#include <cstdio>
#include <string>


class gimgui {
    private:
        std::string title;
        static void glfw_error_callback(int error, const char* description){
            fprintf(stderr, "GLFW Error %d: %s\n", error, description);
        }

    public:

        GLFWwindow *window;

        gimgui();
        gimgui(std::string t);

        const GLFWwindow* returnWindow();
        ImVec4 clear_color;

        void init();
        void render();
        void newFrame();
        void free();
};
