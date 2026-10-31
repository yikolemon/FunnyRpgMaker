/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140073a44 */

char * FUN_140073a44(char *param_1,byte param_2)

{
  char *pcVar1;
  
  FUN_14000169c(param_1,"FF");
  pcVar1 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    pcVar1 = *(char **)param_1;
  }
  *pcVar1 = "0123456789ABCDEF"[param_2 >> 4];
  pcVar1 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    pcVar1 = *(char **)param_1;
  }
  pcVar1[1] = "0123456789ABCDEF"[param_2 & 0xf];
  return param_1;
}

