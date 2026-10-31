/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14004b07d */

void FUN_14004b07d(undefined8 param_1,undefined8 param_2,char param_3)

{
  char *pcVar1;
  
  pcVar1 = "Set to false";
  if (param_3 != '\0') {
    pcVar1 = "Set to true";
  }
  FUN_14004b09a(param_1,param_2,pcVar1 + 7);
  return;
}

