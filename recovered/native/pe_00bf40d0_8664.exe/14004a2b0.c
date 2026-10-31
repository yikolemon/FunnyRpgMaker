/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004a2b0 */

int FUN_14004a2b0(int *param_1)

{
  char *_Str1;
  char *_Str2;
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStackY_328 [32];
  ulonglong local_2f8;
  int local_2e4;
  ulonglong local_2e0 [19];
  ulonglong local_248;
  uint local_240;
  ulonglong local_238;
  uint local_230;
  int local_228;
  int local_204;
  longlong local_200;
  int local_1c8;
  undefined8 local_1c0;
  undefined8 local_1a0;
  undefined8 local_168;
  int local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  int local_b8;
  undefined8 local_b0;
  int local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_328;
  lVar6 = *(longlong *)(param_1 + 0xa8);
  FUN_14004a8e8((undefined1 (*) [32])local_2e0);
  param_1[0xba] = -1;
  param_1[0xbb] = -1;
  param_1[0xbc] = 0;
  param_1[0x62] = 1;
  param_1[0x46] = 4;
  param_1[0x72] = 0xf5c;
  param_1[0x60] = 0x27a000;
  param_1[0x61] = 7;
  uVar4 = FUN_14004a8f5((longlong *)local_2e0,*(longlong **)(param_1 + 0x28),
                        *(longlong *)(param_1 + 0x26),lVar6);
  local_2e4 = (int)uVar4;
  if (local_2e4 != 0) goto LAB_14004a74c;
  uVar4 = FUN_14004aae2(param_1,local_2e0,local_248,local_240);
  local_2e4 = (int)uVar4;
  if ((local_2e4 != 0) || (local_2e4 = FUN_14004aeac((longlong *)local_2e0,lVar6), local_2e4 != 0))
  goto LAB_14004a74c;
  uVar4 = FUN_14004aae2(param_1,local_2e0,local_238,local_230);
  local_2e4 = (int)uVar4;
  if (local_2e4 != 0) goto LAB_14004a74c;
  *(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) & 0xfe;
  piVar5 = *(int **)(param_1 + 0xb8);
  if (piVar5 == (int *)0x0) {
LAB_14004a50d:
    param_1[0xbc] = 0;
  }
  else {
    if (*piVar5 != 1 << (*(byte *)(piVar5 + 1) & 0x1f)) {
      FUN_1400498ef((longlong)param_1);
      piVar5 = *(int **)(param_1 + 0xb8);
      if (piVar5 == (int *)0x0) goto LAB_14004a50d;
    }
    if ((piVar5[0xbe] != 0) && (piVar5[0xbe] != piVar5[1])) {
      piVar5[0xbe] = 0;
      piVar5 = *(int **)(param_1 + 0xb8);
      if (piVar5 == (int *)0x0) goto LAB_14004a50d;
    }
    if ((*piVar5 == 0) || (piVar5[1] == 0)) {
      FUN_1400498ef((longlong)param_1);
      piVar5 = *(int **)(param_1 + 0xb8);
      if (piVar5 == (int *)0x0) goto LAB_14004a50d;
    }
    if (*(longlong *)(piVar5 + 0x42) == 0) {
      FUN_1400498ef((longlong)param_1);
      piVar5 = *(int **)(param_1 + 0xb8);
      if (piVar5 == (int *)0x0) goto LAB_14004a50d;
    }
    if (*(longlong *)(piVar5 + 10) == 0) {
      FUN_1400498ef((longlong)param_1);
      piVar5 = *(int **)(param_1 + 0xb8);
      if (piVar5 == (int *)0x0) goto LAB_14004a50d;
    }
    if ((ulonglong)(uint)piVar5[1] != 0) {
      lVar6 = 0;
      do {
        if (*(char *)((longlong)piVar5 + lVar6 + 0xa8) == '\0') {
          FUN_1400498ef((longlong)param_1);
          if (*(longlong *)(param_1 + 0xb8) == 0) goto LAB_14004a50d;
          break;
        }
        lVar6 = lVar6 + 0x18;
      } while ((ulonglong)(uint)piVar5[1] * 0x18 != lVar6);
    }
    if (param_1[0xbc] != 0) {
      lVar6 = FUN_14001c617(*(longlong *)(param_1 + 0x26),4,0,param_1[0xbc],0,&local_2e4);
      *(longlong *)(param_1 + 0xbe) = lVar6;
      if (local_2e4 != 0) {
        param_1[0xbc] = 0;
        goto LAB_14004a74c;
      }
    }
  }
  param_1[0x90] = local_1c8;
  if (local_98 != 0) {
    param_1[0x88] = local_b8;
    *(undefined8 *)(param_1 + 0x82) = local_b0;
    *(undefined8 *)(param_1 + 0x8a) = local_90;
    *(undefined8 *)(param_1 + 0x8c) = uStack_88;
    *(undefined8 *)(param_1 + 0x8e) = local_58;
    local_98 = 0;
    local_58 = 0;
  }
  if ((*(longlong *)(*(longlong *)(param_1 + 0x34) + 0x50) == 0) && (local_150 == 0)) {
    local_2e4 = 3;
  }
  local_150 = 0;
  *(undefined8 *)(param_1 + 0x84) = local_168;
  *(undefined8 *)(param_1 + 0x94) = local_148;
  *(undefined8 *)(param_1 + 0x96) = uStack_140;
  *(undefined8 *)(param_1 + 0x86) = local_1c0;
  *(undefined8 *)(param_1 + 0x92) = local_1a0;
  local_1c0 = 0;
  local_1a0 = 0;
  if (param_1[0x78] == 1) {
    local_2f8._0_4_ = 0;
    iVar1 = 0;
    if (0 < local_204) {
      iVar1 = 0;
      uVar4 = 0;
      local_2f8 = 0;
      do {
        _Str1 = *(char **)(local_200 + uVar4 * 8);
        *(undefined2 *)(*(longlong *)(param_1 + 0x7e) + uVar4 * 2) = 0;
        *(char **)(*(longlong *)(param_1 + 0x80) + uVar4 * 8) = ".notdef";
        if ((_Str1 != (char *)0x0) && (iVar3 = param_1[0x90], 0 < (longlong)iVar3)) {
          lVar6 = *(longlong *)(param_1 + 0x92);
          lVar7 = 0;
          do {
            _Str2 = *(char **)(lVar6 + lVar7 * 8);
            iVar2 = strcmp(_Str1,_Str2);
            if (iVar2 == 0) {
              *(short *)(*(longlong *)(param_1 + 0x7e) + uVar4 * 2) = (short)lVar7;
              *(char **)(*(longlong *)(param_1 + 0x80) + uVar4 * 8) = _Str2;
              iVar3 = strcmp(".notdef",_Str2);
              if (iVar3 != 0) {
                if ((int)uVar4 < (int)local_2f8) {
                  local_2f8 = uVar4;
                }
                local_2f8 = local_2f8 & 0xffffffff;
                iVar3 = (int)uVar4 + 1;
                if (iVar1 <= iVar3) {
                  iVar1 = iVar3;
                }
              }
              break;
            }
            lVar7 = lVar7 + 1;
          } while (iVar3 != lVar7);
        }
        uVar4 = uVar4 + 1;
      } while ((longlong)uVar4 < (longlong)local_204);
    }
    param_1[0x7b] = (int)local_2f8;
    param_1[0x7c] = iVar1;
    param_1[0x7a] = local_228;
  }
  if (1000 < (uint)param_1[0x61]) {
    param_1[0x61] = 7;
  }
  if (1000 < (uint)param_1[0x62]) {
    param_1[0x62] = 1;
  }
LAB_14004a74c:
  FUN_14004b35b((longlong)local_2e0);
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_328)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_328);
  }
  return local_2e4;
}

