/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102838ad */

bool FUN_102838ad(char *param_1,int param_2)

{
  if (param_2 == 0) {
    return true;
  }
  for (; *param_1 == '0'; param_1 = param_1 + 1) {
  }
  return *param_1 != '\0';
}

