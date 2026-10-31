/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180117b67 */

void FUN_180117b67(uint param_1,undefined4 param_2,char *param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  char *pcVar11;
  size_t sVar12;
  int iVar13;
  int iVar14;
  undefined1 auStack_78 [32];
  char *local_58;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  lVar4 = DAT_180419160;
  local_40 = DAT_180402640 ^ (ulonglong)auStack_78;
  if (*(char *)(DAT_180419160 + 0x2b4c) == '\0') goto LAB_180117de0;
  sVar12 = (size_t)param_1;
  lVar1 = *(longlong *)(DAT_180419160 + 0x1608);
  iVar5 = (int)*(char *)(DAT_180419160 + 0x2b4e);
  if (iVar5 == -1) {
    *(undefined1 *)(DAT_180419160 + 0x2b4e) = 0;
    iVar5 = *(int *)(lVar1 + 0x148);
    iVar13 = *(int *)(lVar4 + 0x2b54);
    iVar14 = (int)((longlong)iVar5 + 1);
    if (iVar13 <= iVar5) {
      if (iVar13 == 0) {
        iVar13 = 8;
      }
      else {
        iVar13 = iVar13 / 2 + iVar13;
      }
      if (iVar13 <= iVar14) {
        iVar13 = iVar14;
      }
      uVar6 = FUN_1800fe7f8((longlong)iVar13 * 0xc);
      if (*(longlong *)(lVar4 + 0x2b58) != 0) {
        FUN_1802a82f0(uVar6,*(longlong *)(lVar4 + 0x2b58),(longlong)*(int *)(lVar4 + 0x2b50) * 0xc);
        FUN_1800fe8d4(*(undefined8 *)(lVar4 + 0x2b58));
      }
      *(undefined8 *)(lVar4 + 0x2b58) = uVar6;
      *(int *)(lVar4 + 0x2b54) = iVar13;
    }
    iVar13 = *(int *)(lVar4 + 0x2b50);
    if (iVar13 <= iVar5) {
      lVar7 = ((longlong)iVar5 + 1) - (longlong)iVar13;
      lVar8 = (longlong)iVar13 * 0xc + 8;
      do {
        lVar2 = *(longlong *)(lVar4 + 0x2b58);
        *(undefined8 *)(lVar2 + -8 + lVar8) = 0xff000000000000;
        *(undefined4 *)(lVar2 + lVar8) = 0xffffffff;
        lVar8 = lVar8 + 0xc;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    *(int *)(lVar4 + 0x2b50) = iVar14;
    uVar10 = (ulonglong)*(uint *)(lVar1 + 0x148);
    if (-1 < (int)*(uint *)(lVar1 + 0x148)) {
      lVar7 = 0;
      lVar8 = 0;
      do {
        uVar9 = param_1;
        if (lVar8 < (int)uVar10) {
          uVar9 = *(uint *)(*(longlong *)(lVar1 + 0x150) + lVar8 * 4);
        }
        *(uint *)(*(longlong *)(lVar4 + 0x2b58) + lVar7) = uVar9;
        uVar10 = (ulonglong)*(int *)(lVar1 + 0x148);
        lVar7 = lVar7 + 0xc;
        bVar3 = lVar8 < (longlong)uVar10;
        lVar8 = lVar8 + 1;
      } while (bVar3);
    }
    goto LAB_180117de0;
  }
  if (*(int *)(lVar1 + 0x148) != iVar5) goto LAB_180117de0;
  lVar1 = *(longlong *)(DAT_180419160 + 0x2b58) + (longlong)iVar5 * 0xc;
  if (*(int *)(lVar1 + 8) != -1) goto LAB_180117dd0;
  local_48 = 0;
  local_50 = 0;
  switch(param_2) {
  case 4:
    pcVar11 = "%d";
    sVar12 = (ulonglong)param_3 & 0xffffffff;
    break;
  default:
    goto switchD_180117c01_caseD_5;
  case 0xb:
    if (param_4 == 0) {
      sVar12 = strlen(param_3);
    }
    else {
      sVar12 = param_4 - (longlong)param_3;
    }
    pcVar11 = "%.*s";
    local_58 = param_3;
    break;
  case 0xc:
    FUN_1800febeb(&local_48,&local_50,"(void*)0x%p",param_3);
    goto switchD_180117c01_caseD_5;
  case 0xd:
    pcVar11 = "0x%08X [override]";
  }
  FUN_1800febeb(&local_48,&local_50,pcVar11,sVar12);
switchD_180117c01_caseD_5:
  *(uint *)(lVar1 + 8) = *(int *)(lVar4 + 0x2b60) + -1 + (uint)(*(int *)(lVar4 + 0x2b60) == 0);
  FUN_180100014(lVar4 + 0x2b60,local_48,local_50 + 1);
LAB_180117dd0:
  *(undefined1 *)(lVar1 + 5) = 1;
  if (*(char *)(lVar1 + 6) == -1) {
    *(char *)(lVar1 + 6) = (char)param_2;
  }
LAB_180117de0:
  if (DAT_180402640 == (local_40 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_40 ^ (ulonglong)auStack_78);
}

