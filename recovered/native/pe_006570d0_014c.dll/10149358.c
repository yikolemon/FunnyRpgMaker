/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10149358 */

void FUN_10149358(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_1039d74c;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar2 = *(int *)(iVar2 + 0x14cc);
  FUN_10115158(0);
  piVar1 = (int *)(iVar2 + 0x1cc);
  *piVar1 = *piVar1 + 1;
  FUN_101131fa();
  return;
}

