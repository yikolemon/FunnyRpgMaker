/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018187b */

int FUN_14018187b(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_a8 [40];
  undefined4 *local_80;
  longlong local_78;
  undefined4 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_a8;
  iVar9 = 6;
  if ((param_1 != (longlong *)0x0) && (lVar1 = *param_1, lVar1 != 0)) {
    if (param_1[1] == 0) {
      lVar16 = 0;
    }
    else {
      lVar12 = param_1[1];
      lVar17 = 0;
      do {
        puVar15 = *(undefined8 **)(lVar12 + 8);
        local_70 = (undefined4 *)0x0;
        for (; puVar15 != (undefined8 *)0x0; puVar15 = (undefined8 *)puVar15[5]) {
          iVar9 = *(int *)(puVar15 + 4);
          if (iVar9 == 3) {
            local_68 = *puVar15;
            local_60 = puVar15[2];
            uStack_58 = puVar15[3];
            local_50 = puVar15[1];
            iVar9 = FUN_14018202d(lVar1,&local_68,0x20,&local_70);
LAB_1401819f4:
            if (iVar9 != 0) goto LAB_140181a62;
          }
          else {
            if (iVar9 == 2) {
              local_68 = *puVar15;
              local_60 = puVar15[2];
              uStack_58 = puVar15[1];
              uVar13 = (int)local_68 + (int)uStack_58 + (int)local_60 * -2;
              uVar14 = -uVar13;
              if ((int)uVar14 < 0) {
                uVar14 = uVar13;
              }
              uVar10 = ((int)((ulonglong)local_68 >> 0x20) + (int)((ulonglong)uStack_58 >> 0x20)) -
                       ((uint)(local_60 >> 0x1f) & 0xfffffffe);
              uVar13 = -uVar10;
              if ((int)uVar13 < 0) {
                uVar13 = uVar10;
              }
              if (uVar13 < uVar14) {
                uVar13 = uVar14;
              }
              iVar9 = 1;
              if (8 < uVar13) {
                uVar11 = (ulonglong)uVar13;
                do {
                  uVar11 = uVar11 >> 2;
                  iVar9 = iVar9 * 2;
                  bVar3 = 0x23 < uVar13;
                  uVar13 = (uint)uVar11;
                } while (bVar3);
              }
              iVar9 = FUN_140181f30(lVar1,&local_68,iVar9,&local_70);
              goto LAB_1401819f4;
            }
            if (iVar9 != 1) {
              iVar9 = 6;
              goto LAB_140181a62;
            }
            iVar9 = FUN_1401816c5(lVar1,&local_80);
            if (iVar9 != 0) goto LAB_140181a62;
            *(undefined8 *)(local_80 + 8) = puVar15[4];
            uVar4 = *(undefined4 *)puVar15;
            uVar5 = *(undefined4 *)((longlong)puVar15 + 4);
            uVar6 = *(undefined4 *)(puVar15 + 1);
            uVar7 = *(undefined4 *)((longlong)puVar15 + 0xc);
            uVar8 = puVar15[3];
            *(undefined8 *)(local_80 + 4) = puVar15[2];
            *(undefined8 *)(local_80 + 6) = uVar8;
            *local_80 = uVar4;
            local_80[1] = uVar5;
            local_80[2] = uVar6;
            local_80[3] = uVar7;
            *(undefined4 **)(local_80 + 10) = local_70;
            local_70 = local_80;
          }
        }
        iVar9 = FUN_140181642(lVar1,&local_78);
        lVar16 = local_78;
        if (iVar9 != 0) goto LAB_140181a62;
        *(longlong *)(local_78 + 0x10) = lVar17;
        *(undefined4 **)(local_78 + 8) = local_70;
        local_70 = (undefined4 *)0x0;
        lVar2 = *(longlong *)(lVar12 + 0x10);
        local_78 = lVar12;
        FUN_1401821c2(lVar1,&local_78);
        lVar12 = lVar2;
        lVar17 = lVar16;
      } while (lVar2 != 0);
    }
    param_1[1] = lVar16;
    iVar9 = 0;
  }
LAB_140181a62:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_a8);
  }
  return iVar9;
}

