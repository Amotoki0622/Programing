#include "Item.h"
#include "DxLib.h"

Item::Item(int type) : type(type), image(), speed(0.0f), location(0.0f), box_size(0.0f)
{

}

Item::~Item()
{

}


//初期化
void Item::Initialize()
{
	//出現パターン
	float random_x = (float)(GetRand(4) * 105 + 40);
	//生成位置設定
	location = Vector2D(random_x, -50.0f);
	//当たり判定
	box_size = Vector2D(31.0f, 60.0f);
	//速さ設定
	speed = (float)(this->type * 2);
}


//更新
void Item::Update(float speed)
{
	//位置座標に移動量を加算
	location += Vector2D(0.0f, this->speed);
}


//描画
void Item::Draw() const
{
	//アイテム画像
	DrawRotaGraphF(location.x, location.y, 1.0, 0.0, image, TRUE);
}

//仕上げ
void Item::Finalize()
{

}

//タイプ取得
int Item::GetType() const
{
	return type;
}

//位置情報の取得
Vector2D Item::GetLocation() const
{
	return location;
}

//当たり判定の大きさ
Vector2D Item::GetBoxSize() const
{
	return box_size;
}