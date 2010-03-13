/*This file is generated by luagen.*/
#include "lua_ftk.h"
#include "lua_ftk_callbacks.h"

static void tolua_reg_types (lua_State* L)
{
	tolua_usertype(L, "Ftk");
}

static int lua_ftk_default_font(lua_State* L)
{
	FtkFont* retv;
	retv = ftk_default_font();
	tolua_pushusertype(L, (FtkFont*)retv, "FtkFont");

	return 1;
}

static int lua_ftk_default_display(lua_State* L)
{
	FtkDisplay* retv;
	retv = ftk_default_display();
	tolua_pushusertype(L, (FtkDisplay*)retv, "FtkDisplay");

	return 1;
}

static int lua_ftk_default_main_loop(lua_State* L)
{
	FtkMainLoop* retv;
	retv = ftk_default_main_loop();
	tolua_pushusertype(L, (FtkMainLoop*)retv, "FtkMainLoop");

	return 1;
}

static int lua_ftk_default_log_level(lua_State* L)
{
	FtkLogLevel retv;
	retv = ftk_default_log_level();
	{FtkLogLevel* copy=malloc(sizeof(FtkLogLevel)); if(copy != NULL) memcpy(copy, &retv, sizeof(FtkLogLevel));tolua_pushusertype_and_takeownership(L, (FtkLogLevel*)copy, "FtkLogLevel");}

	return 1;
}

static int lua_ftk_default_wnd_manager(lua_State* L)
{
	FtkWndManager* retv;
	retv = ftk_default_wnd_manager();
	tolua_pushusertype(L, (FtkWndManager*)retv, "FtkWndManager");

	return 1;
}

static int lua_ftk_default_status_panel(lua_State* L)
{
	FtkWidget* retv;
	retv = ftk_default_status_panel();
	tolua_pushusertype(L, (FtkWidget*)retv, "FtkWidget");

	return 1;
}

static int lua_ftk_default_bitmap_factory(lua_State* L)
{
	FtkBitmapFactory* retv;
	retv = ftk_default_bitmap_factory();
	tolua_pushusertype(L, (FtkBitmapFactory*)retv, "FtkBitmapFactory");

	return 1;
}

static int lua_ftk_default_sources_manager(lua_State* L)
{
	FtkSourcesManager* retv;
	retv = ftk_default_sources_manager();
	tolua_pushusertype(L, (FtkSourcesManager*)retv, "FtkSourcesManager");

	return 1;
}

static int lua_ftk_shared_canvas(lua_State* L)
{
	FtkCanvas* retv;
	retv = ftk_shared_canvas();
	tolua_pushusertype(L, (FtkCanvas*)retv, "FtkCanvas");

	return 1;
}

static int lua_ftk_default_theme(lua_State* L)
{
	FtkTheme* retv;
	retv = ftk_default_theme();
	tolua_pushusertype(L, (FtkTheme*)retv, "FtkTheme");

	return 1;
}

static int lua_ftk_primary_source(lua_State* L)
{
	FtkSource* retv;
	retv = ftk_primary_source();
	tolua_pushusertype(L, (FtkSource*)retv, "FtkSource");

	return 1;
}

static int lua_ftk_default_allocator(lua_State* L)
{
	FtkAllocator* retv;
	retv = ftk_default_allocator();
	tolua_pushusertype(L, (FtkAllocator*)retv, "FtkAllocator");

	return 1;
}

static int lua_ftk_default_input_method_manager(lua_State* L)
{
	FtkInputMethodManager* retv;
	retv = ftk_default_input_method_manager();
	tolua_pushusertype(L, (FtkInputMethodManager*)retv, "FtkInputMethodManager");

	return 1;
}

static int lua_ftk_default_input_method_preeditor(lua_State* L)
{
	FtkImPreeditor* retv;
	retv = ftk_default_input_method_preeditor();
	tolua_pushusertype(L, (FtkImPreeditor*)retv, "FtkImPreeditor");

	return 1;
}

