/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012c286 */

void __fastcall FUN_1012c286(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x26f0);
  if (iVar1 != 0) {
    iVar2 = iVar1 + 4;
    do {
      if (*(int *)(iVar2 + 0x14) == *param_1) {
        *(undefined4 *)(iVar2 + 0x14) = 0;
        *(undefined2 *)(iVar2 + 0x1c) = 0xffff;
        return;
      }
      iVar2 = iVar2 + *(int *)(iVar2 + -4);
    } while (iVar2 != *(int *)(DAT_1039d74c + 0x26e8) + iVar1 + 4);
  }
  return;
}

