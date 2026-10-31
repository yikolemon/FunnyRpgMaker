/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140072683 */

ulonglong FUN_140072683(longlong param_1,uint param_2,ushort *param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  longlong *plVar4;
  ushort uVar5;
  ulonglong uVar6;
  undefined4 extraout_var;
  longlong lVar7;
  uint uVar8;
  ushort uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  
  if (*(longlong *)(param_1 + 0x480) == 0) {
    if (*(uint *)(param_1 + 0x478) <= param_2) {
      return 6;
    }
  }
  else {
    if (*(uint *)(param_1 + 0x28) <= param_2) {
      return 6;
    }
    param_2 = *(uint *)(*(longlong *)(param_1 + 0x480) + (ulonglong)param_2 * 4);
  }
  if (1 < *(int *)(param_1 + 0x474) - 1U) {
    if (*(int *)(param_1 + 0x474) != 3) {
      return 2;
    }
    uVar8 = *(uint *)(*(longlong *)(param_1 + 0x468) + 8 + (ulonglong)(param_2 << 2));
    uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
    if (*(uint *)(param_1 + 0x4d4) < uVar8 + 4) {
      return 3;
    }
    plVar4 = *(longlong **)(param_1 + 0xa0);
    uVar6 = FUN_140020a41((longlong)plVar4,uVar8 + *(int *)(param_1 + 0x4d0));
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    iVar11 = FUN_140021063(plVar4,4);
    if (iVar11 != 0) {
      return CONCAT44(extraout_var,iVar11);
    }
    uVar5 = FUN_1400211ce((longlong)plVar4);
    FUN_1400211ce((longlong)plVar4);
    FUN_140021187(plVar4);
    *param_3 = uVar5;
    param_3[1] = uVar5;
    iVar11 = FUN_14001ecff((uint)uVar5 << 6,(uint)*(ushort *)(param_1 + 0x112));
    lVar7 = (longlong)iVar11;
    lVar10 = *(short *)(param_1 + 0x13c) * lVar7;
    *(int *)(param_3 + 6) = (int)((ulonglong)(lVar10 + 0x8000 + (lVar10 >> 0x3f)) >> 0x10);
    lVar10 = *(short *)(param_1 + 0x13e) * lVar7;
    *(int *)(param_3 + 8) = (int)((ulonglong)(lVar10 + 0x8000 + (lVar10 >> 0x3f)) >> 0x10);
    lVar10 = ((longlong)*(short *)(param_1 + 0x140) +
             ((longlong)*(short *)(param_1 + 0x13c) - (longlong)*(short *)(param_1 + 0x13e))) *
             lVar7;
    *(int *)(param_3 + 10) = (int)((ulonglong)(lVar10 + 0x8000 + (lVar10 >> 0x3f)) >> 0x10);
    lVar7 = (ulonglong)*(ushort *)(param_1 + 0x142) * lVar7;
    *(int *)(param_3 + 0xc) = (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10);
    *(int *)(param_3 + 2) = iVar11;
    goto LAB_140072903;
  }
  lVar7 = *(longlong *)(param_1 + 0x468);
  uVar6 = (ulonglong)(param_2 * 0x30);
  uVar5 = (ushort)*(byte *)(lVar7 + 0x34 + uVar6);
  *param_3 = uVar5;
  uVar9 = (ushort)*(byte *)(lVar7 + 0x35 + uVar6);
  param_3[1] = uVar9;
  cVar1 = *(char *)(lVar7 + 0x18 + uVar6);
  iVar11 = (int)cVar1 << 6;
  *(int *)(param_3 + 6) = iVar11;
  cVar2 = *(char *)(lVar7 + 0x19 + uVar6);
  iVar12 = cVar2 * 0x40;
  *(int *)(param_3 + 8) = iVar12;
  cVar3 = *(char *)(lVar7 + 0x21 + uVar6);
  if (cVar2 < '\x01') {
    if (cVar2 == '\0' && cVar1 == '\0') {
      cVar1 = *(char *)(lVar7 + 0x20 + uVar6);
      if (cVar3 == '\0' && cVar1 == '\0') {
        iVar11 = (uint)uVar9 << 6;
        *(int *)(param_3 + 6) = iVar11;
        iVar12 = 0;
      }
      else {
        iVar11 = (int)cVar1 << 6;
        *(int *)(param_3 + 6) = iVar11;
        iVar12 = (int)cVar3 << 6;
      }
      goto LAB_1400728a2;
    }
  }
  else if (cVar3 < '\0') {
    iVar12 = cVar2 * -0x40;
LAB_1400728a2:
    *(int *)(param_3 + 8) = iVar12;
  }
  *(int *)(param_3 + 10) = iVar11 - iVar12;
  if (iVar11 - iVar12 == 0) {
    *(uint *)(param_3 + 10) = (uint)uVar9 * 0x40;
    *(uint *)(param_3 + 8) = iVar12 + (uint)uVar9 * -0x40;
  }
  *(uint *)(param_3 + 0xc) =
       ((int)*(char *)(lVar7 + 0x1f + uVar6) +
       (uint)*(byte *)(lVar7 + 0x1a + uVar6) + (int)*(char *)(lVar7 + 0x1e + uVar6)) * 0x40;
  iVar11 = FUN_14001ecff((uint)uVar5 << 6,(uint)*(ushort *)(param_1 + 0x112));
  *(int *)(param_3 + 2) = iVar11;
  iVar11 = FUN_14001ecff((uint)param_3[1] << 6,(uint)*(ushort *)(param_1 + 0x112));
LAB_140072903:
  *(int *)(param_3 + 4) = iVar11;
  return 0;
}

