/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003c5a3 */

void Unwind_14003c5a3(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x1e0);
  while (param_2 + 0x128 != lVar1) {
    lVar1 = lVar1 + -0x20;
    FUN_140001e90(lVar1);
  }
  return;
}

