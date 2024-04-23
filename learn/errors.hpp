#ifndef ERRORS_HPP
#define ERRORS_HPP

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <string>

class Errors{
private:
    int success;
    char infoLog[512];
public:
    
    /**
     * @brief Retrieves a parameter from a shader object and checks for errors.
     *
     * This function retrieves the integer value of a parameter for the specified shader object
     * and checks for OpenGL errors. If an error occurs during the retrieval, an error message
     * will be stored in the provided error message string.
     *
     * @param shader The shader object for which to retrieve the parameter.
     * @param pname The name of the parameter to retrieve. It must be one of the following:
     *              - GL_SHADER_TYPE: Returns the shader type.
     *              - GL_DELETE_STATUS: Returns GL_TRUE if the shader object has been flagged for deletion, and GL_FALSE otherwise.
     *              - GL_COMPILE_STATUS: Returns GL_TRUE if the last compile operation on the shader was successful, and GL_FALSE otherwise.
     *              - GL_INFO_LOG_LENGTH: Returns the number of characters in the information log for the shader object.
     *              - GL_SHADER_SOURCE_LENGTH: Returns the length of the shader source code.
     * @param errorMessage A reference to a string where any error message will be stored.
     */
    void glGetShaderivCheck(GLuint shader, GLenum pname, std::string errorMessage);
    
    /**
     * @brief Retrieves a parameter from a program object and checks for errors.
     *
     * This function retrieves the integer value of a parameter for the specified program object
     * and checks for OpenGL errors. If an error occurs during the retrieval, an error message
     * will be stored in the provided error message string.
     *
     * @param program The program object for which to retrieve the parameter.
     * @param pname The name of the parameter to retrieve. It must be one of the following:
     *              - GL_DELETE_STATUS: Returns GL_TRUE if the program object has been flagged for deletion, and GL_FALSE otherwise.
     *              - GL_LINK_STATUS: Returns GL_TRUE if the last link operation on the program was successful, and GL_FALSE otherwise.
     *              - GL_VALIDATE_STATUS: Returns GL_TRUE if the last validation operation on the program was successful, and GL_FALSE otherwise.
     *              - GL_INFO_LOG_LENGTH: Returns the number of characters in the information log for the program object.
     *              - GL_ATTACHED_SHADERS: Returns the number of attached shader objects.
     *              - GL_ACTIVE_ATTRIBUTES: Returns the number of active attribute variables for the program.
     *              - GL_ACTIVE_ATTRIBUTE_MAX_LENGTH: Returns the length of the longest active attribute name for the program.
     *              - GL_ACTIVE_UNIFORMS: Returns the number of active uniform variables for the program.
     *              - GL_ACTIVE_UNIFORM_MAX_LENGTH: Returns the length of the longest active uniform name for the program.
     * @param errorMessage A reference to a string where any error message will be stored.
     */
    void glGetProgramivCheck(GLuint program, GLenum pname, std::string errorMessage);

};

#endif /* ERRORS_HPP */
