/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002df9a */

undefined4 * __thiscall FUN_1002df9a(undefined4 *param_1,uint param_2,byte param_3)

{
  undefined4 *puVar1;
  undefined1 local_14 [4];
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)local_14;
  if ((uint)param_1[5] < param_2) {
    puVar1 = (undefined4 *)FUN_1002e1ce(param_2,local_14[0],(int)(char)param_3);
    if (DAT_10388d00 == (local_10 ^ (uint)local_14)) {
      return puVar1;
    }
  }
  else {
    puVar1 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar1 = (undefined4 *)*param_1;
    }
    param_1[4] = param_2;
    _memset(puVar1,(uint)param_3,param_2);
    *(undefined1 *)((int)puVar1 + param_2) = 0;
    if (DAT_10388d00 == (local_10 ^ (uint)local_14)) {
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

