/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f963e */

void FUN_1800f963e(undefined1 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_1800e0e04(param_2,"isDockspaceSet",param_1);
  *param_1 = uVar1;
  uVar1 = FUN_1800e0e04(param_2,&DAT_18035f516,param_1 + 1);
  param_1[1] = uVar1;
  uVar2 = FUN_1800e1096(param_2,&DAT_1803773ae,param_1 + 2);
  *(undefined4 *)(param_1 + 2) = uVar2;
  return;
}

