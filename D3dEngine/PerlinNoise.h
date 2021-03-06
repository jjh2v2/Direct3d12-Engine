#pragma once
/**
 * @brief Perlin noise creates 2D wave-like noise which is used for terrain generation and more
 * 
 */
class PerlinNoise
{
public:
	D3DENGINE_API PerlinNoise(double _persistence, double _frequency, double _amplitude, int _octaves, int _randomseed);
	D3DENGINE_API ~PerlinNoise();
	D3DENGINE_API double GetHeight(double x, double y) const;
private:
	double Total(double i, double j) const;
	double GetValue(double x, double y) const;
	double Interpolate(double x, double y, double a) const;
	double Noise(int x, int y) const;

	double persistence, frequency, amplitude; /// required noise variables
	int octaves, randomseed;/// required noise variables
};

