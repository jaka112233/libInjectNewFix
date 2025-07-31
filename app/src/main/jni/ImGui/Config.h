struct menu_cfg {
    bool Watermark = true;
	bool ShowMouse;
	int posW = 10;
	int posH = 10;
} menu;


struct water_fix {
	int endW;
	int endH;
} waterfix;


const char* WaterDraw[] = {"Date", "Ping", "Framerate"};
static bool WaterCombo[IM_ARRAYSIZE(WaterDraw)];

const char* HitBoxes[] = {"Head", "Body"};
static bool HitBoxesCombo[IM_ARRAYSIZE(HitBoxes)];
