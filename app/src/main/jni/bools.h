#ifndef BOOLS
#define BOOLS

bool EnableEsp = false;
bool isESPLine = false;
bool EspLine2 = false;
bool isESPBox = false;
bool isEspHealth = false;
bool isEspHp = false;
bool isESPCornerBox = false;
bool isESPName = false;
bool isEspDistance = false;

bool TeleKill = false;
float YAxis = 1;
bool Fly;

ImVec4 boxColor = ImVec4(1,1,1,1);
ImVec4 lineColor = ImVec4(1,1,1,1);
ImVec4 countColor = ImVec4(0.0f, 1.0f, 0.0f, 0.2f);
ImVec4 outlineColor = ImVec4(0,0,0,1);
//float HpColor[4] = {0, 1, 0, 1};
float lineThickness = 2.0f;

bool bInitDone = false;

int screenWidth,screenHeight = 0;
bool g_Initialized = false;
void *m_EGL = NULL;
int glWidth, glHeight = 0;

ImGuiWindow* g_window = NULL;

bool setup;
bool page1 = true;
bool page2 = false;
bool page3 = false;
bool page4 = false;
bool page5 = false;

float fps = 0.0f;
float frames = 0.0f;
auto lastTime = std::chrono::high_resolution_clock::now();

void UpdateFPS() {
    auto currentTime = std::chrono::high_resolution_clock::now();
    std::chrono::duration<float> elapsedTime = currentTime - lastTime;
    frames++;
    if (elapsedTime.count() >= 0.1f) {
        fps = frames / elapsedTime.count();
        frames = 0;
        lastTime = currentTime;
    }
}

bool openMenuuuu = false;
float scaleEz = 1.5f;
float menuOpenTime = 0.0f;
bool menuOpen = false;

using namespace ImGui;
using namespace ImHui;

int page = 1;

float alpha = 0.0f;
ImVec4 accentcolor = ImColor(99,1,139);

struct My_Patches {
    MemoryPatch Grande,AidKit;
} jek;

#endif
