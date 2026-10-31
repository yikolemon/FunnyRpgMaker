/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140021e80 */

bool FUN_140021e80(char *param_1,char *param_2,uint param_3)

{
  for (; (1 < param_3 && (*param_2 != '\0')); param_2 = param_2 + 1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    param_3 = param_3 - 1;
  }
  *param_1 = '\0';
  return *param_2 != '\0';
}

