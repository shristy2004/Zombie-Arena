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
public:
	Bullet();
	void stop();
	bool isInFlight();
	void shoot(float startX, float startY,float xTarget, float yTarget);
	FloatRect getPosition();
	RectangleShape getShape();
	void update(float elapsedTime);

};
Bullet::Bullet()   // Bullet b;
{
	m_BulletShape.setSize(sf::Vector2f(20, 20));
}
