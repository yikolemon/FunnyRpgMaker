/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00480120 */

void __fastcall FUN_00480120(int param_1)

{
  if (*(FILE **)(param_1 + 0x4c) != (FILE *)0x0) {
    __unlock_file(*(FILE **)(param_1 + 0x4c));
  }
  return;
}

