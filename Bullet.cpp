 #include <SFML/Graphics.hpp>
#include<cmath>
using namespace sf;
class Bullet
{
private:
	Vector2f m_Position;
	RectangleShape m_BulletShape;
	bool m_InFlight = false;
	float m_BulletSpeed = 1000;
	float m_BulletDistanceX;
	float m_BulletDistanceY;
	float m_XTarget;
	float m_YTarget;
	float m_MaxX;
	float m_MinX;
	float m_MaxY;
	float m_MinY;
