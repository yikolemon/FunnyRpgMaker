/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140153ba0 */

ulonglong FUN_140153ba0(longlong *param_1,undefined8 *param_2,longlong *param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  uint *local_80;
  int local_6c;
  undefined8 local_68;
  undefined8 *local_60;
  int *local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_a8;
  local_4c = 0;
  uVar10 = *(undefined8 *)(*param_1 + 0x30);
  *param_2 = 0;
  if (param_1[4] == 0) {
    uVar5 = FUN_140154dfb(param_1);
    local_4c = (uint)uVar5;
    if (local_4c != 0) goto LAB_140153d7e;
  }
  iVar1 = (int)param_1[2];
  if (iVar1 == 0) {
    uVar5 = 0;
    goto LAB_140153d7e;
  }
  iVar7 = *(int *)((longlong)param_1 + 0x1c) + iVar1;
  local_80 = &local_4c;
  local_88 = 0;
  plVar3 = (longlong *)FUN_14012b8aa(uVar10,8,0,iVar1 + 1);
  uVar5 = (ulonglong)local_4c;
  if (local_4c == 0) {
    local_60 = param_2;
    local_58 = param_4;
    if (param_3 == (longlong *)0x0) {
      lVar4 = 0;
LAB_140153c82:
      lVar2 = param_1[5];
      lVar11 = lVar4;
      if (param_3 == (longlong *)0x0) {
        lVar11 = lVar2;
      }
      *plVar3 = lVar11;
      local_6c = iVar7;
      local_68 = uVar10;
      if ((int)param_1[2] != 0) {
        uVar9 = 1;
        uVar8 = 0;
        uVar12 = 0;
        do {
          uVar5 = (ulonglong)uVar9;
          uVar6 = *(int *)(param_1[4] + uVar5 * 4) - 1;
          uVar13 = uVar12;
          if ((uVar12 <= uVar6) &&
             (uVar13 = *(uint *)((longlong)param_1 + 0x1c),
             uVar6 < *(uint *)((longlong)param_1 + 0x1c))) {
            uVar13 = uVar6;
          }
          if (param_3 == (longlong *)0x0) {
            plVar3[uVar5] = (ulonglong)uVar13 + lVar2;
          }
          else {
            lVar11 = (ulonglong)uVar8 + (ulonglong)uVar13 + lVar4;
            plVar3[uVar5] = lVar11;
            if (uVar13 != uVar12) {
              FUN_1401c5180(plVar3[uVar9 - 1],(ulonglong)uVar12 + lVar2,lVar11 - plVar3[uVar9 - 1]);
              *(undefined1 *)plVar3[uVar5] = 0;
              plVar3[uVar5] = plVar3[uVar5] + 1;
              uVar8 = uVar8 + 1;
            }
          }
          uVar9 = uVar9 + 1;
          uVar12 = uVar13;
        } while (uVar9 <= *(uint *)(param_1 + 2));
      }
      *local_60 = plVar3;
      if (param_3 != (longlong *)0x0) {
        *param_3 = lVar4;
      }
      uVar10 = local_68;
      if (local_58 != (int *)0x0) {
        *local_58 = local_6c;
      }
    }
    else {
      lVar4 = FUN_140128a1f(uVar10,iVar7,&local_4c);
      if (local_4c == 0) goto LAB_140153c82;
    }
    uVar5 = (ulonglong)local_4c;
    if ((local_4c != 0) && (lVar4 != 0)) {
      FUN_140128b39(uVar10,lVar4);
      uVar5 = (ulonglong)local_4c;
    }
  }
  if (plVar3 != (longlong *)0x0 && (int)uVar5 != 0) {
    FUN_140128b39(uVar10,plVar3);
    uVar5 = (ulonglong)local_4c;
  }
LAB_140153d7e:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_a8);
  }
  return uVar5;
}

