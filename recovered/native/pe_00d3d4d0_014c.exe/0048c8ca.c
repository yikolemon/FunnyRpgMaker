/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048c8ca */

uint __fastcall FUN_0048c8ca(int param_1)

{
  if (*(int *)(param_1 + 0x404) == 0) {
    return 0x100;
  }
  return *(uint *)(param_1 + 0x400) >> 2;
}