static int lua_ftk_set_font(lua_State* L)
{
	tolua_Error err = {0};
	FtkFont* font;
	int param_ok = tolua_isusertype(L, 1, "FtkFont", 0, &err);

	return_val_if_fail(param_ok, 0);

	font = tolua_tousertype(L, 1, 0);
	ftk_set_font(font);

	return 1;
}

static int lua_ftk_set_display(lua_State* L)
{
	tolua_Error err = {0};
	FtkDisplay* display;
	int param_ok = tolua_isusertype(L, 1, "FtkDisplay", 0, &err);

	return_val_if_fail(param_ok, 0);

	display = tolua_tousertype(L, 1, 0);
	ftk_set_display(display);

	return 1;
}

static int lua_ftk_set_main_loop(lua_State* L)
{
	tolua_Error err = {0};
	FtkMainLoop* main_loop;
	int param_ok = tolua_isusertype(L, 1, "FtkMainLoop", 0, &err);

	return_val_if_fail(param_ok, 0);

	main_loop = tolua_tousertype(L, 1, 0);
	ftk_set_main_loop(main_loop);

	return 1;
}

static int lua_ftk_set_log_level(lua_State* L)
{
	tolua_Error err = {0};
	FtkLogLevel level;
	int param_ok = tolua_isusertype(L, 1, "FtkLogLevel", 0, &err);

	return_val_if_fail(param_ok, 0);

	level = *(FtkLogLevel*)tolua_tousertype(L, 1, 0);
	ftk_set_log_level(level);

	return 1;
}

static int lua_ftk_set_status_panel(lua_State* L)
{
	tolua_Error err = {0};
	FtkWidget* status_panel;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	status_panel = tolua_tousertype(L, 1, 0);
	ftk_set_status_panel(status_panel);

	return 1;
}

static int lua_ftk_set_wnd_manager(lua_State* L)
{
	tolua_Error err = {0};
	FtkWndManager* wnd_manager;
	int param_ok = tolua_isusertype(L, 1, "FtkWndManager", 0, &err);

	return_val_if_fail(param_ok, 0);

	wnd_manager = tolua_tousertype(L, 1, 0);
	ftk_set_wnd_manager(wnd_manager);

	return 1;
}

static int lua_ftk_set_bitmap_factory(lua_State* L)
{
	tolua_Error err = {0};
	FtkBitmapFactory* bitmap_factory;
	int param_ok = tolua_isusertype(L, 1, "FtkBitmapFactory", 0, &err);

	return_val_if_fail(param_ok, 0);

	bitmap_factory = tolua_tousertype(L, 1, 0);
	ftk_set_bitmap_factory(bitmap_factory);

	return 1;
}

static int lua_ftk_set_sources_manager(lua_State* L)
{
	tolua_Error err = {0};
	FtkSourcesManager* sources_manager;
	int param_ok = tolua_isusertype(L, 1, "FtkSourcesManager", 0, &err);

	return_val_if_fail(param_ok, 0);

	sources_manager = tolua_tousertype(L, 1, 0);
	ftk_set_sources_manager(sources_manager);

	return 1;
}

static int lua_ftk_set_shared_canvas(lua_State* L)
{
	tolua_Error err = {0};
	FtkCanvas* canvas;
	int param_ok = tolua_isusertype(L, 1, "FtkCanvas", 0, &err);

	return_val_if_fail(param_ok, 0);

	canvas = tolua_tousertype(L, 1, 0);
	ftk_set_shared_canvas(canvas);

	return 1;
}

static int lua_ftk_set_theme(lua_State* L)
{
	tolua_Error err = {0};
	FtkTheme* theme;
	int param_ok = tolua_isusertype(L, 1, "FtkTheme", 0, &err);

	return_val_if_fail(param_ok, 0);

	theme = tolua_tousertype(L, 1, 0);
	ftk_set_theme(theme);

	return 1;
}

