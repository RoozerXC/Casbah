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

#ifndef LUX_PROP_EMOTION_STONE_H
#define LUX_PROP_EMOTION_STONE_H

//----------------------------------------------

#include "LuxProp.h"

//----------------------------------------------

class cLuxProp_EmotionStone_SaveData : public iLuxProp_SaveData
{
	kSerializableClassInit(cLuxProp_EmotionStone_SaveData)
public:
	tString msDescCat;
	tString msDescEntry;

	tString msTextCat;
	tString msTextEntry;

	tString msSound;
};

//----------------------------------------------


class cLuxProp_EmotionStone : public iLuxProp
{
typedef iLuxProp super_class;
friend class cLuxPropLoader_EmotionStone;
public:	
	cLuxProp_EmotionStone(const tString &asName, int alID, cLuxMap *apMap);
	virtual ~cLuxProp_EmotionStone();

	//////////////////////
	//General
	bool CanInteract(iPhysicsBody *apBody);
	bool OnInteract(iPhysicsBody *apBody, const cVector3f &avPos);
	
	void OnSetupAfterLoad(cWorld *apWorld);

	void OnResetProperties();

	void UpdatePropSpecific(float afTimeStep);
	
	void BeforePropDestruction();

	eLuxFocusCrosshair GetFocusCrosshair(iPhysicsBody *apBody, const cVector3f &avPos);
	tWString GetFocusText();

	//////////////////////
	//Properties
	
	//////////////////////
	//Connection callbacks
	void OnConnectionStateChange(iLuxEntity *apEntity, int alState);


	//////////////////////
	//Save data stuff
	iLuxEntity_SaveData* CreateSaveData();
	void SaveToSaveData(iLuxEntity_SaveData* apSaveData);
	void LoadFromSaveData(iLuxEntity_SaveData* apSaveData);
	void SetupSaveData(iLuxEntity_SaveData *apSaveData);

private:
	//////////////////////
	// Data
		
	//////////////////////
	// Variables
	tString msDescCat;
	tString msDescEntry;

	tString msTextCat;
	tString msTextEntry;

	tString msSound;
};

//----------------------------------------------

class cLuxPropLoader_EmotionStone : public iLuxPropLoader
{
public:
	cLuxPropLoader_EmotionStone(const tString& asName);
	virtual ~cLuxPropLoader_EmotionStone(){}

	iLuxProp *CreateProp(const tString& asName, int alID, cLuxMap *apMap);
	void LoadVariables(iLuxProp *apProp, cXmlElement *apRootElem);
	void LoadInstanceVariables(iLuxProp *apProp, cResourceVarsObject *apInstanceVars);

private:
};

//----------------------------------------------


#endif // LUX_PROP_EMOTION_STONE_H
