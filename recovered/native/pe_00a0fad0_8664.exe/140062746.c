/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140062746 */

void Unwind_140062746(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(int *)(param_2 + 0x2c) != 0) {
    lVar1 = *(longlong *)(param_2 + 0x30);
    *(undefined ***)(lVar1 + 0x20) = std::ios_base::vftable;
    FUN_1400d3ba0(lVar1 + 0x20);
  }
  return;
}

