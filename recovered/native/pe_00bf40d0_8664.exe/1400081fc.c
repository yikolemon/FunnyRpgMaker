/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400081fc */

void Unwind_1400081fc(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(int *)(param_2 + 0x2c) != 0) {
    lVar1 = *(longlong *)(param_2 + 0x30);
    *(undefined ***)(lVar1 + 0x20) = std::ios_base::vftable;
    FUN_1400895d0(lVar1 + 0x20);
  }
  return;
}

