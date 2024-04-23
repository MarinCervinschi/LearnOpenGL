#include "errors.hpp"

void Errors::glGetShaderivCheck(GLuint shader, GLenum pname, std::string errorMessage) {
    glGetShaderiv(shader, pname, &success);
    if (!success) {
        glGetShaderInfoLog(shader, 512, NULL, infoLog);
        std::cout << errorMessage << infoLog << std::endl;
    }
    
}

void Errors::glGetProgramivCheck(GLuint program, GLenum pname, std::string errorMessage) {
    // check for linking errors
    glGetProgramiv(program, pname, &success);
    if (!success) {
        glGetProgramInfoLog(program, 512, NULL, infoLog);
        std::cout << errorMessage << infoLog << std::endl;
    }
}
