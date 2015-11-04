
#include "IwGraphics.h"

#include "Resources.h"

Resources*   g_pResources = 0;

void Resources::Init()
{
    // Load the board
    IwGetResManager()->LoadGroup("Board.group");

    // Get a pointer to the named group
    CIwResGroup* pGroup = IwGetResManager()->GetGroupNamed("board");

    // Get and store pointer to the model resource
    Board = (CIwModel*)pGroup->GetResNamed("board", IW_GRAPHICS_RESTYPE_MODEL); 

    // Load the cube
    IwGetResManager()->LoadGroup("Cube.group");
    pGroup = IwGetResManager()->GetGroupNamed("cube");
    Cube = (CIwModel*)pGroup->GetResNamed("cube", IW_GRAPHICS_RESTYPE_MODEL);

	// Create font used to render UI
	Font = IwGxFontCreateTTFont("impact.ttf", 20);
}

void Resources::Release()
{
	IwGxFontDestroyTTFont(Font);
}
