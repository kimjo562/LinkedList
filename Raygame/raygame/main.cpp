/*******************************************************************************************
*
*   raylib [core] example - basic window
*
*   This example has been created using raylib 1.0 (www.raylib.com)
*   raylib is licensed under an unmodified zlib/libpng license (View raylib.h for details)
*
*   Copyright (c) 2013-2016 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include "raylib.h"
#include "UnorderedList.h"

int main()
{
	// Initialization
	//--------------------------------------------------------------------------------------
	int screenWidth = 1278;
	int screenHeight = 960;

	InitWindow(screenWidth, screenHeight, "Zatamari");

	SetTargetFPS(60);
	//--------------------------------------------------------------------------------------

	UnorderedList<int> UList;
	UList.insertFirst(10);
	UList.insertFirst(13);
	UList.insertFirst(21);

	UList.insertLast(40);
	UList.insertLast(56);
	UList.insertLast(68);

	UList.search(2);

	// Main game loop
	while (!WindowShouldClose())    // Detect window close button or ESC key
	{
		// Update
		//----------------------------------------------------------------------------------
		// TODO: Update your variables here
		//----------------------------------------------------------------------------------

		// Draw
		//----------------------------------------------------------------------------------
		BeginDrawing();

		ClearBackground(BLACK);

		DrawText("Skadi, Wheres Kaldr?", 440, 480, 35, WHITE);
		DrawText("          (-.-)", 440, 580, 35, WHITE);

		EndDrawing();
		//----------------------------------------------------------------------------------
	}

	// De-Initialization
	//--------------------------------------------------------------------------------------   
	CloseWindow();        // Close window and OpenGL context
	//--------------------------------------------------------------------------------------

	return 0;
}