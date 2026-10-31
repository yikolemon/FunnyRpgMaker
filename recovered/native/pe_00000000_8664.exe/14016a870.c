/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016a870 */

void FUN_14016a870(longlong param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_140169fda();
  if (param_2 < uVar1) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)param_2 * 8) = param_3;
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 4 + (ulonglong)param_2 * 8) = 0;
    return;
  }
  FUN_1401691c8(*(undefined8 *)(param_1 + 8),0x82);
  return;
}

