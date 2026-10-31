/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002a51c */

undefined4 * __thiscall FUN_1002a51c(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 uStack_15;
  int *local_14;
  
  iVar5 = *(int *)*param_1;
  if (iVar5 != 0) {
    iVar4 = param_3[1];
    uVar3 = iVar4 + 1;
    if ((uint)param_3[2] < uVar3) {
      (*(code *)param_3[3])(param_3,uVar3);
      iVar4 = param_3[1];
      uVar3 = iVar4 + 1;
    }
    param_3[1] = uVar3;
    *(char *)(*param_3 + iVar4) = (char)(0x202b2d00 >> ((byte)(iVar5 << 3) & 0x1f));
  }
  puVar2 = (undefined4 *)param_1[1];
  iVar5 = puVar2[2];
  FUN_10025550(&local_14,param_3,*puVar2,puVar2[1],*(undefined4 *)param_1[2]);
  if (0 < iVar5) {
    do {
      iVar4 = local_14[1];
      uVar3 = iVar4 + 1;
      if ((uint)local_14[2] < uVar3) {
        (*(code *)local_14[3])(local_14,uVar3);
        iVar4 = local_14[1];
        uVar3 = iVar4 + 1;
      }
      local_14[1] = uVar3;
      *(undefined1 *)(*local_14 + iVar4) = 0x30;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if ((*(byte *)(param_1[4] + 1) & 0x20) == 0) {
    *param_2 = local_14;
  }
  else {
    uVar1 = *(undefined1 *)param_1[5];
    iVar5 = local_14[1];
    uVar3 = iVar5 + 1;
    if ((uint)local_14[2] < uVar3) {
      (*(code *)local_14[3])(local_14,uVar3);
      iVar5 = local_14[1];
      uVar3 = iVar5 + 1;
    }
    local_14[1] = uVar3;
    *(undefined1 *)(*local_14 + iVar5) = uVar1;
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

