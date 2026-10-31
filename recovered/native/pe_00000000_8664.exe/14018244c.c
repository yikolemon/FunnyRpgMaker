/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018244c */

undefined8 FUN_14018244c(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 3) {
    FUN_140182af7();
  }
  else if (iVar1 == 2) {
    FUN_1401826b6();
  }
  else {
    if (iVar1 != 1) {
      return 6;
    }
    FUN_1401824b8();
  }
  return 0;
}

