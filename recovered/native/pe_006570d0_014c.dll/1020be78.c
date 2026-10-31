/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020be78 */

void __fastcall FUN_1020be78(int param_1,undefined4 param_2)

{
  if (*(undefined4 **)(param_1 + 0xc) !=
      (undefined4 *)(*(int *)(param_1 + 0x10) * 8 + *(int *)(param_1 + 8))) {
    **(undefined4 **)(param_1 + 0xc) = param_2;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 4) = 0;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 8;
    return;
  }
  FUN_1020a812();
  return;
}

