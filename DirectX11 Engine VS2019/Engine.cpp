#include "Engine.h"

bool Engine::Initialize(HINSTANCE hInstance, std::string window_title, std::string window_class, int width, int height) {
	//keyboard.EnableAutoRepeatChars();
	return this->render_window.Initialize(this, hInstance, window_title, window_class, width, height);
}

bool Engine::ProcessMessages() {
	return this->render_window.ProcessMessages();
}

void Engine::Update()
{
	while (!keyboard.KeyBufferIsEmpty()) {
		KeyboardEvent kbe = keyboard.ReadKey();
		unsigned char keycode = kbe.GetKeyCode();
		std::string outmsg = "";
		if (kbe.isPress()) {
			outmsg += "Key press: ";
		}
		if (kbe.isRelease()) {
			outmsg += "Key release: ";
		}



		outmsg += keycode;
		outmsg += '\n';
		OutputDebugStringA(outmsg.c_str());
	}
}
