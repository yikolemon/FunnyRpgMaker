/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000638a */

undefined8 * FUN_14000638a(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 (*pauVar1) [32];
  ulonglong uVar2;
  
  pauVar1 = (undefined1 (*) [32])*param_2;
  *param_1 = pauVar1;
  uVar2 = FUN_14009cf30(pauVar1);
  param_1[1] = uVar2;
  return param_1;
}

