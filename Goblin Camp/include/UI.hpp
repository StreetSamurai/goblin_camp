/* Copyright 2010 Ilkka Halila
This file is part of Goblin Camp.

Goblin Camp is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Goblin Camp is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License 
along with Goblin Camp. If not, see <http://www.gnu.org/licenses/>.*/
#pragma once

#include <libtcod.hpp>
#include <vector>
#include <string>
#include <boost/function.hpp>
#include <boost/weak_ptr.hpp>

#include "UI/Menu.hpp"
#include "UI/SideBar.hpp"
#include "Entity.hpp"
#include "Game.hpp"

enum UIState {
	UINORMAL,
	UIPLACEMENT,
	UIABPLACEMENT,
	UIRECTPLACEMENT,
	UICOUNT
};

static TCOD_key_t NO_KEY = {
	TCODK_NONE, 0, false, false, false, false, false, false
};

class UI {
private:
	UI();
	static UI* instance;
	bool menuOpen;
	int menuX, menuY;
	TCOD_mouse_t mouseInput;
	TCOD_key_t key;
	Panel* currentMenu;
	UIState _state;
	boost::function<void(Coordinate)> callback;
	boost::function<void(Coordinate,Coordinate)> rectCallback;
	boost::function<bool(Coordinate,Coordinate)> placementCallback;
	Coordinate _blueprint;
	bool placeable;
	Coordinate a,b;
	std::vector<Panel*> menuHistory;
	std::list<boost::weak_ptr<Entity> > underCursor;
	bool drawCursor;
	bool lbuttonPressed, mbuttonPressed, rbuttonPressed;
	TCOD_mouse_t oldMouseInput;
	int keyHelpTextColor;
	bool draggingViewport;
	bool draggingPlacement;
	SideBar sideBar;
	bool textMode;
	std::string inputString;
	int inputStringLimit;
	int cursorChar;

	boost::weak_ptr<Entity> GetEntity(Coordinate);
	int DrawShortcutHelp(TCODConsole *console, int x, int y, std::string shortcut);
	void DrawTopBar(TCODConsole*);
	void HandleKeyboard();
	void HandleMouse();
public:
	static UI* Inst();
	void Update();
	void Draw(Coordinate, TCODConsole*);
	void blueprint(Coordinate);
	void state(UIState);
	static void ChangeMenu(Panel*);
	static void ChooseConstruct(ConstructionType, UIState);
	static void ChooseStockpile(ConstructionType);
	static void ChooseTreeFelling();
	static void ChoosePlantHarvest();
	static void ChooseOrderTargetCoordinate(boost::shared_ptr<Squad>);
	static void ChooseOrderTargetEntity(boost::shared_ptr<Squad>);
	static void ChooseDesignateTree();
	static void ChooseDismantle();
	static void ChooseUndesignate();
	static void ChooseDesignateBog();
	static void ChooseCreateNPC();
	static void ChooseCreateItem();
	static void ChooseDig();
	static void ChooseNaturify();
	static void ChooseChangeTerritory(bool add);
	static void ChooseGatherItems();
	static void ChooseNormalPlacement(boost::function<void(Coordinate)> callback,
		boost::function<bool(Coordinate, Coordinate)> placement, int cursor);
	static void ChooseRectPlacement(boost::function<void(Coordinate, Coordinate)> rectCallback,
		boost::function<bool(Coordinate, Coordinate)> placement, int cursor);
	void SetCallback(boost::function<void(Coordinate)>);
	void SetRectCallback(boost::function<void(Coordinate,Coordinate)>);
	void SetPlacementCallback(boost::function<bool(Coordinate,Coordinate)>);
	Panel* CurrentMenu();
	void CurrentMenu(Panel*);
	void AddToHistory(Panel*);
	int KeyHelpTextColor() const;
	void SetTextMode(bool, int=50);
	std::string InputString();
	void InputString(std::string);
	void HideMenu();
	void CloseMenu();
	void SetCursor(int);
	bool ShiftPressed();
	void HandleUnderCursor(Coordinate, std::list<boost::weak_ptr<Entity> >*);
	TCOD_key_t getKey();
};
