/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400130b4 */

void Unwind_1400130b4(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(undefined ***)(lVar1 + 0x18) = std::ios_base::vftable;
    FUN_140188f70(lVar1 + 0x18);
  }
  return;
}

