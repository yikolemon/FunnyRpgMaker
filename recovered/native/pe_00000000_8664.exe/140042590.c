/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140042590 */

void Unwind_140042590(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(int *)(param_2 + 0xa0) != 0) {
    lVar1 = *(longlong *)(param_2 + 0x30);
    *(undefined ***)(lVar1 + 0xa8) = std::ios_base::vftable;
    FUN_140188f70(lVar1 + 0xa8);
  }
  return;
}

