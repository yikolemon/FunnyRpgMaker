/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100912df */

undefined4 FUN_100912df(undefined2 param_1,int *param_2)

{
  char cVar1;
  undefined4 ***pppuVar2;
  uint uVar3;
  undefined1 local_70 [24];
  undefined4 **local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int local_48;
  uint local_44;
  undefined4 **local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_30;
  uint local_2c;
  uint local_28;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_70;
  local_18 = &LAB_100c38a0;
  local_1c = ExceptionList;
  local_48 = 0;
  local_58 = (undefined4 ***)0x0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  local_44 = 7;
  local_40 = (undefined4 ***)0x0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0;
  local_2c = 7;
  local_14 = 1;
  ExceptionList = &local_1c;
  FUN_100045e8(param_1);
  pppuVar2 = &local_40;
  if (7 < local_2c) {
    pppuVar2 = (undefined4 ***)local_40;
  }
  FUN_10091650(local_70,pppuVar2,(int)pppuVar2 + local_30 * 2);
  local_14 = 3;
  FUN_100128b2(local_70);
  local_14 = 0xffffffff;
  FUN_10001134();
  while (param_2 != (int *)0x0) {
    uVar3 = 0;
    local_24 = param_2;
    while (uVar3 < (uint)local_24[2]) {
      local_14 = 1;
      local_28 = uVar3;
      FUN_10004664(uVar3 * 2 + local_24[3],*local_24);
      pppuVar2 = &local_58;
      if (7 < local_44) {
        pppuVar2 = (undefined4 ***)local_58;
      }
      FUN_10091650(local_70,pppuVar2,(int)pppuVar2 + local_48 * 2);
      local_14 = 2;
      FUN_100128b2(local_70);
      local_14 = 0xffffffff;
      FUN_10001134();
      cVar1 = FUN_1008afc2(&local_40);
      param_2 = local_24;
      if (cVar1 != '\0') goto code_r0x1009142f;
      uVar3 = local_28 + *local_24;
    }
    param_2 = (int *)local_24[4];
  }
code_r0x1009142f:
  local_14 = 0xffffffff;
  FUN_10001134();
  FUN_10001134();
  ExceptionList = local_1c;
  return CONCAT31((int3)((uint)&local_58 >> 8),param_2 != (int *)0x0);
}

