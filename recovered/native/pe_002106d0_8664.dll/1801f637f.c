/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f637f */

undefined8 FUN_1801f637f(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  lVar2 = param_1[0x22];
  FUN_1801f621b(lVar2,lVar1,param_1);
  FUN_1801f6490(lVar2,2);
  FUN_1801f6490(lVar2,3);
  if (*(int *)(lVar1 + 0x3b0) == 0) {
    *(undefined4 *)(param_1 + 0x23) = 0;
  }
  else {
    FUN_1801f64ae(lVar2,1,*(undefined8 *)(lVar1 + 0x3b8));
    *(undefined4 *)(lVar2 + 0xe8) = 0;
    uVar3 = FUN_1801f64e9(lVar2,param_1);
    *(int *)(param_1 + 0x23) = (int)uVar3;
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  FUN_1801f66c4(lVar2,param_1);
  return 0;
}

