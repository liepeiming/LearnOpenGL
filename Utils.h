#ifndef __UTILS_H__
#define __UTILS_H__

#ifdef WIN32
#include <windows.h>
#endif

//#include <GL/glew.h>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <stb_image/stb_image.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <math.h>

#define SCR_WIDTH  800
#define SCR_HEIGHT 600

#define GLSL "./Resources/glsl/"
#define PIC  "./Resources/textures/"
#define OBJ  "./Resources/objects/"

static void framebuffer_size_callback(GLFWwindow *pWindow, int width, int height);
static void processInput(GLFWwindow *pWindow);



// glfw: whenever the window size changed (by OS or user resize) this callback function executes
// ---------------------------------------------------------------------------------------------
static void framebuffer_size_callback(GLFWwindow *pWindow, int width, int height) {
    // make sure the viewport matches the new window dimensions; note that width and
    // height will be significantly larger than specified on retina displays.
    glViewport(0, 0, width, height);
    // 线框模式(Wireframe Mode)
    if (SCR_WIDTH == width && SCR_HEIGHT == height) {
    	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	} else {
		glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	}
}
// process all input: query GLFW whether relevant keys are pressed/released this frame and react accordingly
// ---------------------------------------------------------------------------------------------------------
static void processInput(GLFWwindow *pWindow) {
    if (glfwGetKey(pWindow, GLFW_KEY_ESCAPE) == GLFW_PRESS) {
        glfwSetWindowShouldClose(pWindow, true);
    }
}

#endif // __UTILS_H__
