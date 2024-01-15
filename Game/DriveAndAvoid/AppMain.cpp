#include "DxLib.h"
#include "Scene/SceneManager.h"

//メイン関数(プログラムはここから始まります)
int WINAPI WinMain(_In_ HINSTANCE hinstance, _In_opt_ HINSTANCE hPrevInstance, _In_
	LPSTR lpCmdLine, _In_ int nShowCmd)
{
	//例外処理(異常が発生したら、catch文に飛びます)
	try
	{
		//シーンマネージャー機能の生成
		

		//シーンマネージャー機能の初期化処理


		//シーンマネージャー機能の更新処理


		//シーンマネージャー機能の終了時処理

	}
	catch (const char* err_log)
	{
		//エラー発生時内容の出力
		OutputDebugString(err_log);


		//エラー終了を通知
	}

	//正常終了を通知
	return 0;
}