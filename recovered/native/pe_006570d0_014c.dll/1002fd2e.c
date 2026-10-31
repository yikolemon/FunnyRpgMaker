/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002fd2e */

void __thiscall FUN_1002fd2e(int *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  iVar10 = param_1[1];
  if (iVar10 == 0) {
    local_2c = 0;
    local_24 = 0;
    local_30 = 0;
    local_28 = 0;
  }
  else {
    local_30 = 0;
    iVar19 = 0;
    local_28 = 0;
    local_2c = 0;
    local_24 = 0;
    do {
      uVar11 = *(uint *)(*param_1 + iVar19 * 4);
      lVar3 = (ulonglong)param_3 * (ulonglong)uVar11;
      uVar12 = (uint)((ulonglong)param_2 * (ulonglong)uVar11 >> 0x20);
      uVar7 = (uint)((ulonglong)param_2 * (ulonglong)uVar11);
      lVar5 = lVar3 + (ulonglong)uVar12;
      uVar8 = (uint)((ulonglong)param_5 * (ulonglong)uVar11);
      uVar13 = (uint)((ulonglong)param_4 * (ulonglong)uVar11 >> 0x20);
      uVar9 = (uint)((ulonglong)param_4 * (ulonglong)uVar11);
      uVar16 = uVar13 + uVar8;
      iVar1 = uVar7 + local_2c;
      uVar7 = (uint)CARRY4(uVar7,local_2c);
      lVar6 = lVar5 + (ulonglong)uVar7;
      uVar20 = (uint)lVar6;
      uVar14 = (uint)((ulonglong)lVar6 >> 0x20);
      uVar7 = (uint)(CARRY4((uint)CARRY4(uVar12,(uint)lVar3),(uint)((ulonglong)lVar3 >> 0x20)) ||
                    CARRY4((uint)((ulonglong)lVar5 >> 0x20),(uint)CARRY4((uint)lVar5,uVar7)));
      uVar2 = uVar16 + local_28;
      uVar17 = uVar2 + uVar7;
      uVar15 = uVar14 + uVar9;
      uVar9 = (uint)CARRY4(uVar14,uVar9);
      uVar18 = uVar17 + uVar9;
      local_2c = uVar20 + local_24;
      uVar12 = (uint)CARRY4(uVar20,local_24);
      uVar14 = uVar15 + local_30;
      local_24 = uVar14 + uVar12;
      uVar12 = (uint)(CARRY4(uVar15,local_30) || CARRY4(uVar14,uVar12));
      local_30 = uVar18 + uVar12;
      local_28 = (int)((ulonglong)param_5 * (ulonglong)uVar11 >> 0x20) + (uint)CARRY4(uVar13,uVar8)
                 + (uint)(CARRY4(uVar16,local_28) || CARRY4(uVar2,uVar7)) +
                 (uint)CARRY4(uVar17,uVar9) + (uint)CARRY4(uVar18,uVar12);
      *(int *)(*param_1 + iVar19 * 4) = iVar1;
      iVar19 = iVar19 + 1;
    } while (iVar10 != iVar19);
  }
  if ((local_28 != 0 || local_24 != 0) || (local_30 != 0 || local_2c != 0)) {
    do {
      uVar9 = local_28;
      uVar7 = local_24;
      iVar10 = param_1[1];
      uVar11 = iVar10 + 1;
      if ((uint)param_1[2] < uVar11) {
        (*(code *)param_1[3])(param_1,uVar11);
        iVar10 = param_1[1];
        uVar11 = iVar10 + 1;
      }
      param_1[1] = uVar11;
      *(uint *)(*param_1 + iVar10 * 4) = local_2c;
      bVar4 = local_30 != 0;
      local_24 = local_30;
      local_28 = 0;
      local_30 = uVar9;
      local_2c = uVar7;
    } while ((uVar9 != 0 || uVar7 != 0) || bVar4);
  }
  return;
}

