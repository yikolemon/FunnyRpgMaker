/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00462cbd */

int __fastcall FUN_00462cbd(int param_1)

{
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 3;
}

