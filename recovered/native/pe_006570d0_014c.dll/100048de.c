/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100048de */

undefined4 * __thiscall FUN_100048de(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_18 [4];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)local_18;
  iVar1 = param_1[4];
  if ((uint)(param_1[5] - iVar1) < param_3) {
    puVar2 = (undefined4 *)FUN_10004984(param_3,local_18[0],param_2,param_3);
    if (DAT_10388d00 == (local_14 ^ (uint)local_18)) {
      return puVar2;
    }
  }
  else {
    param_1[4] = iVar1 + param_3;
    puVar2 = param_1;
    if (7 < (uint)param_1[5]) {
      puVar2 = (undefined4 *)*param_1;
    }
    FUN_1025b2d0((int)puVar2 + iVar1 * 2,param_2,param_3 * 2);
    *(undefined2 *)((int)puVar2 + (iVar1 + param_3) * 2) = 0;
    if (DAT_10388d00 == (local_14 ^ (uint)local_18)) {
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

