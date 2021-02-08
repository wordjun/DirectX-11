#include "Engine.h"
#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "DirectXTK.lib")

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_opt_ LPWSTR lpCmdLine,
	_In_ int nCmdShow) {

	/*HRESULT hr = S_OK;
	if (SUCCEEDED(hr)) {
		MessageBoxA(NULL, "SUCCESS", "SUCCESS", NULL);
	}
	if (FAILED(hr)) {
		ErrorLogger::Log(hr, "FAILURE");
	}*/
	//ErrorLogger::Log(E_INVALIDARG, "Test Message");


	//RenderWindow ex.
	//RenderWindow rw;

	Engine engine;
	engine.Initialize(hInstance, "Title", "MyWindowClass", 800, 600);
	while (engine.ProcessMessages()) {
		engine.Update();
	}
	return 0;
}