static int lua_ftk_set_primary_source(lua_State* L)
{
	tolua_Error err = {0};
	FtkSource* source;
	int param_ok = tolua_isusertype(L, 1, "FtkSource", 0, &err);

	return_val_if_fail(param_ok, 0);

	source = tolua_tousertype(L, 1, 0);
	ftk_set_primary_source(source);

	return 1;
}

static int lua_ftk_set_allocator(lua_State* L)
{
	tolua_Error err = {0};
	FtkAllocator* allocator;
	int param_ok = tolua_isusertype(L, 1, "FtkAllocator", 0, &err);

	return_val_if_fail(param_ok, 0);

	allocator = tolua_tousertype(L, 1, 0);
	ftk_set_allocator(allocator);

	return 1;
}

static int lua_ftk_set_input_method_manager(lua_State* L)
{
	tolua_Error err = {0};
	FtkInputMethodManager* input_manager_manager;
	int param_ok = tolua_isusertype(L, 1, "FtkInputMethodManager", 0, &err);

	return_val_if_fail(param_ok, 0);

	input_manager_manager = tolua_tousertype(L, 1, 0);
	ftk_set_input_method_manager(input_manager_manager);

	return 1;
}

static int lua_ftk_set_input_method_preeditor(lua_State* L)
{
	tolua_Error err = {0};
	FtkImPreeditor* input_method_preeditor;
	int param_ok = tolua_isusertype(L, 1, "FtkImPreeditor", 0, &err);

	return_val_if_fail(param_ok, 0);

	input_method_preeditor = tolua_tousertype(L, 1, 0);
	ftk_set_input_method_preeditor(input_method_preeditor);

	return 1;
}

static int lua_ftk_init(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	int argc;
	char** argv;
	int param_ok = tolua_isnumber(L, 1, 0, &err) && tolua_istable(L, 2, 0, &err);

	return_val_if_fail(param_ok, 0);

	argc = tolua_tonumber(L, 1, 0);
	argv = tolua_tostrings(L, 2, 0);
	retv = ftk_init(argc, argv);
	tolua_pushnumber(L, (lua_Number)retv);
	free(argv);

	return 1;
}

