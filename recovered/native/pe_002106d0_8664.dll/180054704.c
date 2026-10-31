/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180054704 */

undefined8 * FUN_180054704(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  bVar1 = *param_2;
  FUN_1800163b4(param_1 + 1,0);
  *(undefined1 *)param_1 = 4;
  param_1[1] = (ulonglong)bVar1;
  return param_1;
}

