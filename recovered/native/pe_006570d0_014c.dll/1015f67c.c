/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1015f67c */

void FUN_1015f67c(undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint *puVar1;
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_18;
  local_18 = param_2;
  local_14 = param_4;
  local_10 = param_5;
  puVar1 = param_2 + 5;
  if (0xf < *puVar1) {
    param_2 = (undefined4 *)*param_2;
  }
  FUN_10141729(param_1,param_2,*puVar1 + 1,param_3 | 0x400000,&LAB_1015f6f3,&local_18);
  if (DAT_10388d00 == (local_c ^ (uint)&local_18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

