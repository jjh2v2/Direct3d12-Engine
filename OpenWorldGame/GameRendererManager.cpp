#include "GameRendererManager.h"
#include "TestRenderer.h"



GameRendererManager::GameRendererManager() : RendererManager()
{
	auto testRenderer = std::make_shared<TestRenderer>();
	AddRenderer(testRenderer);
}


GameRendererManager::~GameRendererManager()
{
}

int GameRendererManager::InitRootSignatureParameters(int indexOffset)
{
	return RendererManager::InitRootSignatureParameters(indexOffset);
}

void GameRendererManager::Init()
{
	RendererManager::Init();
}

void GameRendererManager::Update()
{
	RendererManager::Update();
}

void GameRendererManager::Render()
{
	RendererManager::Render();
}

void GameRendererManager::OnKeyDown(UINT key)
{
	RendererManager::OnKeyDown(key);
}

void GameRendererManager::OnKeyUp(UINT key)
{
	RendererManager::OnKeyUp(key);
}

void GameRendererManager::OnMouseMoved(float x, float y)
{
	RendererManager::OnMouseMoved(x, y);
}

void GameRendererManager::OnDeviceRemoved()
{
	RendererManager::OnDeviceRemoved();
}

void GameRendererManager::CreateWindowSizeDependentResources()
{
	RendererManager::CreateWindowSizeDependentResources();
}

void GameRendererManager::CreateDeviceDependentResources()
{
	RendererManager::CreateDeviceDependentResources();
}
