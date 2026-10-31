/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140035749 */

undefined4 * FUN_140035749(undefined4 *param_1,ushort *param_2)

{
  ushort uVar1;
  undefined6 extraout_var;
  longlong lVar2;
  
  uVar1 = FUN_14003586f(param_2);
  *param_1 = (int)CONCAT62(extraout_var,uVar1);
  lVar2 = FUN_14003587a((longlong)param_2);
  *(longlong *)(param_1 + 2) = lVar2;
  lVar2 = FUN_14003587f(param_2);
  *(longlong *)(param_1 + 4) = lVar2;
  param_1[6] = 1;
  return param_1;
}

