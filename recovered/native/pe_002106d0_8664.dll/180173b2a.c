/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180173b2a */

undefined8
FUN_180173b2a(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_4 = 8;
  *(undefined4 *)(param_4 + 1) = 0;
  iVar1 = FUN_180173d0f();
  if (iVar1 != 0) {
    uVar2 = FUN_180173d30(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  iVar1 = FUN_180173d7a(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_180173d9b(param_1,param_2,param_3);
    return uVar2;
  }
  iVar1 = FUN_1801749fd(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_180174a1e(param_1,param_2,param_3);
    return uVar2;
  }
  iVar1 = FUN_180174ae3(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_180174b0d(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  iVar1 = FUN_180174fbb(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_180174fdc(param_1,param_2,param_3);
    return uVar2;
  }
  iVar1 = FUN_180175192(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_180175206(param_1,param_2,param_3);
    return uVar2;
  }
  iVar1 = FUN_18017527f(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_180175327(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  iVar1 = FUN_180175467(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_1801754b3(param_1,param_2,param_3);
    uVar2 = FUN_180175b63(uVar2,*param_2,*param_3);
    return uVar2;
  }
  iVar1 = FUN_180175c9d(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_180175e98(param_1,param_2,param_3);
    return uVar2;
  }
  FUN_1801765d0("unknown image type");
  return 0;
}

