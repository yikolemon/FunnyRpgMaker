/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015538e */

void FUN_14015538e(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  FUN_1401553eb(param_1,uVar1);
  FUN_140128b39(uVar1,param_1[1]);
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

