/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d59ab */

void FUN_1400d59ab(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1400d30d4();
  if (*(longlong *)(lVar1 + 0x28) != 0) {
    return;
  }
  FUN_1400d50f6();
  return;
}

