/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b9a98 */

void __fastcall FUN_100b9a98(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar2 != iVar1) {
      do {
        FUN_100b9a02();
        iVar2 = iVar2 + 0x1c;
      } while (iVar2 != iVar1);
      iVar2 = *(int *)(param_1 + 4);
    }
    (*DAT_1039c964)(iVar2);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

