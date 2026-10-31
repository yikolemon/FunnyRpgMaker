/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10190745 */

void __fastcall FUN_10190745(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x284) != 0) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x28c) + iVar2) + 0x54);
      if (iVar1 != 0) {
        *(byte *)(param_1 + 0x41) = *(byte *)(iVar1 + 0x34) >> 4 & 1;
        return;
      }
      iVar2 = iVar2 + 4;
    } while (*(int *)(param_1 + 0x284) << 2 != iVar2);
  }
  return;
}

