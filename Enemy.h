#pragma once
class Enemy
{
public:
	//�R���X�g���N�^,�f�X�g���N�^
	Enemy();
	~Enemy();
	//�s��
	void Approach();
	void Shoot();
	void GetAway();
	//�X�V
	void Update();
	//�`��
	void Draw();
private:
	//�֐��|�C���^�e�[�u��
	static void(Enemy::* pFuncTable[])();
	//�s���t�F�[�Y
	int phase_;
};

