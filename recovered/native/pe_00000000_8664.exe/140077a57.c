/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140077a57 */

void FUN_140077a57(char *param_1,char *param_2,longlong param_3)

{
  if (param_3 != 0) {
    if (param_3 != 1) {
      strncpy(param_1,param_2,param_3 - 1);
    }
    param_1[param_3 + -1] = '\0';
  }
  return;
}

