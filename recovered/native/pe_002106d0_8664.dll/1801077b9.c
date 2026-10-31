/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801077b9 */

undefined8 FUN_1801077b9(void)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(DAT_180419160 + 0x21f8);
  if (((iVar1 != 0) && (iVar1 == *(int *)(DAT_180419160 + 0x1fe0))) &&
     ((lVar2 = *(longlong *)(DAT_180419160 + 0x1608), iVar1 != *(int *)(lVar2 + 0x10) ||
      (*(char *)(lVar2 + 0x10b) == '\0')))) {
    return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  return 0;
}

