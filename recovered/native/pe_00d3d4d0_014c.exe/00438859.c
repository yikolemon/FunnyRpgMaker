/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00438859 */

void __fastcall FUN_00438859(int param_1)

{
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_0041c607(*(int *)(param_1 + 8),*(int *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}

