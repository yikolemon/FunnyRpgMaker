/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400e1ef0 */

void FUN_1400e1ef0(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,char param_7,char param_8)

{
  longlong lVar1;
  int iVar2;
  short *psVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  short sVar8;
  int *piVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 *****pppppuVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  short *psVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  short *psVar19;
  undefined2 *puVar20;
  ulonglong uVar21;
  undefined1 uVar22;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  ulonglong local_b8;
  undefined1 local_a8;
  int local_a4;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 ****local_88;
  undefined8 uStack_80;
  longlong local_78;
  ulonglong local_70;
  undefined4 local_68;
  ushort local_64;
  uint local_62;
  ulonglong local_58;
  
  puVar17 = auStack_d8;
  puVar16 = auStack_d8;
  local_58 = DAT_1401c9640 ^ (ulonglong)auStack_d8;
  local_98 = param_6;
  local_68 = 0x250021;
  local_62 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 7;
  local_88 = (undefined8 *****)0x0;
  local_64 = (ushort)param_7;
  if (param_8 != '\0') {
    local_62 = (uint)local_64;
    local_64 = (short)param_8;
  }
  local_a0 = param_1;
  local_90 = param_4;
  piVar9 = (int *)FUN_140113dd4();
  local_a4 = *piVar9;
  uVar18 = 0x10;
  while( true ) {
    lVar10 = local_78;
    if (local_70 - local_78 < uVar18) {
      local_b8 = local_b8 & 0xffffffffffff0000;
      FUN_1400fa8f0(&local_88,uVar18,local_a8,uVar18);
    }
    else {
      lVar1 = local_78 + uVar18;
      if (((local_78 != lVar1) && (7 < local_70)) && (DAT_140166098 != '\0')) {
        uVar11 = (longlong)local_88 + (local_78 + 1) * 2;
        uVar21 = (longlong)local_88 + lVar1 * 2 + 2;
        uVar13 = local_70 * 2 + 9 + (longlong)local_88 & 0xfffffffffffffff8;
        uVar14 = uVar13;
        if (uVar11 <= uVar13) {
          uVar14 = uVar11;
        }
        if (uVar13 < uVar21) {
          uVar21 = uVar13;
        }
        _guard_check_icall(local_88,uVar13,uVar14,uVar21);
      }
      pppppuVar12 = &local_88;
      if (7 < local_70) {
        pppppuVar12 = (undefined8 *****)local_88;
      }
      puVar20 = (undefined2 *)((longlong)pppppuVar12 + lVar10 * 2);
      uVar11 = uVar18;
      local_78 = lVar1;
      if (uVar18 != 0) {
        for (; uVar11 != 0; uVar11 = uVar11 - 1) {
          *puVar20 = 0;
          puVar20 = puVar20 + 1;
        }
      }
      *(undefined2 *)((longlong)pppppuVar12 + lVar1 * 2) = 0;
    }
    local_b8 = *(ulonglong *)(local_a0 + 0x10);
    pppppuVar12 = &local_88;
    if (7 < local_70) {
      pppppuVar12 = (undefined8 *****)local_88;
    }
    lVar10 = FUN_140109408(pppppuVar12,local_78,&local_68,local_98);
    if (lVar10 != 0) {
      *piVar9 = local_a4;
      uVar22 = *(undefined1 *)param_3;
      lVar1 = *(longlong *)(param_3 + 2);
      if (local_70 < 8) {
        psVar19 = (short *)((longlong)&local_88 + lVar10 * 2);
        pppppuVar12 = &local_88;
      }
      else {
        psVar19 = (short *)((longlong)local_88 + lVar10 * 2);
        pppppuVar12 = (undefined8 *****)local_88;
      }
      psVar15 = (short *)((longlong)pppppuVar12 + 2);
      if (psVar15 == psVar19) goto LAB_1400e21cd;
      goto LAB_1400e2166;
    }
    if (*piVar9 == 0x16) break;
    uVar18 = uVar18 * 2;
  }
  FUN_1400e1c00(local_90,4);
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  *param_2 = *param_3;
  param_2[1] = uVar5;
  param_2[2] = uVar6;
  param_2[3] = uVar7;
  puVar17 = auStack_d8;
  if (local_70 < 8) goto LAB_1400e2275;
  if (DAT_140166098 != '\0') {
    uVar18 = (longlong)local_88 + (local_70 + 1) * 2;
    uVar11 = (longlong)local_88 + (local_78 + 1) * 2;
    uVar14 = uVar18 + 7 & 0xfffffffffffffff8;
    uVar21 = uVar14;
    if (uVar11 <= uVar14) {
      uVar21 = uVar11;
    }
    if (uVar14 < uVar18) {
      uVar18 = uVar14;
    }
    _guard_check_icall(local_88,uVar14,uVar21,uVar18);
  }
  pppppuVar12 = (undefined8 *****)local_88;
  puVar16 = auStack_d8;
  if (0xfff < local_70 * 2 + 2) {
    pppppuVar12 = (undefined8 *****)local_88[-1];
    uVar18 = (longlong)local_88 + (-8 - (longlong)pppppuVar12);
joined_r0x0001400e225b:
    puVar16 = auStack_d8;
    if (0x1f < uVar18) {
      pppppuVar12 = (undefined8 *****)0x5;
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar16 = auStack_d0;
    }
  }
  goto LAB_1400e2270;
LAB_1400e2166:
  do {
    if (lVar1 == 0) {
LAB_1400e21b9:
      uVar22 = 1;
    }
    else {
      sVar8 = *psVar15;
      if (**(longlong **)(lVar1 + 0x40) == 0) {
LAB_1400e219b:
        sVar8 = (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar1,sVar8);
      }
      else {
        iVar2 = **(int **)(lVar1 + 0x58);
        if (iVar2 < 1) goto LAB_1400e219b;
        **(int **)(lVar1 + 0x58) = iVar2 + -1;
        psVar3 = (short *)**(longlong **)(lVar1 + 0x40);
        **(longlong **)(lVar1 + 0x40) = (longlong)(psVar3 + 1);
        *psVar3 = sVar8;
      }
      if (sVar8 == -1) goto LAB_1400e21b9;
    }
    psVar15 = psVar15 + 1;
  } while (psVar15 != psVar19);
LAB_1400e21cd:
  *(undefined1 *)param_2 = uVar22;
  *(undefined4 *)((longlong)param_2 + 1) = *(undefined4 *)((longlong)param_3 + 1);
  *(undefined2 *)((longlong)param_2 + 5) = *(undefined2 *)((longlong)param_3 + 5);
  *(undefined1 *)((longlong)param_2 + 7) = *(undefined1 *)((longlong)param_3 + 7);
  *(longlong *)(param_2 + 2) = lVar1;
  if (local_70 < 8) goto LAB_1400e2275;
  if (DAT_140166098 != '\0') {
    uVar18 = (longlong)local_88 + (local_70 + 1) * 2;
    uVar11 = (longlong)local_88 + (local_78 + 1) * 2;
    uVar14 = uVar18 + 7 & 0xfffffffffffffff8;
    uVar21 = uVar14;
    if (uVar11 <= uVar14) {
      uVar21 = uVar11;
    }
    if (uVar14 < uVar18) {
      uVar18 = uVar14;
    }
    _guard_check_icall(local_88,uVar14,uVar21,uVar18);
  }
  pppppuVar12 = (undefined8 *****)local_88;
  if (0xfff < local_70 * 2 + 2) {
    pppppuVar12 = (undefined8 *****)local_88[-1];
    uVar18 = (longlong)local_88 + (-8 - (longlong)pppppuVar12);
    goto joined_r0x0001400e225b;
  }
LAB_1400e2270:
  *(undefined8 *)(puVar16 + -8) = 0x1400e2275;
  thunk_FUN_1400ddcd0(pppppuVar12);
  puVar17 = puVar16;
LAB_1400e2275:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar17 + -8) = &UNK_1400e2284;
  FUN_1400d3720(local_58 ^ (ulonglong)puVar17);
}

