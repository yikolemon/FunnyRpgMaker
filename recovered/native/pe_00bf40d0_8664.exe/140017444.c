/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140017444 */

void FUN_140017444(undefined8 *param_1,undefined8 *param_2,int param_3,int *param_4,char param_5,
                  longlong *param_6)

{
  undefined2 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  undefined8 *local_68;
  undefined2 local_5a;
  undefined8 *local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_98;
  iVar2 = *param_4;
  iVar6 = 0;
  local_68 = param_1;
  if (iVar2 - param_3 == 0 || iVar2 < param_3) {
LAB_1400174af:
    local_70 = (ulonglong)*(byte *)((longlong)param_4 + 0xe);
  }
  else {
    if (*(char *)((longlong)param_4 + 9) != '\0') {
      param_5 = *(char *)((longlong)param_4 + 9);
    }
    if (param_5 == '\x03') {
      iVar7 = (iVar2 - param_3) / 2;
      iVar6 = (iVar2 - param_3) - iVar7;
    }
    else {
      if (param_5 != '\x02') {
        iVar6 = 0;
        if (param_5 == '\x01') {
          iVar6 = iVar2 - param_3;
        }
        goto LAB_1400174af;
      }
      iVar7 = iVar2 - param_3;
      iVar6 = 0;
    }
    local_70 = (ulonglong)*(byte *)((longlong)param_4 + 0xe);
    if (0 < iVar7) {
      lVar3 = local_70 * 2;
      uVar8 = iVar7 + 1;
      do {
        FUN_14000b5d8(&local_58,(undefined2 *)(param_4 + 4),
                      (undefined2 *)((longlong)(param_4 + 4) + lVar3),param_2);
        uVar8 = uVar8 - 1;
        param_2 = local_50;
      } while (1 < uVar8);
    }
  }
  lVar3 = *param_6;
  lVar9 = 0;
  do {
    uVar1 = *(undefined2 *)(lVar3 + lVar9);
    lVar4 = param_2[2];
    uVar5 = lVar4 + 1;
    if ((ulonglong)param_2[3] < uVar5) {
      (**(code **)*param_2)(param_2);
      lVar4 = param_2[2];
      uVar5 = lVar4 + 1;
    }
    param_2[2] = uVar5;
    *(undefined2 *)(param_2[1] + lVar4 * 2) = uVar1;
    lVar9 = lVar9 + 2;
  } while (lVar9 != 4);
  if ((*(char *)param_6[1] == '\x01') &&
     (uVar8 = *(int *)param_6[3] - *(int *)param_6[2],
     uVar8 != 0 && *(int *)param_6[2] <= *(int *)param_6[3])) {
    local_5a = 0x30;
    FUN_140011848(&local_58,param_2,(ulonglong)uVar8,&local_5a);
    param_2 = local_58;
  }
  FUN_14000beb2(&local_58,(char *)param_6[4],*(char **)param_6[5],param_2);
  if (0 < iVar6) {
    lVar3 = local_70 * 2;
    uVar8 = iVar6 + 1;
    do {
      FUN_14000b5d8(&local_58,(undefined2 *)(param_4 + 4),
                    (undefined2 *)((longlong)param_4 + lVar3 + 0x10),local_58);
      uVar8 = uVar8 - 1;
      local_58 = local_50;
    } while (1 < uVar8);
  }
  *local_68 = local_58;
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStack_98);
  }
  return;
}

