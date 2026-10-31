/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d9f57 */

void FUN_1800d9f57(void)

{
  undefined4 uVar1;
  undefined1 local_78 [40];
  undefined1 local_50 [32];
  undefined1 local_30 [32];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  uVar1 = 0;
  if (DAT_1804027c1 != '\0') {
    uVar1 = DAT_1804027c4;
  }
  FUN_18001799f(local_30,uVar1);
  FUN_180018514(local_78,"MOVE_SPEED_ADD",1);
  FUN_180020bbc(local_50,
                "\n(function () {\n    var player = window.$gamePlayer;\n    if (player) {\n\t\tplayer.__realMoveSpeed__add__ = MOVE_SPEED_ADD;\n\t\tif (!player.__realMoveSpeed__xxox_orig__) {\n\t\t\tplayer.__realMoveSpeed__xxox_orig__ = player.realMoveSpeed;\n\t\t\tplayer.realMoveSpeed = function () {\n\t\t\t\tvar level = player.__realMoveSpeed__xxox_orig__.apply(this, arguments) + player.__realMoveSpeed__add__;\n\t\t\t\tif (level < 0) level = 0;\n\t\t\t\treturn level;\n\t\t\t};\n\t\t}\n\t}\n})();\n"
                ,local_78,local_30,0);
  FUN_180013ef1(local_50);
  FUN_180001ef2(local_50);
  FUN_1800185bc(local_78);
  FUN_180001ef2(local_30);
  return;
}

