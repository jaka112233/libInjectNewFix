#include "imgui_internal.h"

namespace ImGui {
    void ToggleButton(const char* str_id, bool* v)
    {
        ImVec2 p = ImGui::GetCursorScreenPos();
        ImDrawList* draw_list = ImGui::GetWindowDrawList();

        float height = ImGui::GetFrameHeight();
        float width = height * 2.00f;
        float radius = height * 0.50f;

        ImGui::InvisibleButton(str_id, ImVec2(width, height));
        if (ImGui::IsItemClicked())
            *v = !*v;

        float t = *v ? 1.0f : 0.0f;

        ImGuiContext& g = *GImGui;
        float ANIM_SPEED = 0.08f;
        if (g.LastActiveId == g.CurrentWindow->GetID(str_id))// && g.LastActiveIdTimer < ANIM_SPEED)
        {
            float t_anim = ImSaturate(g.LastActiveIdTimer / ANIM_SPEED);
            t = *v ? (t_anim) : (1.0f - t_anim);
        }

        ImU32 col_bg;
        if (ImGui::IsItemHovered())
            col_bg = ImGui::GetColorU32(ImLerp(ImVec4(0.08f, 0.08f, 0.08f, 0.94f), ImVec4(113, 79, 253, 255), t));
        else
            col_bg = ImGui::GetColorU32(ImLerp(ImVec4(0.08f, 0.08f, 0.08f, 0.94f), ImVec4(113, 79, 253, 255), t));

        draw_list->AddRectFilled(p, ImVec2(p.x + width, p.y + height), col_bg, height * 0.5f);
        draw_list->AddCircleFilled(ImVec2(p.x + radius + t * (width - radius * 2.0f), p.y + radius), radius - 1.5f, IM_COL32(255, 255, 255, 255));
		
		ImGui::SameLine();
		
		ImGui::Text(str_id);
    }
}

namespace Rendering {

    void DrawText2(float fontSize, ImVec2 position, ImVec4 color, const char *text)
    {
        auto background = ImGui::GetBackgroundDrawList();
        if(background)
        {
            background->AddText(NULL, fontSize, position, ImColor(color.x,color.y,color.z,color.w), text);
        }
    }

}
