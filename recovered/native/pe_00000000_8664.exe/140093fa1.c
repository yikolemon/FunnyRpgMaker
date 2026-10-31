/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140093fa1 */

void FUN_140093fa1(int param_1,byte param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  lVar3 = DAT_140f2a910;
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  lVar6 = *(longlong *)(DAT_140f2a910 + 0x1608);
  iVar8 = *(int *)(DAT_140f2a910 + 0x2158);
  if ((char)param_2 < '\0') {
    cVar4 = FUN_140081f3e(0,0x400);
    if (cVar4 != '\0') goto LAB_140094176;
  }
  local_60 = *(undefined8 *)(lVar3 + 0x2200);
  uVar1 = *(undefined4 *)(lVar3 + 4);
  local_64 = *(undefined4 *)
              (*(longlong *)(lVar6 + 0x150) + -4 + (longlong)*(int *)(lVar6 + 0x148) * 4);
  FUN_1400941ae(&local_50,0x4000000);
  local_58 = local_50;
  cVar4 = FUN_140081bec();
  puVar10 = &local_58;
  if (cVar4 != '\0') {
    puVar10 = (undefined8 *)(lVar3 + 0x118);
  }
  uVar2 = *puVar10;
  if ((*(byte *)(lVar3 + 0x2acc) & 8) != 0) {
    FUN_1400772a6("[popup] OpenPopupEx(0x%08X)\n",param_1);
  }
  iVar5 = *(int *)(lVar3 + 0x2148);
  if (iVar8 < iVar5) {
    if ((*(int *)(*(longlong *)(lVar3 + 0x2150) + (longlong)iVar8 * 0x38) == param_1) &&
       ((lVar6 = *(longlong *)(lVar3 + 0x2150) + (longlong)iVar8 * 0x38, (param_2 & 0x20) != 0 ||
        (*(int *)(lVar6 + 0x1c) == *(int *)(lVar3 + 4) + -1)))) {
      *(undefined4 *)(lVar6 + 0x1c) = uVar1;
      goto LAB_140094176;
    }
    FUN_140094394(iVar8,1);
    iVar5 = *(int *)(lVar3 + 0x2148);
  }
  if (iVar5 == *(int *)(lVar3 + 0x214c)) {
    if (iVar5 == 0) {
      iVar8 = 8;
    }
    else {
      iVar8 = iVar5 / 2 + iVar5;
    }
    iVar9 = iVar5 + 1;
    if (iVar5 + 1 < iVar8) {
      iVar9 = iVar8;
    }
    lVar6 = FUN_140077ab4();
    if (*(longlong *)(lVar3 + 0x2150) != 0) {
      FUN_1401c5180(lVar6,*(longlong *)(lVar3 + 0x2150),(longlong)*(int *)(lVar3 + 0x2148) * 0x38);
      FUN_140077b90();
    }
    *(longlong *)(lVar3 + 0x2150) = lVar6;
    *(int *)(lVar3 + 0x214c) = iVar9;
    iVar5 = *(int *)(lVar3 + 0x2148);
  }
  else {
    lVar6 = *(longlong *)(lVar3 + 0x2150);
  }
  lVar7 = (longlong)iVar5 * 0x38;
  *(int *)(lVar6 + lVar7) = param_1;
  *(undefined4 *)(lVar6 + 4 + lVar7) = 0;
  *(undefined8 *)(lVar6 + 8 + lVar7) = 0;
  *(undefined8 *)(lVar6 + 0x10 + lVar7) = local_60;
  *(undefined4 *)(lVar6 + 0x18 + lVar7) = 0xffffffff;
  *(undefined4 *)(lVar6 + 0x1c + lVar7) = uVar1;
  *(undefined4 *)(lVar6 + 0x20 + lVar7) = local_64;
  *(undefined8 *)(lVar6 + 0x24 + lVar7) = local_50;
  *(undefined8 *)(lVar6 + 0x2c + lVar7) = uVar2;
  *(undefined4 *)(lVar6 + 0x34 + lVar7) = 0;
  *(int *)(lVar3 + 0x2148) = *(int *)(lVar3 + 0x2148) + 1;
LAB_140094176:
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_88);
}

