/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100aac00 */

undefined4 * __thiscall
FUN_100aac00(undefined4 *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint local_24;
  undefined4 *local_20;
  uint local_1c;
  undefined1 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_24;
  uVar1 = param_1[4];
  if (uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_100047d6();
  }
  if (uVar1 - param_2 < param_3) {
    param_3 = uVar1 - param_2;
  }
  if (param_5 == param_3) {
    puVar3 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar3 = (undefined4 *)*param_1;
    }
    FUN_1025b2d0((int)puVar3 + param_2,param_4,param_5);
  }
  else {
    iVar6 = ((uVar1 - param_2) - param_3) + 1;
    uVar2 = param_5 - param_3;
    if (param_5 < param_3) {
      puVar3 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar3 = (undefined4 *)*param_1;
      }
      iVar5 = (int)puVar3 + param_2;
      local_20 = param_1;
      FUN_1025b2d0(iVar5,param_4,param_5);
      FUN_1025b2d0(iVar5 + param_5,iVar5 + param_3,iVar6);
      local_20[4] = (uVar1 + param_5) - param_3;
      param_1 = local_20;
    }
    else {
      if (param_1[5] - uVar1 < uVar2) {
        puVar3 = (undefined4 *)FUN_100aadb2(uVar2,local_18,param_2,param_3,param_4,param_5);
        if (DAT_10388d00 == (local_14 ^ (uint)&local_24)) {
          return puVar3;
        }
        goto LAB_100aad0b;
      }
      param_1[4] = uVar2 + uVar1;
      puVar3 = (undefined4 *)*param_1;
      if ((uint)param_1[5] < 0x10) {
        puVar3 = param_1;
      }
      puVar4 = (undefined4 *)(param_2 + (int)puVar3);
      param_3 = param_3 + (int)puVar4;
      local_24 = param_5;
      if (param_4 <= (int)puVar3 + uVar1 && puVar4 < (undefined4 *)(param_4 + param_5)) {
        local_24 = 0;
        if (param_4 <= param_3 && param_3 - param_4 != 0) {
          local_24 = param_3 - param_4;
        }
      }
      local_20 = puVar4;
      local_1c = uVar2;
      FUN_1025b2d0((int)puVar4 + param_5,param_3,iVar6);
      uVar1 = local_24;
      FUN_1025b2d0(puVar4,param_4,local_24);
      FUN_1025b2d0((int)puVar4 + uVar1,local_1c + param_4 + uVar1,param_5 - uVar1);
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_24)) {
    return param_1;
  }
LAB_100aad0b:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

