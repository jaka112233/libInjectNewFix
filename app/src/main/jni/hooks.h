#ifndef HOOKS_H
#define HOOKS_H

#include <EGL/egl.h>
#include <GLES3/gl3.h>

#include "Call_ImGui.h"

#include "KittyMemory/MemoryPatch.h"

#include "Unity/Vector3.hpp"
#include "Unity/Vector2.hpp"
#include "Unity/Rect.h"
#include "Unity/Quaternion.h"

#include "ByNameModding/Tools.h"
#include "ByNameModding/fake_dlfcn.h"
#include "ByNameModding/Il2Cpp.h"

#include "Utils.h"
#include "bools.h"
#include "Includes/obfuscate.h"
#include "Bypass.h"
#include "Hooker.h"
#include "Dobby/dobby.h"

#define libName "libil2cpp.so"

bool Bypass = false;

#define HOOK(ret, func, ...) \
    ret (*orig##func)(__VA_ARGS__); \
    ret my##func(__VA_ARGS__)

HOOK(void, Input, void *thiz, void *ex_ab, void *ex_ac){ 
    origInput(thiz, ex_ab, ex_ac);
    ImGui_ImplAndroid_HandleInputEvent((AInputEvent *)thiz); 
    return;
}

int32_t (*origInput2)(void *instanceTHiz, void *param_1, bool param_2, long param_3, void *param_4, void **thiz_ptr);
int32_t myInput2(void *instanceTHiz, void *param_1, bool param_2, long param_3, void *param_4, void **thiz_ptr) {
    int32_t result = origInput2(instanceTHiz, param_1, param_2, param_3, param_4, thiz_ptr);
    if(thiz_ptr) {
        if(*thiz_ptr) {
            auto thiz = *thiz_ptr;
            ImGui_ImplAndroid_HandleInputEvent((AInputEvent *)thiz);
        }
    }
    return result;
}

void Renderingsd() {
    
    ImGuiIO &io = GetIO();
    
    time_t now = time(0);
    tm* ltm = localtime(&now);
    char buffer[80];
    strftime(buffer, 80, "%H:%M", ltm);
    std::string wt = ("%s", buffer);
    std::string watertext = "NEXTJEK [FREE VERSION]";
    if (WaterCombo[0]) {
    watertext += std::string(" | ");
    watertext += wt.c_str();
    }    
    ImVec2 cal_text = CalcTextSize(watertext.c_str());    
    waterfix.endW = cal_text.x + 20;
    waterfix.endH = cal_text.y * 2 - 6;
      
    auto bg_clr = ImColor(0, 0, 0, 140),
    line_clr = ImColor(255, 170, 55, 255),
    text_clr = ImColor(255, 255, 255, 255),
    glow_clr_first = ImColor(255, 170, 55, 125),
    glow_clr_second = ImColor(255, 170, 55, 0);
    
    auto p = GetWindowPos();
    ImVec2 position = ImVec2(menu.posW, menu.posH);    
    GetForegroundDrawList()->AddRectFilled(position, ImVec2(menu.posW + cal_text.x + 10, menu.posH + cal_text.y * 2 - 6), bg_clr);    
    GetForegroundDrawList()->AddRectFilled(position, ImVec2(menu.posW + cal_text.x + 10, menu.posH + 2), line_clr);    
    GetForegroundDrawList()->AddText(ImVec2(menu.posW + 5, menu.posH + cal_text.y / 2 - 2), text_clr, watertext.c_str());    
    GetForegroundDrawList()->AddRectFilledMultiColor(position, ImVec2(menu.posW + cal_text.x + 10, menu.posH + cal_text.y), glow_clr_first, glow_clr_first, glow_clr_second, glow_clr_second);
    
    if (openMenuuuu) {
    if (menu.ShowMouse) {
    io.MouseDrawCursor = true;
    } else {
    io.MouseDrawCursor = false;
    }
              
    SetNextWindowSize(ImVec2(800, 600), ImGuiCond_Once);    
    SetNextWindowPos(ImVec2(glWidth/2 - 327.5f, glHeight/2 - 212.5f), ImGuiCond_Once);
    
    float t = ImSaturate(menuOpenTime / 0.5f);
    PushStyleVar(ImGuiStyleVar_Alpha, t - 0.1f);
    menuOpenTime += GetIO().DeltaTime;
    
     
    if (!Begin(OBFUSCATE("@NEXTJEK"), NULL, ImGuiWindowFlags_AlwaysAutoResize | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoTitleBar)) {
    End();
    return;
    }
    
    ImVec2 Q1, Q2;
    ImDrawList* qDrawList;
    const auto& qCurrentWindowPos = GetWindowPos();
    const auto& qWindowDrawList = GetWindowDrawList();
    const auto& qBackgroundDrawList = GetBackgroundDrawList();
    const auto& qForegroundDrawList = GetForegroundDrawList();
    
    Q1 = ImVec2(35.000f, 68.000f);
    Q1.x += qCurrentWindowPos.x;
    Q1.y += qCurrentWindowPos.y;
    Q2 = ImVec2(125.000f, 70.000f);
    Q2.x += qCurrentWindowPos.x;
    Q2.y += qCurrentWindowPos.y;
    qDrawList = qWindowDrawList;
    qDrawList->AddRectFilledMultiColor(Q1, Q2, ImColor(255, 255, 255, 150), ImColor(0, 0, 0, 0), ImColor(255, 255, 255, 150), ImColor(0, 0, 0, 0));
        
    SetCursorPos(ImVec2(35, 30));
    TextColored(ImColor(255, 170, 55, 200), "NEXTJEK");
    
    SetCursorPos(ImVec2(7, 100));
    if (Button(OBFUSCATE(ICON_FA_GAMEPAD " Main Menu"), ImVec2(147.0f, 40.0f))) {		
    page1 = true;
    page2 = false;
    page3 = false;
    page4 = false;
    page5 = false;
    }
    
    SetCursorPos(ImVec2(7, 145));
    if (Button(OBFUSCATE(ICON_FA_EYE " Weapon"), ImVec2(147.0f, 40.0f))) {		
    page1 = false;
    page2 = true;
    page3 = false;
    page4 = false;
    page5 = false;
    }
    
    SetCursorPos(ImVec2(7, 190));
    if (Button(OBFUSCATE(ICON_FA_CROSSHAIRS " Extra"), ImVec2(147.0f, 40.0f))) {	
    page1 = false;
    page2 = false;
    page3 = true;
    page4 = false;
    page5 = false;	
    }
    
    SetCursorPos(ImVec2(7, 235));
    if (Button(OBFUSCATE(ICON_FA_INFINITY " ESP"), ImVec2(147.0f, 40.0f))) {		
    page1 = false;
    page2 = false;
    page3 = false;
    page4 = true;
    page5 = false;
    }
    
    SetCursorPos(ImVec2(7, 280));
    if (Button(OBFUSCATE(ICON_FA_GEAR " SETTING"), ImVec2(147.0f, 40.0f))) {		
    page1 = false;
    page2 = false;
    page3 = false;
    page4 = false;
    page5 = true;
    }
    
    time_t now = time(0);
    tm* ltm = localtime(&now);
    char buffer1[80];
    char buffer2[80];
    strftime(buffer1, 80, "%d.%m.%Y", ltm);
    strftime(buffer2, 80, "%H:%M:%S", ltm);
    
    SetCursorPos(ImVec2(45, 445));
    Text("%s", buffer2);
    
    SetCursorPos(ImVec2(35, 470));
    Text("%s", buffer1);
    
    if (page1) {		
        SetCursorPos(ImVec2(167, 20));
        BeginChild(1, ImVec2(500, 600), true);
		
		ImGui::Checkbox("Add Coin && Gem", &isCoin);
		ImGui::Checkbox("Player Health", &IsHealth);
		ImGui::Checkbox("Player Armor", &IsArmor);
		ImGui::Checkbox("Player Energy", &isEnergy);
		ImGui::Checkbox("Player Skill NoCd", &isSkillNoCd);
		ImGui::Checkbox("Player Damage", &IsCritical);
		ImGui::Checkbox("Player Immune Debuff", &isImmune);
		
		ImGui::SliderFloat("Player Atk Speed", &isAtkSpeed, 1, 20, "%.0f");
		ImGui::SliderFloat("Player Speed", &isSpeed, 1, 20, "%.0f");
		ImGui::SliderFloat("Bullet Size", &isBulletSize, 1, 50, "%.0f");
		
		ImGui::Checkbox("Hero Level", &isLevel);
		ImGui::Checkbox("Leser Bullet Scale", &isLeserScale);
		ImGui::Checkbox("Gas Bullet Modif", &IsGasBulletModif);
		ImGui::Checkbox("Bow Bullet Modif", &isBowBullet);
		ImGui::Checkbox("Artifact Modif", &isModifArtifac);
		ImGui::Checkbox("Test Damage", &IsTestValue);
		ImGui::SliderFloat("DMG Radius", &isRadius, 1, 50, "%.0f");
        
        
        EndChild();
    }
    
    
    if (page2) {		
        SetCursorPos(ImVec2(167, 20));
        BeginChild(3, ImVec2(680, 565), true);
        
        ImGui::Checkbox("Auto Win", &IsAutoWin);
        ImGui::Checkbox("Battle End", &IsBattleEnd);
        
        EndChild();
    }
        
    if (page3) {
        SetCursorPos(ImVec2(167, 20));
        BeginChild(4, ImVec2(800, 600), true);
		        
        
        
        EndChild();
    }
    

if (page4) {
    SetCursorPos(ImVec2(167, 20));
    BeginChild(6, ImVec2(480, 466), true);
    
    Text("Game Ini Gak Make Esp");
    
    EndChild();
}


if (page5) {		
SetCursorPos(ImVec2(167, 20));
BeginChild(99, ImVec2(500, 499), true);

Text("Settings");
    Separator();
    Spacing();
            
    static int style_idx = -1;
    if (ImGui::Combo("Theme", &style_idx, "Dark\0Light\0Classic\0BlackGold\0DarkGrey\0DarkRed\0ClassicSteam\0AnotherDark\0DarkGreenBlue\0DarkReds\0DarksGrey\0AnotherDarks\0Costom\0")) {
        switch (style_idx) {
        case 0: ImGui::StyleColorsDark(); break;
        case 1: ImGui::StyleColorsLight(); break;
        case 2: ImGui::StyleColorsClassic(); break;
        case 3: ImGui::SetBlackGoldTheme(); break;
        case 4: ImGui::SetDarkGrayTheme(); break;
        case 5: ImGui::SetSoftDarkRedTheme(); break;
        case 6: ImGui::SetClassicSteamHalfLifeTheme(); break;
        case 7: ImGui::SetAnotherDarkThemeReally(); break;
        case 8: ImGui::SetDarkGreenBlueTheme(); break;
        case 9: ImGui::SetDarkRedTheme(); break;
        case 10: ImGui::SetCorporateGrayTheme(); break;
        case 11: ImGui::SetYetAnotherDarkTheme(); break;
        case 12: SetCustomStyle(); break;
        }
    }
    EndChild();
    }
  }
  PopStyleVar();
  End();
}

void DrawOpen() {           
    SetNextWindowSize(ImVec2(70, 70), ImGuiCond_Once);
    PushStyleVar(ImGuiStyleVar_Alpha, 0.80f);
    if (!Begin(OBFUSCATE("@imguuuui"), NULL, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoTitleBar)) {
        //End();
        return;
    }
    
    
    if (Button(OBFUSCATE(ICON_FA_BUG), ImVec2(GetContentRegionAvail().x, GetContentRegionAvail().y))) {
        openMenuuuu = !openMenuuuu;
        menuOpenTime = 0.0f;
    }
    //PopStyleVar();
   // End();
}

EGLBoolean (*old_eglSwapBuffers)(EGLDisplay dpy, EGLSurface surface);
EGLBoolean hook_eglSwapBuffers(EGLDisplay dpy, EGLSurface surface) {
    
    eglQuerySurface(dpy, surface, EGL_WIDTH, &glWidth);
    eglQuerySurface(dpy, surface, EGL_HEIGHT, &glHeight);
   
    if (!g_Initialized) {
      IMGUI_CHECKVERSION();
      ImGui::CreateContext();
      ImGuiIO& io = ImGui::GetIO();

      io.DisplaySize = ImVec2((float)glWidth, (float)glHeight);
      ImGui_ImplOpenGL3_Init("#version 100");  
      ImGui::GetStyle().ScaleAllSizes(2.0f);
      
      io.Fonts->ClearFonts();
    ImFontConfig font_cfg;
    
    font_cfg.GlyphRanges = io.Fonts->GetGlyphRangesCyrillic();
    
    io.ConfigWindowsMoveFromTitleBarOnly = true;
    io.IniFilename = NULL;
    
    font_cfg.SizePixels = 20.0f;
    io.Fonts->AddFontFromMemoryTTF(&VerdanaBold, sizeof Font, 20.0f,&font_cfg);
    
    ImFontConfig icon_font;
    icon_font.MergeMode = true; icon_font.PixelSnapH = true;
    static const ImWchar icon_ranges[] = {ICON_MIN_FA, ICON_MAX_FA, 0x0};
    io.Fonts->AddFontFromMemoryCompressedBase85TTF(FontAwesome6_compressed_data_base85, 20.0f, &icon_font, icon_ranges);

    ImFontConfig CustomFont;
    CustomFont.FontDataOwnedByAtlas = false;

    ImFontConfig icons_config;
    icons_config.MergeMode = true;
    icons_config.PixelSnapH = true;
    icons_config.OversampleH = 2;
    icons_config.OversampleV = 2;
    
    Theme_Cyberpunk();
      
      
      
      g_Initialized = true;
    }

    ImGuiIO &io = ImGui::GetIO();
   
    ImGui_ImplOpenGL3_NewFrame();
    ImGui::NewFrame();
    
    DrawOpen();
    Renderingsd();
    
    ImGui::EndFrame();
    ImGui::Render();
    glViewport(0, 0, (int)io.DisplaySize.x, (int)io.DisplaySize.y);
    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

    return old_eglSwapBuffers(dpy, surface);
}

void *hack_thread(void *) {
   
     do {
        sleep(1);
    } while (!isLibraryLoaded(libName));
      
    Il2CppAttach();
    sleep(5);
    initByps();
    
    
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Character"), OBFUSCATE("RoleAttributeProxy") , OBFUSCATE("get_max_hp")), (void *) RoleGetHealth, (void **) &_RoleGetHealth);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Character"), OBFUSCATE("RoleAttributeProxy") , OBFUSCATE("get_max_hp_changed")), (void *) RoleGetHealth, (void **) &_RoleGetHealth);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Character"), OBFUSCATE("RoleAttributeProxy") , OBFUSCATE("get_hp")), (void *) RoleGetHealth, (void **) &_RoleGetHealth);   
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Character"), OBFUSCATE("RoleAttributeProxy") , OBFUSCATE("get_c_level")), (void *) RoleGetHealth, (void **) &_RoleGetHealth);   
    
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Character"), OBFUSCATE("RoleAttributeProxy") , OBFUSCATE("get_Max_armor")), (void *) RoleArmor, (void **) &_RoleArmor);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Character"), OBFUSCATE("RoleAttributeProxy") , OBFUSCATE("get_MaxArmor")), (void *) RoleArmor, (void **) &_RoleArmor);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Character"), OBFUSCATE("RoleAttributeProxy") , OBFUSCATE("get_max_armor_changed")), (void *) RoleArmor, (void **) &_RoleArmor);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Character"), OBFUSCATE("RoleAttributeProxy") , OBFUSCATE("get_armor")), (void *) RoleArmor, (void **) &_RoleArmor);
    //Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Character"), OBFUSCATE("RoleAttributeProxy") , OBFUSCATE("get_defence")), (void *) RoleArmor, (void **) &_RoleArmor);
    //Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Character"), OBFUSCATE("RoleAttributeProxy") , OBFUSCATE("get_finalDefence")), (void *) RoleArmor, (void **) &_RoleArmor);
    
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Character"), OBFUSCATE("RoleAttributeProxy") , OBFUSCATE("get_MaxEnergy")), (void *) RoleEnergy, (void **) &_RoleEnergy);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Character"), OBFUSCATE("RoleAttributeProxy") , OBFUSCATE("get_energy")), (void *) RoleEnergy, (void **) &_RoleEnergy);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Character"), OBFUSCATE("RoleAttributeProxy") , OBFUSCATE("get_max_energy_changed")), (void *) RoleEnergy, (void **) &_RoleEnergy);
    
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Character"), OBFUSCATE("RoleAttributeProxy") , OBFUSCATE("get_skillCd")), (void *) RoleSkillCd, (void **) &_RoleSkillCd);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("PartEffect") , OBFUSCATE("Cooldown")), (void *) RoleSkillCd, (void **) &_RoleSkillCd);
    
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Character"), OBFUSCATE("RoleAttributeProxy") , OBFUSCATE("get_skill_strengthen")), (void *) RoleSkillReady, (void **) &_RoleSkillReady);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Character"), OBFUSCATE("RoleAttributeProxy") , OBFUSCATE("get_skill_ready")), (void *) RoleSkillReady, (void **) &_RoleSkillReady);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Character"), OBFUSCATE("RoleAttributeProxy") , OBFUSCATE("IsImmuneDizzy")), (void *) RoleSkillReady, (void **) &_RoleSkillReady);
    
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Character"), OBFUSCATE("RoleAttributeProxy") , OBFUSCATE("get_critical")), (void *) RoleGetCritical, (void **) &_RoleGetCritical);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Character"), OBFUSCATE("RoleAttributeProxy") , OBFUSCATE("get_atk")), (void *) RoleGetCritical, (void **) &_RoleGetCritical);
    
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Character"), OBFUSCATE("RoleAttributeProxy") , OBFUSCATE("get_speed")), (void *) RoleGetSpeed, (void **) &_RoleGetSpeed);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Character"), OBFUSCATE("RoleAttributeProxy") , OBFUSCATE("get_atk_speed_final")), (void *) RoleGetAtkSpeed, (void **) &_RoleGetAtkSpeed);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Character"), OBFUSCATE("RoleAttributeProxy") , OBFUSCATE("get_atk_speed")), (void *) RoleGetAtkSpeed, (void **) &_RoleGetAtkSpeed);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("RGScript.Character"), OBFUSCATE("RoleAttributeProxy") , OBFUSCATE("get_bulletSpeedRatio")), (void *) RoleGetAtkSpeed, (void **) &_RoleGetAtkSpeed);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGWeapon") , OBFUSCATE("get_holdSpeed")), (void *) RoleGetAtkSpeed, (void **) &_RoleGetAtkSpeed);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGWeapon") , OBFUSCATE("get_bullet_speed")), (void *) RoleGetAtkSpeed, (void **) &_RoleGetAtkSpeed);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGWeapon") , OBFUSCATE("get_WeaponFinalSpeed")), (void *) RoleGetAtkSpeed, (void **) &_RoleGetAtkSpeed);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGWeapon") , OBFUSCATE("get_FactorSpeedRate")), (void *) RoleGetAtkSpeed, (void **) &_RoleGetAtkSpeed);
    
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGController") , OBFUSCATE("get_ImmuneIce")), (void *) ImmuneAllDebuff, (void **) &_ImmuneAllDebuff);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGController") , OBFUSCATE("get_ImmuneFire")), (void *) ImmuneAllDebuff, (void **) &_ImmuneAllDebuff);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGController") , OBFUSCATE("get_ImmunSting")), (void *) ImmuneAllDebuff, (void **) &_ImmuneAllDebuff);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGController") , OBFUSCATE("get_ImmuneGas")), (void *) ImmuneAllDebuff, (void **) &_ImmuneAllDebuff);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGController") , OBFUSCATE("get_ImmunInversDir")), (void *) ImmuneAllDebuff, (void **) &_ImmuneAllDebuff);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGWeapon") , OBFUSCATE("get_AttackIgnoreEnergy")), (void *) ImmuneAllDebuff, (void **) &_ImmuneAllDebuff);
    
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGController") , OBFUSCATE("DamageToInt")), (void *) RoleGetCritical, (void **) &_RoleGetCritical);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGWeapon") , OBFUSCATE("get_atk")), (void *) RoleGetCritical, (void **) &_RoleGetCritical);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGWeapon") , OBFUSCATE("get_critical")), (void *) RoleGetCritical, (void **) &_RoleGetCritical);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGWeapon") , OBFUSCATE("get_damageFinal")), (void *) RoleGetCritical, (void **) &_RoleGetCritical);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGWeapon") , OBFUSCATE("get_damageFinal2")), (void *) RoleGetCritical, (void **) &_RoleGetCritical);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGWeapon") , OBFUSCATE("get_criticalFinal")), (void *) RoleGetCritical, (void **) &_RoleGetCritical);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGWeapon") , OBFUSCATE("get_criticalFinal2")), (void *) RoleGetCritical, (void **) &_RoleGetCritical);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGWeapon") , OBFUSCATE("GetCriticalFinal")), (void *) RoleGetCritical, (void **) &_RoleGetCritical);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGWeapon") , OBFUSCATE("GetCriticalFinal2")), (void *) RoleGetCritical, (void **) &_RoleGetCritical);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGEWeapon") , OBFUSCATE("get_finalAtk")), (void *) RoleGetCritical, (void **) &_RoleGetCritical);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("BezierPolygonTrigger") , OBFUSCATE("GetFinalDamage")), (void *) RoleGetCritical, (void **) &_RoleGetCritical);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("BulletGasBuffBase") , OBFUSCATE("get_extraDamage")), (void *) RoleGetCritical, (void **) &_RoleGetCritical);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("PartEffect") , OBFUSCATE("GetBurstDamage")), (void *) RoleGetCritical, (void **) &_RoleGetCritical);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("PartEffect") , OBFUSCATE("ErosionDamage")), (void *) RoleGetCritical, (void **) &_RoleGetCritical);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("PartEffect") , OBFUSCATE("GetDamage")), (void *) RoleGetCritical, (void **) &_RoleGetCritical);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("PartEffect") , OBFUSCATE("BurstDamage")), (void *) RoleGetCritical, (void **) &_RoleGetCritical);
    
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGWeapon") , OBFUSCATE("get_bulletSize")), (void *) BulletSize, (void **) &_BulletSize);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("WModBulletSizeLaser") , OBFUSCATE("get_FinalScale")), (void *) BulletSize, (void **) &_BulletSize);
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("WModBulletSizeMelee") , OBFUSCATE("get_FinalScale")), (void *) BulletSize, (void **) &_BulletSize);
    
    
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGGameProcess") , OBFUSCATE("Update")), (void *) UpdateMoney, (void **) &old_UpdateMoney);
    AddCoin = (void(*)(void *,int))(uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGGameProcess"), OBFUSCATE("AddCoin"), 2); 
    
    Tools::Hook((void *) (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGSaveManager") , OBFUSCATE("Update")), (void *) UpdateMoney1, (void **) &old_UpdateMoney1);
    AddGem = (void(*)(void *,int))(uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE(""), OBFUSCATE("RGSaveManager"), OBFUSCATE("AddGem"), 1); 
        /*
    get_grenadesCount = (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("DProject"), OBFUSCATE("DSystem") , OBFUSCATE("get_grenadesCount"), 0);
    get_aidKitCount = (uintptr_t)Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("DProject"), OBFUSCATE("DSystem") , OBFUSCATE("get_aidKitCount"), 0);
    jek.Grande = MemoryPatch::createWithHex(get_grenadesCount, OBFUSCATE("E0E184D2C0035FD6"));
    jek.AidKit = MemoryPatch::createWithHex(get_aidKitCount, OBFUSCATE("E0E184D2C0035FD6"));
    */
    
    UnlockSkinHero();
    auto p_eglSwapBuffers = (uintptr_t)dlsym(RTLD_NEXT, "eglSwapBuffers");
    DobbyHook((void *)p_eglSwapBuffers, (void *)hook_eglSwapBuffers, (void **)&old_eglSwapBuffers);  
    
   // Pointers::LoadPointers();
    bInitDone = true;
    
    return NULL;
}

#endif
