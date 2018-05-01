#pragma once
#include "Mesh.h"
#include "AnimationManager.h"

class D3DENGINE_API SkeletalMeshComponent : public Mesh
{
public:
	SkeletalMeshComponent(std::string filename);
	~SkeletalMeshComponent();

	virtual int InitRootSignatureParameters(int indexOffset) override;
	virtual void Init() override;
	virtual void Update() override;
	virtual void Render() override;
	virtual void OnKeyDown(UINT key) override;
	virtual void OnKeyUp(UINT key) override;
	virtual void OnMouseMoved(float x, float y) override;
	virtual void OnDeviceRemoved() override;
	virtual void CreateWindowSizeDependentResources() override;
	virtual void CreateDeviceDependentResoures() override;
	void SetAnimInUse(UINT index);
protected:
	std::unique_ptr<AnimationManager> m_animationManager;
	std::unique_ptr<ConstantBufferManager<XMFLOAT4X4>> m_animationConstantBufferManager;
	static UINT m_animRootSigIndex;
	std::vector<UINT> m_animDescHeapIndicies;
	UINT m_frame;
	UINT m_anim;
	std::vector<UINT> m_perAnimBufferOffset;
	UINT m_animHeapIndex;
private:
	static bool m_isRootSignatureInitialised;
};
