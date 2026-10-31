/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d5966 */

void FUN_100d5966(void)

{
  undefined4 uVar1;
  undefined1 local_64 [24];
  undefined1 local_4c [24];
  undefined1 local_34 [20];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_64;
  local_14 = 0xffffffff;
  local_18 = &LAB_100ddc20;
  local_1c = ExceptionList;
  uVar1 = 0;
  if (DAT_10388e05 != '\0') {
    uVar1 = DAT_10388e08;
  }
  ExceptionList = &local_1c;
  FUN_10017d5d(local_4c,uVar1);
  local_14 = 0;
  FUN_10018956("MOVE_SPEED_ADD",1);
  local_14 = 1;
  FUN_1002088c(local_64,
               "\n(function () {\n    var player = window.$gamePlayer;\n    if (player) {\n\t\tplayer.__realMoveSpeed__add__ = MOVE_SPEED_ADD;\n\t\tif (!player.__realMoveSpeed__xxox_orig__) {\n\t\t\tplayer.__realMoveSpeed__xxox_orig__ = player.realMoveSpeed;\n\t\t\tplayer.realMoveSpeed = function () {\n\t\t\t\tvar level = player.__realMoveSpeed__xxox_orig__.apply(this, arguments) + player.__realMoveSpeed__add__;\n\t\t\t\tif (level < 0) level = 0;\n\t\t\t\treturn level;\n\t\t\t};\n\t\t}\n\t}\n})();\n"
               ,local_34,local_4c,0);
  local_14 = 2;
  FUN_10014730(local_64);
  local_14 = 0xffffffff;
  FUN_10001fee();
  FUN_10018a12();
  FUN_10001fee();
  ExceptionList = local_1c;
  return;
}

