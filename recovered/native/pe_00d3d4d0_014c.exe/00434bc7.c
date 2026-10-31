/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00434bc7 */

undefined4 * __fastcall FUN_00434bc7(undefined4 *param_1,ushort *param_2)

{
  ushort uVar1;
  undefined2 extraout_var;
  int iVar2;
  
  uVar1 = FUN_00434cbf(param_2);
  *param_1 = CONCAT22(extraout_var,uVar1);
  iVar2 = FUN_00406d48((int)param_2);
  param_1[1] = iVar2;
  iVar2 = FUN_00434cca(param_2);
  param_1[2] = iVar2;
  param_1[3] = 1;
  return param_1;
}

