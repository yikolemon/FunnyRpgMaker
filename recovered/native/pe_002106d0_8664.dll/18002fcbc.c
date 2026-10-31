/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18002fcbc */

void FUN_18002fcbc(undefined8 *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    iVar1 = 0x1f;
    if (param_2 != 0) {
      for (; param_2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    uVar3 = 1 << ((byte)iVar1 & 0x1f);
    *(undefined4 *)*param_1 = 5;
    uVar2 = 1;
    if (param_1[2] == 0) {
      (*(code *)param_1[3])(param_1,1);
      uVar2 = (ulonglong)(param_1[2] != 0);
    }
    param_1[1] = uVar2;
    *(undefined4 *)(param_1 + 0x15) = 0;
    while (uVar3 = (int)uVar3 >> 1, uVar3 != 0) {
      FUN_180030150(param_1);
      if ((uVar3 & param_2) != 0) {
        FUN_18003057c(param_1,5);
      }
    }
    FUN_18002fc2a(param_1,param_2);
    return;
  }
  *(undefined4 *)*param_1 = 1;
  uVar2 = 1;
  if (param_1[2] == 0) {
    (*(code *)param_1[3])(param_1,1);
    uVar2 = (ulonglong)(param_1[2] != 0);
  }
  param_1[1] = uVar2;
  *(undefined4 *)(param_1 + 0x15) = 0;
  return;
}

