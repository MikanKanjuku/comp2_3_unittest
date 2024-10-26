// StaticLib.c : スタティック ライブラリ用の関数を定義します。
//

#include "framework.h"// プロジェクトで共有の項目を載せる

#include "../include/my_lib.h"

// num個の整数の和を得る
int sum(int num, int* array)
{
	int sum = 0;

	for (int i = 0; i < num; i++)
	{
		sum += array[i];
	}

	return sum;
}

// num個の整数の平均を得る
int average(int num, int* array)
{
	int sum = 0;
	for (int i = 0; i < num; i++) {
		sum += array[i];  // 配列の各要素を合計
	}

	return sum / num;  // 合計をnumで割って平均を返す
}
