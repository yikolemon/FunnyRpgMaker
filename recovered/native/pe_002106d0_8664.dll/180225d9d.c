/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180225d9d */

undefined8 FUN_180225d9d(longlong param_1,uint param_2,undefined8 *param_3)

{
  int *piVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  byte *pbVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 local_98 [32];
  undefined8 *local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)local_98;
  lVar6 = *(longlong *)(param_1 + 0x4e0);
  if ((lVar6 != 0) && (pcVar3 = *(char **)(lVar6 + 0x38), pcVar3 != (char *)0x0)) {
    uVar2 = *(uint *)(lVar6 + 0x88);
    if ((pcVar3 <= (char *)(*(longlong *)(lVar6 + 0x80) + (ulonglong)uVar2 + -5)) &&
       (*pcVar3 == '\x01')) {
      uVar12 = *(uint *)(pcVar3 + 1);
      uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
      if (uVar12 <= uVar2 / 7) {
        lVar11 = *(longlong *)(lVar6 + 0x80) + (ulonglong)uVar2;
        uVar7 = 0;
        if (((char *)(lVar11 - (ulonglong)(uVar12 * 7)) < pcVar3 + 5) || (uVar12 == 0))
        goto LAB_180225eb5;
        pbVar5 = (byte *)(pcVar3 + 0xb);
        do {
          if (((ushort)(*(ushort *)(pbVar5 + -6) << 8 | *(ushort *)(pbVar5 + -6) >> 8) <= param_2)
             && (param_2 <= (ushort)(*(ushort *)(pbVar5 + -4) << 8 | *(ushort *)(pbVar5 + -4) >> 8))
             ) {
            pbVar5 = (byte *)(pcVar3 + (ulonglong)*pbVar5 + (ulonglong)pbVar5[-1] * 0x100 +
                                       (ulonglong)pbVar5[-2] * 0x10000);
            if ((byte *)(lVar11 - 1U) < pbVar5) break;
            uVar7 = 0;
            if ((2 < *pbVar5) || (uVar7 = 0, (byte *)(lVar11 - 8U) < pbVar5 + 1))
            goto LAB_180225eb5;
            lVar14 = (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x1c);
            lVar9 = ((longlong)(short)((ushort)pbVar5[1] << 8) | (ulonglong)pbVar5[2]) * lVar14;
            iVar4 = (int)((ulonglong)(lVar9 + 0x8000 + (lVar9 >> 0x3f)) >> 0x10);
            lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x20);
            lVar15 = ((longlong)(short)((ushort)pbVar5[3] << 8) | (ulonglong)pbVar5[4]) * lVar9;
            iVar8 = (int)((ulonglong)(lVar15 + 0x8000 + (lVar15 >> 0x3f)) >> 0x10);
            lVar14 = ((longlong)(short)((ushort)pbVar5[5] << 8) | (ulonglong)pbVar5[6]) * lVar14;
            iVar13 = (int)((ulonglong)(lVar14 + 0x8000 + (lVar14 >> 0x3f)) >> 0x10);
            lVar9 = ((longlong)(short)((ushort)pbVar5[7] << 8) | (ulonglong)pbVar5[8]) * lVar9;
            iVar10 = (int)((ulonglong)(lVar9 + 0x8000 + (lVar9 >> 0x3f)) >> 0x10);
            if (*pbVar5 == 2) {
              local_68 = 0;
              uStack_60 = 0;
              if ((byte *)(lVar11 + -4) < pbVar5 + 9) break;
              uVar2 = *(uint *)(pbVar5 + 9);
              local_78 = &local_68;
              FUN_18022946f(param_1,lVar6,
                            uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                            uVar2 << 0x18,4);
              lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x1c);
              lVar6 = (int)local_68 * lVar11;
              iVar4 = (int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10) + iVar4;
              lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x20);
              lVar6 = local_68._4_4_ * lVar9;
              iVar8 = (int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10) + iVar8;
              lVar11 = (int)uStack_60 * lVar11;
              iVar13 = (int)((ulonglong)(lVar11 + 0x8000 + (lVar11 >> 0x3f)) >> 0x10) + iVar13;
              lVar9 = uStack_60._4_4_ * lVar9;
              iVar10 = (int)((ulonglong)(lVar9 + 0x8000 + (lVar9 >> 0x3f)) >> 0x10) + iVar10;
            }
            local_58 = iVar13;
            iStack_50 = iVar13;
            local_68 = CONCAT44(iVar8,iVar4);
            uStack_60 = CONCAT44(iVar10,iVar4);
            iStack_54 = iVar10;
            iStack_4c = iVar8;
            lVar6 = *(longlong *)(param_1 + 0xd0);
            lVar11 = 0;
            do {
              uVar2 = *(uint *)(lVar6 + 0x18);
              if ((uVar2 & 1) != 0) {
                FUN_1801cb5c7((longlong)&local_68 + lVar11);
                lVar6 = *(longlong *)(param_1 + 0xd0);
                uVar2 = *(uint *)(lVar6 + 0x18);
              }
              if ((uVar2 & 2) != 0) {
                *(int *)((longlong)&local_68 + lVar11) =
                     *(int *)((longlong)&local_68 + lVar11) + *(int *)(lVar6 + 0x10);
                uVar2 = *(uint *)(lVar6 + 0x14);
                piVar1 = (int *)((longlong)&local_68 + lVar11 + 4);
                *piVar1 = *piVar1 + uVar2;
              }
              lVar11 = lVar11 + 8;
            } while (lVar11 != 0x20);
            *param_3 = local_68;
            param_3[1] = uStack_60;
            *(int *)(param_3 + 2) = local_58;
            *(int *)((longlong)param_3 + 0x14) = iStack_54;
            *(int *)(param_3 + 3) = iStack_50;
            *(int *)((longlong)param_3 + 0x1c) = iStack_4c;
            uVar7 = CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
            goto LAB_180225eb5;
          }
          pbVar5 = pbVar5 + 7;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
    }
  }
  uVar7 = 0;
LAB_180225eb5:
  if (DAT_180402640 != (local_40 ^ (ulonglong)local_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_40 ^ (ulonglong)local_98);
  }
  return uVar7;
}

