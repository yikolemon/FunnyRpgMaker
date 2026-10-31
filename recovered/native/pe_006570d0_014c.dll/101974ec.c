/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101974ec */

void __thiscall FUN_101974ec(undefined4 *param_1,undefined4 param_2)

{
  float10 fVar1;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  param_1[6] = param_2;
  FUN_101c8c85(&local_60,param_2);
  *param_1 = local_60;
  param_1[1] = uStack_5c;
  param_1[2] = uStack_58;
  param_1[3] = uStack_54;
  fVar1 = (float10)FUN_101c8e39(param_2);
  *(double *)(param_1 + 4) = (double)fVar1;
  if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

