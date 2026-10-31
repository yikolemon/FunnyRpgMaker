/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14004553e */

longlong * FUN_14004553e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  plVar2 = param_1;
  lVar1 = FUN_1401887b0(0x50);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *param_1 = lVar1;
  FUN_14004567c(plVar2,lVar1,param_2,param_4,plVar2,uVar3);
  return plVar2;
}

