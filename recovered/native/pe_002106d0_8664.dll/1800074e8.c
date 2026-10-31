/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800074e8 */

void FUN_1800074e8(undefined8 param_1,undefined8 param_2,char param_3)

{
  char *pcVar1;
  
  pcVar1 = "Set to false";
  if (param_3 != '\0') {
    pcVar1 = "Set to true";
  }
  FUN_180007505(param_1,param_2,pcVar1 + 7);
  return;
}

