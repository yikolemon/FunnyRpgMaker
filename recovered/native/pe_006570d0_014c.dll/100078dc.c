/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100078dc */

undefined4 FUN_100078dc(undefined4 param_1,undefined4 param_2,char param_3)

{
  char *pcVar1;
  
  pcVar1 = "Set to false";
  if (param_3 != '\0') {
    pcVar1 = "Set to true";
  }
  FUN_10007905(param_1,param_2,pcVar1 + 7);
  return param_1;
}

