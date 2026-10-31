/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10064588 */

char FUN_10064588(int *param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*param_1 + 1);
  *param_1 = (int)pcVar1;
  if (pcVar1 != param_2) {
    return (-0x41 < *pcVar1) * '\x03';
  }
  return '\x01';
}

