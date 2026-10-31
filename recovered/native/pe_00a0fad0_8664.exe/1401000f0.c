/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401000f0 */

undefined8 * FUN_1401000f0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  lVar2 = -1;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(lVar1 + lVar2) != '\0');
  FUN_1400061f6(param_2);
  return param_2;
}

