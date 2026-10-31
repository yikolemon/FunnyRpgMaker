/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180196471 */

void FUN_180196471(longlong param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x10) + 0x6c);
  if ((fVar1 == DAT_1802ac570) && (!NAN(fVar1) && !NAN(DAT_1802ac570))) {
    return;
  }
  FUN_18019648b();
  return;
}

