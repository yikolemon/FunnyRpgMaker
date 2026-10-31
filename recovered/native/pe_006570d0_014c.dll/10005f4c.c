/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10005f4c */

undefined4 * __thiscall FUN_10005f4c(undefined4 *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_28 [3];
  undefined1 local_25;
  undefined4 *local_24;
  int local_20;
  int local_1c;
  undefined1 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_28;
  uVar1 = param_1[4];
  if (uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_100047d6();
  }
  if (param_1[5] - uVar1 < param_4) {
    puVar2 = (undefined4 *)FUN_10006066(param_4,local_18,param_2,param_3,param_4);
    if (DAT_10388d00 == (local_14 ^ (uint)auStack_28)) {
      return puVar2;
    }
  }
  else {
    param_1[4] = uVar1 + param_4;
    puVar2 = (undefined4 *)*param_1;
    if ((uint)param_1[5] < 0x10) {
      puVar2 = param_1;
    }
    uVar4 = param_2 + (int)puVar2;
    local_1c = param_4 + param_3;
    local_25 = param_4 + param_3 <= uVar4;
    uVar3 = param_4;
    if (param_3 <= (int)puVar2 + uVar1 && !(bool)local_25) {
      uVar3 = 0;
      if (param_3 <= uVar4 && uVar4 - param_3 != 0) {
        uVar3 = uVar4 - param_3;
      }
    }
    local_24 = param_1;
    local_20 = uVar1 - param_2;
    FUN_1025b2d0(uVar4 + param_4,uVar4,(uVar1 - param_2) + 1);
    FUN_1025b2d0(uVar4,param_3,uVar3);
    FUN_1025b2d0(uVar4 + uVar3,local_1c + uVar3,param_4 - uVar3);
    if (DAT_10388d00 == (local_14 ^ (uint)auStack_28)) {
      return local_24;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

