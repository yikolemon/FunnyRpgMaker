/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ddb6e */

void FUN_1800ddb6e(void)

{
  undefined1 local_78 [40];
  undefined1 local_50 [32];
  undefined1 local_30 [16];
  longlong local_20;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_1800e2380(local_30);
  if (local_20 != 0) {
    FUN_180018514(local_78,"GAME_FONT_FAMILY",1);
    FUN_180020bbc(local_50,
                  "\n(function () {\n    window.__funny_game_font_family_name__ = \"GAME_FONT_FAMILY\";\n    // mv\n    var game_base = window.Window_Base.prototype;\n    if (game_base && game_base.standardFontFace) {\n\t\tif (!game_base.__standardFontFace__xxox_orig__) {\n\t\t\tgame_base.__standardFontFace__xxox_orig__ = game_base.standardFontFace;\n\t\t\tgame_base.standardFontFace = function () {\n                return window.__funny_game_font_family_name__ + \", \" + game_base.__standardFontFace__xxox_orig__.apply(this, arguments);\n\t\t\t};\n\t\t}\n\t}\n    // mz\n    var game_system = window.Game_System.prototype;\n    if (game_system && game_system.mainFontFace) {\n\t\tif (!game_system.__mainFontFace__xxox_orig__) {\n\t\t\tgame_system.__mainFontFace__xxox_orig__ = game_system.mainFontFace;\n\t\t\tgame_system.mainFontFace = function () {\n                return window.__funny_game_font_family_name__ + \", \" + game_system.__mainFontFace__xxox_orig__.apply(this, arguments);\n\t\t\t};\n\t\t}\n\t}\n})();\n"
                  ,local_78,local_30,0);
    FUN_180013ef1(local_50);
    FUN_180001ef2(local_50);
    FUN_1800185bc(local_78);
  }
  FUN_180001ef2(local_30);
  return;
}

