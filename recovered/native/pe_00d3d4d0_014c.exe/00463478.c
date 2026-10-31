/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00463478 */

void __fastcall FUN_00463478(int param_1,undefined4 param_2)

{
  if (*(undefined4 **)(param_1 + 0xc) !=
      (undefined4 *)(*(int *)(param_1 + 0x10) * 8 + *(int *)(param_1 + 8))) {
    **(undefined4 **)(param_1 + 0xc) = param_2;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 4) = 2;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 8;
    return;
  }
  FUN_00461f8a(*(int **)(param_1 + 4),0x82);
  return;
}

