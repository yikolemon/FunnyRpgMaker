/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b7664 */

void __fastcall FUN_101b7664(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  if (((*(int *)(param_1 + 0x20) != 0) &&
      (FUN_1014b226(*(undefined4 *)(param_1 + 0x1c),1), *(int *)(param_1 + 0x20) != 0)) &&
     (cVar2 = FUN_10148c72(*(undefined4 *)(param_1 + 0x1c)), cVar2 == '\0')) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 != 0) {
    iVar3 = 0;
    do {
      FUN_101b7664();
      iVar3 = iVar3 + 4;
    } while (iVar1 << 2 != iVar3);
  }
  return;
}

