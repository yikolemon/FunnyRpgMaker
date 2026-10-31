/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180134b09 */

void FUN_180134b09(undefined8 param_1,int param_2)

{
  char *pcVar1;
  
  pcVar1 = "#SCROLLY";
  if (param_2 == 0) {
    pcVar1 = "#SCROLLX";
  }
  FUN_180106d4e(param_1,pcVar1,0);
  return;
}

