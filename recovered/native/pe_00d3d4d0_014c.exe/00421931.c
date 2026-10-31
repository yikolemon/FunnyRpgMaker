/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00421931 */

bool __cdecl FUN_00421931(char *param_1,char *param_2,uint param_3)

{
  for (; (1 < param_3 && (*param_2 != '\0')); param_2 = param_2 + 1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    param_3 = param_3 - 1;
  }
  *param_1 = '\0';
  return *param_2 != '\0';
}

