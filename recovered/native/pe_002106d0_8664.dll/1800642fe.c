/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800642fe */

char FUN_1800642fe(longlong *param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*param_1 + 1);
  *param_1 = (longlong)pcVar1;
  if (pcVar1 != param_2) {
    return (-0x41 < *pcVar1) * '\x03';
  }
  return '\x01';
}

