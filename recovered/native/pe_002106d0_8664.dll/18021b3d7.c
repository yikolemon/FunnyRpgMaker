/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021b3d7 */

void FUN_18021b3d7(longlong param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_18021a8ee();
  if (uVar1 < param_2) {
    FUN_180219adc(*(undefined8 *)(param_1 + 8),0xa1);
    return;
  }
  *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + (ulonglong)param_2 * -8;
  return;
}

