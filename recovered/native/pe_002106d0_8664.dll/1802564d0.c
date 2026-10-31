/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802564d0 */

undefined8 * FUN_1802564d0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  lVar2 = -1;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  do {
    lVar2 = lVar2 + 1;
  } while (*(short *)(lVar1 + lVar2 * 2) != 0);
  FUN_180264790(param_2);
  return param_2;
}

