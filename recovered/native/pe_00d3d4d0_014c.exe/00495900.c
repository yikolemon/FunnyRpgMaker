/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00495900 */

bool __cdecl FUN_00495900(short *param_1)

{
  if ((*param_1 == 0x5a4d) && (*(int *)(*(int *)(param_1 + 0x1e) + (int)param_1) == 0x4550)) {
    return (short)((int *)(*(int *)(param_1 + 0x1e) + (int)param_1))[6] == 0x10b;
  }
  return false;
}

