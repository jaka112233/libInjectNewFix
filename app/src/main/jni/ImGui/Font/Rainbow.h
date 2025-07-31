namespace Rainbow
{
float g_progression;

void Update()
{
	g_progression += 0.01f;
	if (g_progression >= 1.0f)
		g_progression = 0.0f;
}

ImVec4 GetColor()
{
	float r = (1.0f + (2.0f * 3.14159f * (g_progression + 0.0f))) / 2.0f;
	float g = (1.0f + (2.0f * 3.14159f * (g_progression + 0.33f))) / 2.0f;
	float b = (1.0f + (2.0f * 3.14159f * (g_progression + 0.67f))) / 2.0f;
	return ImVec4(r, g, b, 1.0f);
}
}
