/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008eefa */

undefined4 * __thiscall
FUN_1008eefa(undefined4 *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint local_24;
  undefined4 *local_20;
  uint local_1c;
  undefined1 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_24;
  uVar3 = param_1[4];
  if (uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_100047d6();
  }
  if (uVar3 - param_2 < param_3) {
    param_3 = uVar3 - param_2;
  }
  if (param_5 == param_3) {
    puVar4 = param_1;
    if (7 < (uint)param_1[5]) {
      puVar4 = (undefined4 *)*param_1;
    }
    FUN_1025b2d0((int)puVar4 + param_2 * 2,param_4,param_5 * 2);
  }
  else {
    iVar6 = (uVar3 - (param_2 + param_3)) + 1;
    uVar5 = param_5 - param_3;
    if (param_5 < param_3) {
      puVar4 = param_1;
      if (7 < (uint)param_1[5]) {
        puVar4 = (undefined4 *)*param_1;
      }
      local_24 = (int)puVar4 + param_2 * 2;
      local_20 = param_1;
      FUN_1025b2d0(local_24,param_4,param_5 * 2);
      FUN_1025b2d0(local_24 + param_5 * 2,local_24 + param_3 * 2,iVar6 * 2);
      local_20[4] = (uVar3 + param_5) - param_3;
      param_1 = local_20;
    }
    else {
      local_24 = param_1[5];
      if (local_24 - uVar3 < uVar5) {
        puVar4 = (undefined4 *)FUN_1008f0d2(uVar5,local_18,param_2,param_3,param_4,param_5);
        if (DAT_10388d00 == (local_14 ^ (uint)&local_24)) {
          return puVar4;
        }
        goto LAB_1008f000;
      }
      param_1[4] = uVar5 + uVar3;
      puVar4 = param_1;
      if (7 < local_24) {
        puVar4 = (undefined4 *)*param_1;
      }
      uVar1 = (int)puVar4 + param_2 * 2;
      uVar2 = uVar1 + param_3 * 2;
      uVar7 = param_5;
      if (param_4 <= (int)puVar4 + uVar3 * 2 && uVar1 < param_4 + param_5 * 2) {
        uVar7 = 0;
        if (param_4 <= uVar2 && uVar2 - param_4 != 0) {
          uVar7 = (int)(uVar2 - param_4) >> 1;
        }
      }
      local_24 = uVar1;
      local_20 = param_1;
      local_1c = uVar5;
      FUN_1025b2d0(param_5 * 2 + uVar1,uVar2,iVar6 * 2);
      FUN_1025b2d0(uVar1,param_4,uVar7 * 2);
      FUN_1025b2d0(uVar7 * 2 + uVar1,param_4 + local_1c * 2 + uVar7 * 2,(param_5 - uVar7) * 2);
      param_1 = local_20;
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_24)) {
    return param_1;
  }
LAB_1008f000:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

