#pragma Once
#include<SFML/Graphics.hpp>
class Player{
        const float START_SPEED=200;
        const float START_HEALTH=120;
        Vector2f m_Position;
        Sprite m_Sprite;
        Vector2f m_Resolution;
        intRect m_Texture;
        int m_Tile Size;
        bool m_UpPressed,m_leftPressed,m_DownPressed,
        int m_Health;
        int m_maxHealth;
        Time m_Lasthit;//when was the player last hit by the zombie//
        float m_Speed;//speed in pixel per seconds//
        public:
        Player();
        void spawnIntReact arena,Vector2f resolution,int tilesSize);
        void resetPlayerStats();
        bool hit(Time timeHit);
        Time getlastHitTime();
        float React getPosition();
        Sprite getSprite();
        void moveleft();
        void moveUp();
        void moveDown();
        void Stopleft();
        void StopRight();
        void StopUp();
                  void update(float elapsedTime,Vector2i mousePosition);
                  void upgrade Speed();
                  void upgrade Health();
                  void increaseHealthlevel(int amount);
};




