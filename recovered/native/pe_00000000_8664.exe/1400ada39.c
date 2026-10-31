/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ada39 */

void FUN_1400ada39(undefined8 param_1,int param_2)

{
  char *pcVar1;
  
  pcVar1 = "#SCROLLY";
  if (param_2 == 0) {
    pcVar1 = "#SCROLLX";
  }
  FUN_140080066(param_1,pcVar1,0);
  return;
}

