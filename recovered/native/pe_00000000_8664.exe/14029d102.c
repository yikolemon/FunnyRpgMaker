/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14029d102 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14029d102(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  uVar1 = *param_2;
  iVar2 = (*ram0x00014059e0f8)(0x3a4,0,uVar1,0xffffffff,0,0);
  lVar4 = -1;
  if (-2 < iVar2) {
    lVar4 = (longlong)iVar2 * 2 + 2;
  }
  uVar3 = thunk_FUN_14044ab00();
  FUN_1404b9e70(uVar3,0,lVar4);
  uVar5 = uVar3;
  (*ram0x00014059e0f8)(0x3a4,0,uVar1,0xffffffff,uVar3,iVar2,uVar3,lVar4,uVar6);
  FUN_140212724(param_1,uVar3);
  thunk_FUN_1404a2310(uVar5);
  return param_1;
}

