/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00467798 */

void __fastcall FUN_00467798(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + -4 + *(int *)(param_1 + 0xc) * 0x10) = param_2;
  }
  return;
}

