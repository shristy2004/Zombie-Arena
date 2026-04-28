#include<Player.h>
Player :: Player(){
m_Speed=START_SPEED;
m_Health=START_HEALTH;
m_Texture.loadFromFile("player.png");
m_Sprite.setTexture.loadFromFile("player.png");
m_Sprite.setOrigin(25,25);
}
//sprawing//
void Player :: Spawn(InRect arena,Vector2f resolution,int titleSize)
m_Position.x=areena.width/2;
m_Position.y=areena.height/2;
m_Arena.left=arena.left;
m_Arena.width=arena.height;
m_TilesSize=tileSize;
m_Resolution.x=resolution.x;
m_Resolution.y=resolution.y;
void Player :: reset PlayerStats(){
m_Speed=START_SPEED;
m_Health=START_HEALTH;
m_maxHealth=START_HEALTH;
}}
Time Player :: getHitTime(){
  return m_lastHit;
bool Player :: hit(Time timeHit){
  if(timeHit.asMilliseconds()-m_lastHit.asmiliseconds()>200){
m_lastHit=timeHit;
m_Health=m_Health-10;
return true;
  }
else{
return false;
}}}
FloatRect Player :: getPosition(){
  return m_Sprite.getGlobalBounds();
}
Vector 2f Player:: getCenter(){
  Sprite int Player :: getCenter(){
    Sprite 
void Player :: getHealth(){
  m_LeftPressed=true;
}
void Player :: move Right(){
  m_RightPressed=true;
}
void Player :: move Up(){
  m_UpPressed=true;
}
void Player :: move Down(){
  m_DownPressed=true;
}
void Player :: update(float elapsedTime,Vector2i mousePosition){
  if(m_UpPressed){
    m_Position.y=m_Position.y-m_Speed *elapsedTime;
  }
void Player :: update(float elapsedTime,Vector2i mousePosition){
  if(m_UpPressed){
    m_Position.y=m_Position.y-m_Speed *elapsedTime;
  }







