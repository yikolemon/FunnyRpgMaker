/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140055cdc */

void Unwind_140055cdc(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(int *)(param_2 + 0x34) != 0) {
    lVar1 = *(longlong *)(param_2 + 0x38);
    *(undefined ***)(lVar1 + 0x98) = std::ios_base::vftable;
    FUN_140188f70(lVar1 + 0x98);
  }
  return;
}

