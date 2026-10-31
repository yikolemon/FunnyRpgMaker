/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b9292 */

void __fastcall FUN_101b9292(int param_1)

{
  int iVar1;
  
  if (0 < *(int *)(param_1 + 0x100)) {
    iVar1 = 0;
    do {
      FUN_100fa2cb(*(undefined4 *)(*(int *)(param_1 + 0x108) + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x100));
  }
  if (*(int *)(param_1 + 0x108) != 0) {
    *(undefined4 *)(param_1 + 0x104) = 0;
    *(undefined4 *)(param_1 + 0x100) = 0;
    FUN_100fa2cb(*(int *)(param_1 + 0x108));
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  return;
}

