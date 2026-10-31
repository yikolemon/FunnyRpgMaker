/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017c4e8 */

undefined4 * __fastcall FUN_1017c4e8(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 ****ppppuVar3;
  undefined1 auStack_90 [4];
  undefined4 *local_8c;
  undefined4 ***local_88;
  undefined4 local_84;
  undefined4 local_78;
  uint local_74;
  char *local_70;
  undefined4 *local_6c;
  char *local_68;
  undefined4 local_64;
  undefined4 local_60;
  char *local_5c;
  char *local_58;
  undefined1 local_40 [24];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_90;
  local_1c = &LAB_101803d0;
  local_20 = ExceptionList;
  local_6c = param_1 + 2;
  ExceptionList = &local_20;
  param_1[6] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0xf;
  local_18 = 0;
  local_8c = param_1;
  uVar2 = FUN_10013d2e("code");
  local_88 = (undefined4 ***)0x0;
  FUN_100561d8(uVar2,&local_88);
  *local_8c = local_88;
  uVar2 = FUN_10013d2e("indent");
  local_88 = (undefined4 ***)0x0;
  FUN_100561d8(uVar2,&local_88);
  local_8c[1] = local_88;
  local_88 = (undefined4 ***)0x10332d4e;
  local_84 = 10;
  FUN_100d8f98(&local_88);
  local_68 = local_58;
  while (local_70 = local_5c, local_5c != local_68) {
    local_18 = 2;
    if (local_8c[6] == 0) {
      FUN_100180a6(&DAT_1033b941,1);
    }
    else {
      FUN_1000347e(&DAT_1034bc80,2);
    }
    if (*local_70 == '\x03') {
      local_64 = 0;
      local_60 = 0;
      FUN_100dc4d4(local_70,&local_64);
      FUN_101575f2(local_40,&local_64);
      local_18 = 3;
      FUN_100dc9d0(local_40);
      local_18 = 4;
      FUN_100141c8(&local_88,(undefined4)DAT_1028f540,DAT_1028f540._4_4_,0,0);
      local_18 = 5;
      ppppuVar3 = &local_88;
      if (0xf < local_74) {
        ppppuVar3 = (undefined4 ****)local_88;
      }
      FUN_1000347e(ppppuVar3,local_78);
      local_18 = 0xffffffff;
      FUN_10001fee();
      FUN_10013efc();
      FUN_10001fee();
    }
    else {
      FUN_100141c8(&local_88,(undefined4)DAT_1028f540,DAT_1028f540._4_4_,0,0);
      local_18 = 6;
      ppppuVar3 = &local_88;
      if (0xf < local_74) {
        ppppuVar3 = (undefined4 ****)local_88;
      }
      FUN_1000347e(ppppuVar3,local_78);
      local_18 = 0xffffffff;
      FUN_10001fee();
    }
    local_5c = local_70 + 0x10;
  }
  local_18 = 0xffffffff;
  FUN_100171ce();
  local_84 = local_8c[6];
  local_88 = (undefined4 ***)(local_8c + 2);
  if (0xf < (uint)local_8c[7]) {
    local_88 = (undefined4 ***)local_8c[2];
  }
  cVar1 = FUN_10018750(&DAT_1033b941);
  if (cVar1 != '\0') {
    local_18 = 0;
    FUN_1000347e(&DAT_1033b90e,1);
  }
  ExceptionList = local_20;
  return local_8c;
}

