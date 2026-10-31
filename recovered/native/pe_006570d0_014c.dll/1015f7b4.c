/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1015f7b4 */

void FUN_1015f7b4(undefined4 param_1,undefined4 param_2,undefined4 *param_3,uint param_4,
                 undefined4 param_5,undefined4 param_6)

{
  uint *puVar1;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_1c;
  local_1c = param_3;
  local_18 = param_5;
  local_14 = param_6;
  puVar1 = param_3 + 5;
  if (0xf < *puVar1) {
    param_3 = (undefined4 *)*param_3;
  }
  FUN_10141b2a(param_1,param_2,param_3,*puVar1 + 1,param_4 | 0x400000,&LAB_1015f6f3,&local_1c);
  if (DAT_10388d00 == (local_10 ^ (uint)&local_1c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

