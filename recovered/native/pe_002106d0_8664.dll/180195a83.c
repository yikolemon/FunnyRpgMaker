/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180195a83 */

char * FUN_180195a83(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar2 = "N/A";
  if (param_1 == 0) {
    pcVar2 = "RGBA32";
  }
  pcVar1 = "Alpha8";
  if (param_1 != 1) {
    pcVar1 = pcVar2;
  }
  return pcVar1;
}

