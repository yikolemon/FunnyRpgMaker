/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009790c */

void FUN_14009790c(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(DAT_140f2a910 + 0x2178);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(DAT_140f2a910 + 0x2180);
    lVar3 = 0;
    do {
      FUN_14009778f(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return;
}

