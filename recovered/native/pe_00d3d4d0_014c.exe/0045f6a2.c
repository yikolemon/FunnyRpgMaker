/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045f6a2 */

void __fastcall FUN_0045f6a2(int param_1,int param_2)

{
  if (*(char *)(*(int *)(param_1 + 0x1c) + 0x30) != '\0') {
    return;
  }
  **(int **)(*(int *)(param_1 + 0x1c) + 0x220) = param_2 + 0x8000 >> 0x10;
  return;
}

