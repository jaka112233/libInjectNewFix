#pragma once

#define  IMGUI_DEFINE_MATH_OPERATORS
#include "imgui.h"
#include "imgui_internal.h"

#include <string>
#include <vector>
#include <functional>

using namespace std;

#define to_vec4( r, g, b, a ) ImColor( r / 255.f, g / 255.f, b / 255.f, a )

class c_custom {

public:
    int accent_color[4] = {113, 79, 253, 255};
    ImColor get_accent_color( float a = 1.f ) {
    return to_vec4( accent_color[0], accent_color[1], accent_color[2], a );
    }

};

inline c_custom custom;
