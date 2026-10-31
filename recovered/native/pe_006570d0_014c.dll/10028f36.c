/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10028f36 */

undefined4 * __thiscall FUN_10028f36(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 uStack_15;
  int *local_14;
  
  iVar4 = *(int *)*param_1;
  if (iVar4 != 0) {
    iVar3 = param_3[1];
    uVar2 = iVar3 + 1;
    if ((uint)param_3[2] < uVar2) {
      (*(code *)param_3[3])(param_3,uVar2);
      iVar3 = param_3[1];
      uVar2 = iVar3 + 1;
    }
    param_3[1] = uVar2;
    *(char *)(*param_3 + iVar3) = (char)(0x202b2d00 >> ((byte)(iVar4 << 3) & 0x1f));
  }
  iVar4 = ((undefined4 *)param_1[1])[1];
  FUN_10025309(&local_14,param_3,*(undefined4 *)param_1[1],*(undefined4 *)param_1[2]);
  if (0 < iVar4) {
    do {
      iVar3 = local_14[1];
      uVar2 = iVar3 + 1;
      if ((uint)local_14[2] < uVar2) {
        (*(code *)local_14[3])(local_14,uVar2);
        iVar3 = local_14[1];
        uVar2 = iVar3 + 1;
      }
      local_14[1] = uVar2;
      *(undefined1 *)(*local_14 + iVar3) = 0x30;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if ((*(byte *)(param_1[4] + 1) & 0x20) == 0) {
    *param_2 = local_14;
  }
  else {
    uVar1 = *(undefined1 *)param_1[5];
    iVar4 = local_14[1];
    uVar2 = iVar4 + 1;
    if ((uint)local_14[2] < uVar2) {
      (*(code *)local_14[3])(local_14,uVar2);
      iVar4 = local_14[1];
      uVar2 = iVar4 + 1;
    }
    local_14[1] = uVar2;
    *(undefined1 *)(*local_14 + iVar4) = uVar1;
    if (*(int *)param_1[6] < 1) {
      *param_2 = local_14;
    }
    else {
      uStack_15 = 0x30;
      FUN_10029039(param_2,local_14,*(int *)param_1[6],&uStack_15);
    }
  }
  return param_2;
}

