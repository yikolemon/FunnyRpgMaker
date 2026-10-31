/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10157bd3 */

void FUN_10157bd3(void)

{
  int *piVar1;
  undefined4 ***pppuVar2;
  int iVar3;
  int local_d0;
  int local_cc;
  undefined4 **local_c8 [4];
  undefined4 local_b8;
  uint local_b4;
  char *local_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [24];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_50 [16];
  undefined1 local_40 [24];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_d0;
  local_1c = &LAB_1015f530;
  local_20 = ExceptionList;
  local_80 = 0;
  local_90 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_7c = 0xf;
  local_18 = 0;
  ExceptionList = &local_20;
  piVar1 = (int *)FUN_100b3d86(1);
  local_cc = piVar1[1];
  iVar3 = *piVar1;
  while (local_18 = 0, iVar3 != local_cc) {
    local_d0 = iVar3;
    FUN_100523ca(iVar3 + 0x18);
    local_18 = 1;
    FUN_100141c8(local_a8,(undefined4)DAT_1028f540,DAT_1028f540._4_4_,0,0);
    local_18 = 2;
    FUN_100523ca(local_d0);
    local_18 = 3;
    FUN_100141c8(local_40,(undefined4)DAT_1028f540,DAT_1028f540._4_4_,0,0);
    local_18 = 4;
    local_b0 = "game_automaton.insert({}, {});\n";
    uStack_ac = 0x1f;
    FUN_1006b520(local_c8,0x1f1034d913,local_40,local_a8);
    local_18 = 5;
    pppuVar2 = local_c8;
    if (0xf < local_b4) {
      pppuVar2 = (undefined4 ***)local_c8[0];
    }
    FUN_1000347e(pppuVar2,local_b8);
    local_18 = 0xffffffff;
    FUN_10001fee();
    FUN_10001fee();
    FUN_10013efc();
    FUN_10001fee();
    FUN_10013efc();
    iVar3 = local_d0 + 0x30;
  }
  FUN_10018956("FUNNY_GAME_TRANSLATION_REGEX",1);
  local_18 = 6;
  FUN_1002088c(local_c8,&DAT_103517e2,local_a8,&local_90,0);
  local_18 = 7;
  FUN_100145e4(local_50,local_c8);
  local_18 = 0xffffffff;
  FUN_10013efc();
  FUN_10001fee();
  FUN_10018a12();
  FUN_10001fee();
  ExceptionList = local_20;
  return;
}

