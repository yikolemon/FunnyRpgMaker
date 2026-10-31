/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180058ea6 */

char * FUN_180058ea6(char *param_1,byte param_2)

{
  char *pcVar1;
  
  FUN_180001e92(param_1,"FF");
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

