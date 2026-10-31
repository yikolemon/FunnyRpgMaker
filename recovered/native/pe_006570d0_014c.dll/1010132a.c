/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010132a */

void FUN_1010132a(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_1039d74c;
  if (0 < param_2) {
    iVar2 = 0;
    do {
      *(undefined4 *)(iVar1 + 0x2714 + *(int *)(param_1 + iVar2 * 8) * 4) =
           *(undefined4 *)(param_1 + 4 + iVar2 * 8);
      iVar2 = iVar2 + 1;
    } while (param_2 != iVar2);
  }
  return;
}