static int lua_ftk_run(lua_State* L)
{
	Ret retv;
	retv = ftk_run();
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_quit(lua_State* L)
{
	ftk_quit();

	return 1;
}

static int lua_ftk_tips(lua_State* L)
{
	tolua_Error err = {0};
	int retv;
	char* text;
	int param_ok = tolua_isstring(L, 1, 0, &err);

	return_val_if_fail(param_ok, 0);

	text = (char*)tolua_tostring(L, 1, 0);
	retv = ftk_tips(text);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_warning(lua_State* L)
{
	tolua_Error err = {0};
	int retv;
	char* title;
	char* text;
	char** buttons;
	int param_ok = tolua_isstring(L, 1, 0, &err) && tolua_isstring(L, 2, 0, &err) && tolua_istable(L, 3, 0, &err);

	return_val_if_fail(param_ok, 0);

	title = (char*)tolua_tostring(L, 1, 0);
	text = (char*)tolua_tostring(L, 2, 0);
	buttons = tolua_tostrings(L, 3, 0);
	retv = ftk_warning(title, text, buttons);
	tolua_pushnumber(L, (lua_Number)retv);
	free(buttons);

	return 1;
}

static int lua_ftk_question(lua_State* L)
{
	tolua_Error err = {0};
	int retv;
	char* title;
	char* text;
	char** buttons;
	int param_ok = tolua_isstring(L, 1, 0, &err) && tolua_isstring(L, 2, 0, &err) && tolua_istable(L, 3, 0, &err);

	return_val_if_fail(param_ok, 0);

	title = (char*)tolua_tostring(L, 1, 0);
	text = (char*)tolua_tostring(L, 2, 0);
	buttons = tolua_tostrings(L, 3, 0);
	retv = ftk_question(title, text, buttons);
	tolua_pushnumber(L, (lua_Number)retv);
	free(buttons);

	return 1;
}

static int lua_ftk_infomation(lua_State* L)
{
	tolua_Error err = {0};
	int retv;
	char* title;
	char* text;
	char** buttons;
	int param_ok = tolua_isstring(L, 1, 0, &err) && tolua_isstring(L, 2, 0, &err) && tolua_istable(L, 3, 0, &err);

	return_val_if_fail(param_ok, 0);

	title = (char*)tolua_tostring(L, 1, 0);
	text = (char*)tolua_tostring(L, 2, 0);
	buttons = tolua_tostrings(L, 3, 0);
	retv = ftk_infomation(title, text, buttons);
	tolua_pushnumber(L, (lua_Number)retv);
	free(buttons);

	return 1;
}

int tolua_ftk_init(lua_State* L)
{
	tolua_open(L);
	tolua_reg_types(L);
	tolua_module(L, NULL, 0);
	tolua_beginmodule(L, NULL);
	tolua_cclass(L,"Ftk", "Ftk", "", NULL);
	tolua_beginmodule(L, "Ftk");
	tolua_function(L, "DefaultFont", lua_ftk_default_font);
	tolua_function(L, "DefaultDisplay", lua_ftk_default_display);
	tolua_function(L, "DefaultMainLoop", lua_ftk_default_main_loop);
	tolua_function(L, "DefaultLogLevel", lua_ftk_default_log_level);
	tolua_function(L, "DefaultWndManager", lua_ftk_default_wnd_manager);
	tolua_function(L, "DefaultStatusPanel", lua_ftk_default_status_panel);
	tolua_function(L, "DefaultBitmapFactory", lua_ftk_default_bitmap_factory);
	tolua_function(L, "DefaultSourcesManager", lua_ftk_default_sources_manager);
	tolua_function(L, "SharedCanvas", lua_ftk_shared_canvas);
	tolua_function(L, "DefaultTheme", lua_ftk_default_theme);
	tolua_function(L, "PrimarySource", lua_ftk_primary_source);
	tolua_function(L, "DefaultAllocator", lua_ftk_default_allocator);
	tolua_function(L, "DefaultInputMethodManager", lua_ftk_default_input_method_manager);
	tolua_function(L, "DefaultInputMethodPreeditor", lua_ftk_default_input_method_preeditor);
	tolua_function(L, "SetFont", lua_ftk_set_font);
	tolua_function(L, "SetDisplay", lua_ftk_set_display);
	tolua_function(L, "SetMainLoop", lua_ftk_set_main_loop);
	tolua_function(L, "SetLogLevel", lua_ftk_set_log_level);
	tolua_function(L, "SetStatusPanel", lua_ftk_set_status_panel);
	tolua_function(L, "SetWndManager", lua_ftk_set_wnd_manager);
	tolua_function(L, "SetBitmapFactory", lua_ftk_set_bitmap_factory);
	tolua_function(L, "SetSourcesManager", lua_ftk_set_sources_manager);
	tolua_function(L, "SetSharedCanvas", lua_ftk_set_shared_canvas);
	tolua_function(L, "SetTheme", lua_ftk_set_theme);
	tolua_function(L, "SetPrimarySource", lua_ftk_set_primary_source);
	tolua_function(L, "SetAllocator", lua_ftk_set_allocator);
	tolua_function(L, "SetInputMethodManager", lua_ftk_set_input_method_manager);
	tolua_function(L, "SetInputMethodPreeditor", lua_ftk_set_input_method_preeditor);
	tolua_function(L, "Init", lua_ftk_init);
	tolua_function(L, "Run", lua_ftk_run);
	tolua_function(L, "Quit", lua_ftk_quit);
	tolua_function(L, "Tips", lua_ftk_tips);
	tolua_function(L, "Warning", lua_ftk_warning);
	tolua_function(L, "Question", lua_ftk_question);
	tolua_function(L, "Infomation", lua_ftk_infomation);
	tolua_endmodule(L);
	tolua_endmodule(L);


	return 1;
}