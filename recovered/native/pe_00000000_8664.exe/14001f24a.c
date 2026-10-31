/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001f24a */

undefined8 * FUN_14001f24a(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *local_30;
  
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
  iVar4 = ((undefined4 *)param_1[1])[1];
  FUN_14001ade0(&local_30,param_3,*(undefined4 *)param_1[1],*(undefined4 *)param_1[2]);
  if (0 < iVar4) {
    do {
      lVar2 = local_30[1];
      uVar3 = lVar2 + 1;
      if ((ulonglong)local_30[2] < uVar3) {
        (*(code *)local_30[3])(local_30);
        lVar2 = local_30[1];
        uVar3 = lVar2 + 1;
      }
      local_30[1] = uVar3;
      *(undefined1 *)(*local_30 + lVar2) = 0x30;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if ((*(byte *)(param_1[4] + 1) & 0x20) == 0) {
    *param_2 = local_30;
  }
  else {
    uVar1 = *(undefined1 *)param_1[5];
    lVar2 = local_30[1];
    uVar3 = lVar2 + 1;
    if ((ulonglong)local_30[2] < uVar3) {
      (*(code *)local_30[3])(local_30);
      lVar2 = local_30[1];
      uVar3 = lVar2 + 1;
    }
    local_30[1] = uVar3;
    *(undefined1 *)(*local_30 + lVar2) = uVar1;
    if (*(int *)param_1[6] < 1) {
      *param_2 = local_30;
    }
    else {
      FUN_14001f365(param_2,local_30);
    }
  }
  return param_2;
}

