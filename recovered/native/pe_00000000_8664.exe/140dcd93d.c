/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140dcd93d */

int FUN_140dcd93d(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_140dd44ce();
  iVar2 = 0x51adf4;
  if (iVar1 != 0) {
    iVar2 = iVar1 + 0x10;
  }
  return iVar2;
}

