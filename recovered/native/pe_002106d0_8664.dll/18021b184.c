/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021b184 */

void FUN_18021b184(longlong param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_18021a8ee();
  if (param_2 < uVar1) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)param_2 * 8) = param_3;
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 4 + (ulonglong)param_2 * 8) = 0;
    return;
  }
  FUN_180219adc(*(undefined8 *)(param_1 + 8),0x82);
  return;
}

