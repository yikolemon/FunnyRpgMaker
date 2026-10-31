/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140080ad1 */

undefined8 FUN_140080ad1(void)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(DAT_140f2a910 + 0x21f8);
  if (((iVar1 != 0) && (iVar1 == *(int *)(DAT_140f2a910 + 0x1fe0))) &&
     ((lVar2 = *(longlong *)(DAT_140f2a910 + 0x1608), iVar1 != *(int *)(lVar2 + 0x10) ||
      (*(char *)(lVar2 + 0x10b) == '\0')))) {
    return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  return 0;
}

