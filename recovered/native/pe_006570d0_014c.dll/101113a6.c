/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101113a6 */

void __fastcall FUN_101113a6(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *(undefined1 *)(param_1 + 0xf9) = 1;
  iVar1 = *(int *)(param_1 + 0x1d8);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x1e0);
    iVar4 = 0;
    do {
      iVar3 = *(int *)(iVar2 + iVar4);
      if (*(char *)(iVar3 + 0x101) == '\0') {
        *(undefined1 *)(iVar3 + 0xff) = 1;
        *(undefined1 *)(iVar3 + 0xf9) = 1;
        FUN_101113a6();
      }
      iVar4 = iVar4 + 4;
    } while (iVar1 << 2 != iVar4);
  }
  return;
}

