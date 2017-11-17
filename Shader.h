#ifndef __SHADER_H__
#define __SHADER_H__

// #include <GL/glew.h>
#include <glad/glad.h> // 包含glad来获取所有的必须openGL头文件
#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Shader {
public:
    // 程序ID
    unsigned int m_progID;

    // 构造器读取并构建着色器
    Shader(const GLchar *vertexPath, const GLchar *fragmentPath);
    // 使用/激活程序
    void use();
    // uniform工具函数
    void setBool(const std::string &name, bool value) const;
    void setInt(const std::string &name, int value) const;
    void setFloat(const std::string &name, float value) const;
    void setMat4(const std::string &name, glm::mat4 value) const;

private:
    void checkCompileErrors(unsigned int shader, std::string &type);
};


#endif // __SHADER_H__
