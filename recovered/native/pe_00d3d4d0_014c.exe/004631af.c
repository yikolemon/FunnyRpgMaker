/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004631af */

int __fastcall FUN_004631af(int param_1,uint param_2)

{
  if (*(uint *)(param_1 + 0x10) <= param_2) {
    FUN_00461f8a(*(int **)(param_1 + 4),0x82);
    param_2 = 0;
  }
  return param_2 * *(int *)(param_1 + 8) + *(int *)(param_1 + 0x18);
}

