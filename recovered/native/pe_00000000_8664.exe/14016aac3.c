/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016aac3 */

void FUN_14016aac3(longlong param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_140169fda();
  if (uVar1 < param_2) {
    FUN_1401691c8(*(undefined8 *)(param_1 + 8),0xa1);
    return;
  }
  *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + (ulonglong)param_2 * -8;
  return;
}

