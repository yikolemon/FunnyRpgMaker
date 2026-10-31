/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140081152 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140081152(undefined8 param_1,longlong param_2,int *param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  undefined1 auStack_98 [40];
  int local_70 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_98;
  if (param_3 == (int *)0x0) {
    param_3 = (int *)&local_48;
    local_48 = _DAT_1400e6830;
    uStack_40 = _UNK_1400e6838;
  }
  lVar2 = *(longlong *)(param_2 + 0xe8);
  if (param_4 == (int *)0x0) {
    param_4 = local_70 + 1;
    local_70[1] = 0;
    piVar7 = local_70;
    local_70[0] = 0;
  }
  else {
    piVar7 = param_4 + 1;
  }
  local_58 = *(undefined8 *)(lVar2 + 0x30);
  uStack_50 = *(undefined8 *)(lVar2 + 0x38);
  local_68 = *(undefined8 *)param_3;
  uStack_60 = *(undefined8 *)(param_3 + 2);
  FUN_14002195b((int *)&local_68,(int *)&local_58);
  lVar3 = (longlong)*param_3 * (longlong)*(int *)(lVar2 + 0x40);
  lVar5 = (longlong)param_3[1] * (longlong)*(int *)(lVar2 + 0x44);
  lVar6 = (longlong)param_3[2] * (longlong)*(int *)(lVar2 + 0x40);
  lVar4 = (longlong)param_3[3] * (longlong)*(int *)(lVar2 + 0x44);
  iVar1 = *piVar7;
  *(int *)(lVar2 + 0x40) =
       (int)((ulonglong)(lVar3 + 0x8000 + (lVar3 >> 0x3f)) >> 0x10) + *param_4 +
       (int)((ulonglong)(lVar5 + 0x8000 + (lVar5 >> 0x3f)) >> 0x10);
  *(int *)(lVar2 + 0x44) =
       (int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10) + iVar1 +
       (int)((ulonglong)(lVar4 + 0x8000 + (lVar4 >> 0x3f)) >> 0x10);
  *(undefined8 *)(lVar2 + 0x30) = local_58;
  *(undefined8 *)(lVar2 + 0x38) = uStack_50;
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStack_98)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStack_98);
}

