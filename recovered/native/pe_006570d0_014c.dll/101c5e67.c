/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c5e67 */

void __fastcall FUN_101c5e67(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    if (0 < *(int *)(param_1 + 0x24)) {
      iVar1 = 0;
      do {
        FUN_101c2ae9();
        *(undefined4 *)(*(int *)(param_1 + 0x28) + iVar1 * 4) = 0;
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x24));
    }
    FUN_101c0017(param_2,*(undefined4 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}

