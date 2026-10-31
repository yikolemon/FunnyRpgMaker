/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10044a66 */

undefined4 * __thiscall FUN_10044a66(undefined4 *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *local_20;
  uint local_1c;
  undefined1 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_20;
  uVar2 = param_1[4];
  if (uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_100047d6();
  }
  if (param_1[5] - uVar2 < param_4) {
    puVar3 = (undefined4 *)FUN_10044b8e(param_4,local_18,param_2,param_3,param_4);
    if (DAT_10388d00 == (local_14 ^ (uint)&local_20)) {
      return puVar3;
    }
  }
  else {
    param_1[4] = uVar2 + param_4;
    puVar3 = param_1;
    if (7 < (uint)param_1[5]) {
      puVar3 = (undefined4 *)*param_1;
    }
    uVar1 = (int)puVar3 + param_2 * 2;
    local_1c = param_3 + param_4 * 2;
    uVar4 = param_4;
    if (param_3 <= (int)puVar3 + uVar2 * 2 && uVar1 < local_1c) {
      uVar4 = 0;
      if (param_3 <= uVar1 && uVar1 - param_3 != 0) {
        uVar4 = (int)(uVar1 - param_3) >> 1;
      }
    }
    local_20 = param_1;
    FUN_1025b2d0(param_4 * 2 + uVar1,uVar1,(uVar2 - param_2) * 2 + 2);
    FUN_1025b2d0(uVar1,param_3,uVar4 * 2);
    FUN_1025b2d0(uVar4 * 2 + uVar1,local_1c + uVar4 * 2,(param_4 - uVar4) * 2);
    if (DAT_10388d00 == (local_14 ^ (uint)&local_20)) {
      return local_20;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

