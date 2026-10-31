/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048a2c0 */

void __fastcall FUN_0048a2c0(void *param_1)

{
  if ((*(uint *)((int)param_1 + 0x1c) >> 5 & 1) != 0) {
    *(uint *)((int)param_1 + 0x1c) = *(uint *)((int)param_1 + 0x1c) | 0x80;
  }
  FUN_0048a7ed(param_1);
  return;
}

