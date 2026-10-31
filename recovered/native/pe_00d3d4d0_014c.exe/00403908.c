/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00403908 */

int __fastcall FUN_00403908(int param_1)

{
  if (0xf < *(uint *)(param_1 + 0x58)) {
    return *(int *)(param_1 + 0x44);
  }
  return param_1 + 0x44;
}

