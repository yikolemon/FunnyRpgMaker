/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14004499c */

longlong FUN_14004499c(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  *(undefined8 *)(param_1 + 0x38) = 0;
  cVar1 = FUN_140006aac(param_2);
  if (cVar1 != '\0') {
    FUN_140044a2c(param_1,param_2);
    *(longlong *)(param_1 + 0x38) = param_1;
  }
  return param_1;
}

