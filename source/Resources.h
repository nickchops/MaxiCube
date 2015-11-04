#if !defined(_RESOURCES_H)
#define _RESOURCES_H

#include "IwResManager.h"
#include "IwModel.h"
#include "IwGxFont.h"

class Resources
{
public:
	void            Init();
	void			Release();

    CIwModel*       Board;      // Game board model
    CIwModel*       Cube;       // Game cube model

	CIwGxFont*      Font;       // Font used to render text
};

extern Resources*   g_pResources;

#endif  // _RESOURCES_H
