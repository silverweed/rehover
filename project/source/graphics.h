#ifndef _GRAPHICS_H 
#define _GRAPHICS_H

#include <gccore.h>

class Graphics {
public:
	/*! \brief Initialize the GX subsystem
	*/
	static void Init();

	/*! \brief Get video mode
	*  \return Currently preferred/used video mode
	*/
	static GXRModeObj* GetMode();

	/*! \brief Get current aspect ratio
	*  \return Aspect ratio as width/height
	*/
	static f32 GetAspectRatio();

	/*! \brief Finish rendering and swap buffers
	*/
	static void Done();

	/*! \brief Load 2D ortho matrix for sprite/font rendering 
	*/
	static void Set2DMode();

	/*! \brief Wrapper for changing viewport (adds scissors and 2d update)
	*/
	static void SetViewport(f32 xOrig, f32 yOrig, f32 wd, f32 ht, f32 nearZ, f32 farZ);

	/*! \brief Get frame rate depending on current TV mode
	*/
	static u32 GetFramerate();
private:
	Graphics(){}

	/* Frame time (1/60 or 1/50 depending on video mode) */
	static f32 frameTime;
};

#endif