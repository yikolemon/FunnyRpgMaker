/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f2f02 */

undefined4 FUN_100f2f02(undefined4 param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 - 1U < 4) {
    pcVar1 = *(char **)(&DAT_102b7248 + param_2 * 4);
  }
  else {
    pcVar1 = std::_Syserror_map(param_2);
  }
  FUN_10001f66(pcVar1);
  return param_1;
}

