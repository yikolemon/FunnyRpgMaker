/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10004664 */

undefined4 * __thiscall FUN_10004664(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined1 local_14 [4];
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)local_14;
  if ((uint)param_1[5] < param_3) {
    puVar1 = (undefined4 *)FUN_100046f8(param_3,local_14[0],param_2);
    if (DAT_10388d00 == (local_10 ^ (uint)local_14)) {
      return puVar1;
    }
  }
  else {
    puVar1 = param_1;
    if (7 < (uint)param_1[5]) {
      puVar1 = (undefined4 *)*param_1;
    }
    param_1[4] = param_3;
    FUN_1025b2d0(puVar1,param_2,param_3 * 2);
    *(undefined2 *)((int)puVar1 + param_3 * 2) = 0;
    if (DAT_10388d00 == (local_10 ^ (uint)local_14)) {
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

