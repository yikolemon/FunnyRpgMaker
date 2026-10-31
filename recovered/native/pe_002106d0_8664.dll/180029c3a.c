/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180029c3a */

undefined8 * FUN_180029c3a(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = *(int *)*param_1;
  if (iVar4 != 0) {
    lVar2 = param_3[1];
    uVar3 = lVar2 + 1;
    if ((ulonglong)param_3[2] < uVar3) {
      (*(code *)param_3[3])(param_3);
      lVar2 = param_3[1];
      uVar3 = lVar2 + 1;
    }
    param_3[1] = uVar3;
    *(char *)(*param_3 + lVar2) = (char)(0x202b2d00 >> ((byte)(iVar4 << 3) & 0x1f));
  }
  lVar2 = param_3[1];
  uVar3 = lVar2 + 1;
  if ((ulonglong)param_3[2] < uVar3) {
    (*(code *)param_3[3])(param_3);
    lVar2 = param_3[1];
    uVar3 = lVar2 + 1;
  }
  param_3[1] = uVar3;
  *(undefined1 *)(*param_3 + lVar2) = 0x30;
  if (*(char *)param_1[1] == '\0') {
    *param_2 = param_3;
  }
  else {
    uVar1 = *(undefined1 *)param_1[2];
    lVar2 = param_3[1];
    uVar3 = lVar2 + 1;
    if ((ulonglong)param_3[2] < uVar3) {
      (*(code *)param_3[3])(param_3);
      lVar2 = param_3[1];
      uVar3 = lVar2 + 1;
    }
    param_3[1] = uVar3;
    *(undefined1 *)(*param_3 + lVar2) = uVar1;
    iVar4 = *(int *)param_1[3];
    if (0 < iVar4) {
      do {
        lVar2 = param_3[1];
        uVar3 = lVar2 + 1;
        if ((ulonglong)param_3[2] < uVar3) {
          (*(code *)param_3[3])(param_3);
          lVar2 = param_3[1];
          uVar3 = lVar2 + 1;
        }
        param_3[1] = uVar3;
        *(undefined1 *)(*param_3 + lVar2) = 0x30;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_180025792(param_2,param_3,*(undefined4 *)param_1[4],*(undefined4 *)param_1[5]);
  }
  return param_2;
}

