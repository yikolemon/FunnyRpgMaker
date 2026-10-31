/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180238339 */

int FUN_180238339(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  
  param_1[1] = param_2;
  *param_1 = param_3;
  param_1[2] = *(undefined8 *)(param_2 + 0x30);
  param_1[0x220] = param_1 + 0x21e;
  param_1[0x21f] = param_1 + 0x21e;
  *(undefined4 *)(param_1 + 0x21e) = 0;
  iVar1 = FUN_1802382c1(param_3);
  if (iVar1 == 0) {
    FUN_1802383fe(param_1 + 3,param_3);
  }
  return iVar1;
}

