// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"
#include <assert.h>

#include <stdio.h>
#include <tchar.h>

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <string>
#include <functional>
#include <unordered_map>
#include <iostream>
#include <chrono>

#include "Helpers.h"

#include "ShaderProgram.h"

#include "GameCore.h"


#define LIMIT_FPS  0        //0:Unlimited, 1:60FPS, 2:30FPS