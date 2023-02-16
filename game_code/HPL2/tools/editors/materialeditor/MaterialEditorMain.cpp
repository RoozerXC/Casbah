/*
 * Copyright © 2009-2020 Frictional Games
 * 
 * This file is part of Amnesia: The Dark Descent.
 * 
 * Amnesia: The Dark Descent is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version. 

 * Amnesia: The Dark Descent is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with Amnesia: The Dark Descent.  If not, see <https://www.gnu.org/licenses/>.
 */

#include "MaterialEditor.h"
#include "BuildID_MaterialEditor.h"

#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#endif

//////////////////////////////////////////////////////////////////////////
// APP ENTRY POINT
//////////////////////////////////////////////////////////////////////////


int hplMain(const tString& asCommandLine)
{
	//To allow drag and drop:
	#ifdef _WIN32
		// BUzer: don't change current directory if the game resources can already be found from here.
		// This allows debugging from IDE when the .exe file is not in the game's directory.
		if (!cPlatform::FileExists(L"core\\models\\core_box.dae"))
		{
			TCHAR buffer[MAX_PATH];
			HMODULE module = GetModuleHandle(NULL);
			GetModuleFileName(module, buffer, MAX_PATH);
			tString sDir = cString::GetFilePath(buffer);
			SetCurrentDirectory(sDir.c_str());
		}
	#endif
	cMaterialEditor* pEditor = hplNew(cMaterialEditor,(cString::ReplaceCharTo(asCommandLine,"\"","")));

	cEngine* pEngine = pEditor->Init(NULL, "MaterialEditor", GetBuildID_MaterialEditor(), false);
	pEngine->Run();

	hplDelete(pEditor);
	DestroyHPLEngine(pEngine);
	cMemoryManager::LogResults();

	return 0;
}

