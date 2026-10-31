/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00480110 */

void __fastcall FUN_00480110(int param_1)

{
  if (*(FILE **)(param_1 + 0x4c) != (FILE *)0x0) {
    __lock_file(*(FILE **)(param_1 + 0x4c));
  }
  return;
}

