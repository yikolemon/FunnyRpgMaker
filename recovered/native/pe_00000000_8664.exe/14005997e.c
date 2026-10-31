/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005997e */

void Unwind_14005997e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(int *)(param_2 + 0x2c) != 0) {
    lVar1 = *(longlong *)(param_2 + 0x30);
    *(undefined ***)(lVar1 + 0x20) = std::ios_base::vftable;
    FUN_140188f70(lVar1 + 0x20);
  }
  return;
}

