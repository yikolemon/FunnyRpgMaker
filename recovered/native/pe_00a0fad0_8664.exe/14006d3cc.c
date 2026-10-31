/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006d3cc */

undefined8 * FUN_14006d3cc(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  bVar1 = *param_2;
  FUN_140063f00(param_1 + 1,0);
  *(undefined1 *)param_1 = 4;
  param_1[1] = (ulonglong)bVar1;
  return param_1;
}

