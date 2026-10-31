/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10117c1f */

void FUN_10117c1f(void)

{
  int iVar1;
  
  iVar1 = DAT_1039d74c;
  if ((*(byte *)(DAT_1039d74c + 0x2254) & 1) == 0) {
    thunk_FUN_1010ad44();
  }
  if (*(int *)(iVar1 + 0x2270) == -1) {
    FUN_10106638();
  }
  *(undefined1 *)(iVar1 + 0x2251) = 0;
  return;
}

