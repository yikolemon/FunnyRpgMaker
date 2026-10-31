/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a3a2d */

bool __cdecl FUN_004a3a2d(char *param_1,int param_2)

{
  if (param_2 == 0) {
    return true;
  }
  for (; *param_1 == '0'; param_1 = param_1 + 1) {
  }
  return *param_1 != '\0';
}

