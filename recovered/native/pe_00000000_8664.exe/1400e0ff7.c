/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e0ff7 */

char * FUN_1400e0ff7(int param_1)

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

