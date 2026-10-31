/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000fd22 */

undefined8 * FUN_14000fd22(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  bVar1 = *param_2;
  FUN_1400062e0(param_1 + 1,0);
  *(undefined1 *)param_1 = 4;
  param_1[1] = (ulonglong)bVar1;
  return param_1;
}

