/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140145a6b */

undefined8 FUN_140145a6b(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  lVar2 = param_1[0x22];
  FUN_140145907(lVar2,lVar1,param_1);
  FUN_140145b7c(lVar2,2);
  FUN_140145b7c(lVar2,3);
  if (*(int *)(lVar1 + 0x3b0) == 0) {
    *(undefined4 *)(param_1 + 0x23) = 0;
  }
  else {
    FUN_140145b9a(lVar2,1,*(undefined8 *)(lVar1 + 0x3b8));
    *(undefined4 *)(lVar2 + 0xe8) = 0;
    uVar3 = FUN_140145bd5(lVar2,param_1);
    *(int *)(param_1 + 0x23) = (int)uVar3;
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  FUN_140145db0(lVar2,param_1);
  return 0;
}

