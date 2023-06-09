#ifndef SHADER_H
#define SHADER_H

#include <glad/glad.h>

#include <string>
#include <iostream>
#include <sstream>
#include <fstream>

class Shader {
public:
	unsigned int ID; //program id.
	Shader(const char* vertexPath, const char* fragmentPath); //read and build in constructor.
	
	void use();	//use shader

	void setBool(const std::string& name, bool value);
	void setInt(const std::string& name, int value);
	void setFloat(const std::string& name, float value);
};

#endif // !SHADER_H

