/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c58b9 */

bool FUN_101c58b9(char *param_1,char *param_2,uint param_3)

{
  for (; (1 < param_3 && (*param_2 != '\0')); param_2 = param_2 + 1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    param_3 = param_3 - 1;
  }
  *param_1 = '\0';
  return *param_2 != '\0';
}

