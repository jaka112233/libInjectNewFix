#include "Font/Color.h"
#include "custom.hpp"

namespace ImHui {
    void Toggle(const char* str_id, bool* v) {
        ImVec2 p = ImGui::GetCursorScreenPos();
        ImDrawList* draw_list = ImGui::GetWindowDrawList();

        float height = ImGui::GetFrameHeight();
        float width = height * 1.55f;
        float radius = height * 0.50f;

        ImGui::InvisibleButton(str_id, ImVec2(width, height));
        if (ImGui::IsItemClicked())
            *v = !*v;

        float t = *v ? 1.0f : 0.0f;

        ImGuiContext& g = *GImGui;
        float ANIM_SPEED = 0.09f;
        if (g.LastActiveId == g.CurrentWindow->GetID(str_id)) {
            float t_anim = ImSaturate(g.LastActiveIdTimer / ANIM_SPEED);
            t = *v ? (t_anim) : (1.0f - t_anim);
        }

        ImU32 col_bg;
        if (ImGui::IsItemHovered())
            col_bg = ImGui::GetColorU32(ImLerp(ImVec4(0.78f, 0.78f, 0.78f, 1.0f), ImColor(140, 131, 214, 255), t));
        else
            col_bg = ImGui::GetColorU32(ImLerp(ImVec4(0.85f, 0.85f, 0.85f, 1.0f), ImColor(140, 131, 214, 255), t));

        draw_list->AddRectFilled(p, ImVec2(p.x + width, p.y + height), col_bg, height * 0.5f);
        draw_list->AddCircleFilled(ImVec2(p.x + radius + t * (width - radius * 2.0f), p.y + radius), radius - 1.5f, IM_COL32(255, 255, 255, 255));
		
		ImGui::SameLine();
		ImGui::Text(str_id);
    }
	
	void ColorPicker(const char* name, ImVec4 &color) {
    	ImGuiColorEditFlags misc_flags = ImGuiColorEditFlags_AlphaPreview;
    	static ImVec4 backup_color;
    	bool open_popup = ImGui::ColorButton((std::string(name) + std::string(("##3b"))).c_str(), color, misc_flags);
    	if (open_popup) {
        	ImGui::OpenPopup(name);
        	backup_color = color;
    	}
	
		ImGui::SetNextWindowSize(ImVec2(450, 450),ImGuiCond_FirstUseEver);
   		if (ImGui::BeginPopup(name)) {
    		ImGui::Spacing();

        	ImGui::Separator();
        	ImGui::ColorPicker4((name), (float *) &color,misc_flags | ImGuiColorEditFlags_NoSidePreview | ImGuiColorEditFlags_NoSmallPreview | ImGuiColorEditFlags_AlphaBar);
        	ImGui::SameLine();
        	ImGui::BeginGroup();
        	ImGui::Text(("%s"),std::string(("Current")).c_str());
        	ImGui::ColorButton(("##current"), color,ImGuiColorEditFlags_NoPicker | ImGuiColorEditFlags_AlphaPreviewHalf,ImVec2(60, 40));
        	ImGui::Text(("%s"),std::string(("Previous")).c_str());
        	if (ImGui::ColorButton(("##previous"), backup_color,ImGuiColorEditFlags_NoPicker | ImGuiColorEditFlags_AlphaPreviewHalf,ImVec2(60, 40)))color = backup_color;
        	ImGui::EndGroup();
        	ImGui::Spacing();
        	ImGui::EndPopup();
    	}
	}
	
	void MultiCombo(const char* label, bool* combos, const char* items[], int items_count) {
    	std::vector<std::string> vec;
    	static std::string preview;
    	for (int i = 0, j = 0; i < items_count; i++) {
        	if (combos[i]) {
            	vec.push_back(items[i]);
            	if (j > 4)
                	preview = vec.at(0) + (", ") + vec.at(1) + (", ") + vec.at(2) + (", ") + vec.at(3) + (", ") + vec.at(4) + (", ...");
            	else if (j)
                	preview += (", ") + (std::string)items[i];
            	else
                	preview = items[i];
            	j++;
        	}
    	}
    	if (ImGui::BeginCombo(label, preview.c_str())) {
        	for (int i = 0; i < items_count; i++) {
            	ImGui::Selectable(items[i], &combos[i], ImGuiSelectableFlags_DontClosePopups);
        	}
        	ImGui::EndCombo();
    	}
    	preview = ("None");
	}
}


void ImDrawRectRainbow(int x, int y, int width, int height, float flSpeed, float &flRainbow) {
	ImDrawList* windowDrawList = ImGui::GetWindowDrawList();
	ImDrawList* foregroundDrawList = ImGui::GetForegroundDrawList();
	ImDrawList* backgroundDrawList = ImGui::GetBackgroundDrawList();

    Color colColor(0, 0, 0);

    flRainbow += flSpeed;
    if (flRainbow > 1.f) flRainbow = 0.f;

    for (int i = 0; i < width; i++) {
		float hue = (1.f / (float)width) * i;
        hue -= flRainbow;
        if (hue < 0.f) hue += 1.f;

        Color colRainbow = colColor.FromHSB(hue, 1.f, 1.f);
        foregroundDrawList->AddRectFilled(ImVec2(x, y), ImVec2(width, height), colRainbow.GetU32());
    }
}
