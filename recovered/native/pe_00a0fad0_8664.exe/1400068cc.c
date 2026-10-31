/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400068cc */

longlong FUN_1400068cc(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  *(undefined8 *)(param_1 + 0x38) = 0;
  cVar1 = FUN_140006aac(param_2);
  if (cVar1 != '\0') {
    FUN_140006ab0(param_1,param_2);
    *(longlong *)(param_1 + 0x38) = param_1;
  }
  return param_1;
}

