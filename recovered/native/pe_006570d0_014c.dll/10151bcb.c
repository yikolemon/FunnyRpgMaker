/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10151bcb */

void __fastcall FUN_10151bcb(int param_1,int param_2,int param_3)

{
  float10 fVar1;
  float local_14;
  short local_10 [2];
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_14;
  FUN_100f90d5(local_10,param_2 + *(int *)(param_1 + 0x14) + param_3,
               *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14));
  if (local_10[0] != 10) {
    fVar1 = (float10)FUN_10192fb8(local_10[0]);
    local_14 = (float)fVar1;
  }
  if (DAT_10388d00 != (local_c ^ (uint)&local_14)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

