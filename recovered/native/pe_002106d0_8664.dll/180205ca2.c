/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180205ca2 */

void FUN_180205ca2(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  FUN_180205cff(param_1,uVar1);
  FUN_1801c9b65(uVar1,param_1[1]);
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

