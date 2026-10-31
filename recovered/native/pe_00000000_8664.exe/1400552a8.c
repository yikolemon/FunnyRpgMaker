/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400552a8 */

void FUN_1400552a8(undefined8 *param_1,undefined8 *param_2,int param_3,int *param_4,char param_5,
                  longlong *param_6)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  undefined8 *local_68;
  undefined1 local_59;
  undefined8 *local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_98;
  iVar2 = *param_4;
  iVar8 = 0;
  local_68 = param_1;
  if (iVar2 - param_3 == 0 || iVar2 < param_3) {
LAB_140055313:
    local_70 = (ulonglong)*(byte *)((longlong)param_4 + 0xe);
  }
  else {
    if (*(char *)((longlong)param_4 + 9) != '\0') {
      param_5 = *(char *)((longlong)param_4 + 9);
    }
    if (param_5 == '\x03') {
      iVar9 = (iVar2 - param_3) / 2;
      iVar8 = (iVar2 - param_3) - iVar9;
    }
    else {
      if (param_5 != '\x02') {
        iVar8 = 0;
        if (param_5 == '\x01') {
          iVar8 = iVar2 - param_3;
        }
        goto LAB_140055313;
      }
      iVar9 = iVar2 - param_3;
      iVar8 = 0;
    }
    local_70 = (ulonglong)*(byte *)((longlong)param_4 + 0xe);
    if (0 < iVar9) {
      lVar3 = (longlong)param_4 + 0xf + local_70;
      uVar7 = iVar9 + 1;
      do {
        FUN_140049caf(&local_58,(longlong)param_4 + 0xf,lVar3,param_2);
        uVar7 = uVar7 - 1;
        param_2 = local_50;
      } while (1 < uVar7);
    }
  }
  lVar3 = *param_6;
  bVar10 = false;
  lVar5 = 0;
  do {
    uVar1 = *(undefined1 *)(lVar3 + lVar5);
    lVar5 = param_2[2];
    uVar6 = lVar5 + 1;
    if ((ulonglong)param_2[3] < uVar6) {
      (**(code **)*param_2)(param_2);
      lVar5 = param_2[2];
      uVar6 = lVar5 + 1;
    }
    param_2[2] = uVar6;
    *(undefined1 *)(param_2[1] + lVar5) = uVar1;
    lVar5 = 1;
    bVar4 = !bVar10;
    bVar10 = true;
  } while (bVar4);
  if ((*(char *)param_6[1] == '\x01') &&
     (*(int *)param_6[3] != *(int *)param_6[2] && *(int *)param_6[2] <= *(int *)param_6[3])) {
    local_59 = 0x30;
    FUN_14004fd70(&local_58,param_2);
    param_2 = local_58;
  }
  FUN_14004a4e4(&local_58,param_6[4],*(undefined8 *)param_6[5],param_2);
  if (0 < iVar8) {
    lVar3 = local_70 + 0xf;
    uVar7 = iVar8 + 1;
    do {
      FUN_140049caf(&local_58,(longlong)param_4 + 0xf,(longlong)param_4 + lVar3);
      uVar7 = uVar7 - 1;
      local_58 = local_50;
    } while (1 < uVar7);
  }
  *local_68 = local_58;
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_98);
  }
  return;
}

