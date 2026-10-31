/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140089e8c */

undefined8 FUN_140089e8c(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(DAT_140f2a910 + 0x167c);
  if (((iVar1 == 0) || (iVar1 != *(int *)(DAT_140f2a910 + 0x1fe0))) ||
     (uVar2 = 1, *(int *)(DAT_140f2a910 + 0x16a8) == iVar1)) {
    uVar2 = 0;
  }
  return uVar2;
}

