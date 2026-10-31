/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d9c50 */

void FUN_100d9c50(void)

{
  undefined1 local_64 [24];
  undefined1 local_4c [20];
  undefined1 local_38 [16];
  int local_28;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_64;
  local_14 = 0xffffffff;
  local_18 = &LAB_100ddc90;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_100de91e(local_38);
  local_14 = 0;
  if (local_28 != 0) {
    FUN_10018956("GAME_FONT_FAMILY",1);
    local_14 = 1;
    FUN_1002088c(local_64,
                 "\n(function () {\n    window.__funny_game_font_family_name__ = \"GAME_FONT_FAMILY\";\n    // mv\n    var game_base = window.Window_Base.prototype;\n    if (game_base && game_base.standardFontFace) {\n\t\tif (!game_base.__standardFontFace__xxox_orig__) {\n\t\t\tgame_base.__standardFontFace__xxox_orig__ = game_base.standardFontFace;\n\t\t\tgame_base.standardFontFace = function () {\n                return window.__funny_game_font_family_name__ + \", \" + game_base.__standardFontFace__xxox_orig__.apply(this, arguments);\n\t\t\t};\n\t\t}\n\t}\n    // mz\n    var game_system = window.Game_System.prototype;\n    if (game_system && game_system.mainFontFace) {\n\t\tif (!game_system.__mainFontFace__xxox_orig__) {\n\t\t\tgame_system.__mainFontFace__xxox_orig__ = game_system.mainFontFace;\n\t\t\tgame_system.mainFontFace = function () {\n                return window.__funny_game_font_family_name__ + \", \" + game_system.__mainFontFace__xxox_orig__.apply(this, arguments);\n\t\t\t};\n\t\t}\n\t}\n})();\n"
                 ,local_4c,local_38,0);
    local_14 = 2;
    FUN_10014730(local_64);
    local_14 = 0xffffffff;
    FUN_10001fee();
    FUN_10018a12();
  }
  local_14 = 0xffffffff;
  FUN_10001fee();
  ExceptionList = local_1c;
  return;
}

