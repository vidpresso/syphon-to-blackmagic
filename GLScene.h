/* -LICENSE-START-
 ** Copyright (c) 2010 Blackmagic Design
 **
 ** Permission is hereby granted, free of charge, to any person or organization
 ** obtaining a copy of the software and accompanying documentation covered by
 ** this license (the "Software") to use, reproduce, display, distribute,
 ** execute, and transmit the Software, and to prepare derivative works of the
 ** Software, and to permit third-parties to whom the Software is furnished to
 ** do so, all subject to the following:
 ** 
 ** The copyright notices in the Software and this entire statement, including
 ** the above license grant, this restriction and the following disclaimer,
 ** must be included in all copies of the Software, in whole or in part, and
 ** all derivative works of the Software, unless such copies or derivative
 ** works are solely in the form of machine-executable object code generated by
 ** a source language processor.
 ** 
 ** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 ** IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 ** FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
 ** SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
 ** FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
 ** ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 ** DEALINGS IN THE SOFTWARE.
 ** -LICENSE-END-
 */
//
//	GLScene.h
//  OpenGLOutput
//

#ifndef __GLScene_h__
#define __GLScene_h__


#include <Foundation/NSLock.h>
#include <OpenGL/OpenGL.h>
#include <OpenGL/glu.h>
#include <Syphon/Syphon.h>

class GLScene
{
private:
	GLfloat			flRtri;
	GLfloat			flRquad;
	NSLock*			pMutex;
	
public:

    SyphonClient *syClient;
	GLScene();
	~GLScene();
	
    void setupSyphon();
	void InitScene();
	void DrawScene(GLint x, GLint y, GLsizei width, GLsizei height);
	void DrawScene(GLint x, GLint y, GLsizei width, GLsizei height, CGLContextObj context);
};

#endif	// __GLScene_h__
