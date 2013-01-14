/* 
 * File:   Enemy.h
 * Author: Adrian
 *
 * Created on 23. Dezember 2012, 18:30
 */

#include <string>
#include <list>
#include "Sprite.hpp"

#ifndef ENEMY_H
#define	ENEMY_H

class Enemy 
{
    public:
        Enemy();
        Enemy(const Enemy& orig);
        virtual ~Enemy();
        
		void	Init();
		void	Quit();
		void	Reset();
		void	Render();
		void	Update();

        float	getHP();
        float	getCurrentHP();

		bool	getHit();
		void	setHit(bool hit);

		list<int>	getHitboxPositions();

        void	setCurrentHP(float newhp);

    private:
		void				ProcessMoving();
		void				CheckPosition();
		void				KI();

		list<int>			hitboxPositions;

		float				xPos;
		float				yPos;
		float				animPhase;

		float				currentHP;
		bool				isHit;

		CSprite				*SpriteEnemy;

		struct				hitbox
		{
			int width;
			int height;
		}					enemy;

		static const float	hp;
		static const long	exp_earn;

};

#endif	/* ENEMY_H */

