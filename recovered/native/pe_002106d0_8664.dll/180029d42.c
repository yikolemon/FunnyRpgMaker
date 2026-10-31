/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180029d42 */

undefined8 * FUN_180029d42(undefined8 *param_1,longlong *param_2,double param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  short *psVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  char cVar13;
  ulonglong uVar14;
  undefined1 auStack_f8 [32];
  uint local_d8;
  undefined4 *local_d0;
  uint local_c8;
  undefined8 local_c0;
  uint local_ac;
  undefined8 *local_a8;
  longlong *local_a0;
  ulonglong local_98;
  int local_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined4 local_83;
  undefined7 uStack_7f;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  ulonglong local_60;
  
  local_60 = DAT_180402640 ^ (ulonglong)auStack_f8;
  iVar2 = FUN_18027e660();
  uVar10 = (uint)(iVar2 != 0);
  if (0x7fefffffffffffff < (ulonglong)ABS(param_3)) {
    local_88 = 0x8000;
    local_84 = 0x20;
    uStack_7f = 0xffffffff000000;
    local_83 = 0;
    local_d8 = uVar10;
    FUN_180028d3e(param_1,param_2,NAN(param_3));
    goto LAB_18002a13a;
  }
  FUN_18002a181(&local_98);
  lVar3 = 0x3f;
  if ((local_98 | 1) != 0) {
    for (; (local_98 | 1) >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  uVar14 = (ulonglong)(byte)(&DAT_1802b1db0)[lVar3] -
           (ulonglong)
           (local_98 < *(ulonglong *)(&DAT_1802b1df0 + (ulonglong)(byte)(&DAT_1802b1db0)[lVar3] * 8)
           );
  iVar1 = (int)uVar14;
  if (iVar1 + local_90 + 3U < 0x14) {
    local_d0 = &local_78;
    local_78 = 0x8000;
    uStack_6f = 0xffffffff000000;
    uStack_74 = 0x20;
    uStack_70 = 0;
    local_c0 = 0;
    local_d8 = CONCAT31(local_d8._1_3_,0x2e);
    local_c8 = uVar10;
    FUN_18002a5cb(param_1,param_2,&local_98,uVar14 & 0xffffffff);
    goto LAB_18002a13a;
  }
  iVar9 = local_90 + iVar1;
  local_ac = (iVar1 + local_90) - 1;
  uVar12 = 1 - iVar9;
  if (0 < iVar9) {
    uVar12 = local_ac;
  }
  uVar7 = (ulonglong)((99 < (int)uVar12) + 4 + (uint)(iVar1 != 1) + uVar10 + iVar1);
  lVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar6 = lVar3 + uVar7;
  local_a8 = param_1;
  if (uVar4 < uVar6) {
    (*(code *)param_2[3])(param_2);
    lVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar6 = lVar3 + uVar7;
    if (uVar6 <= uVar4) goto LAB_180029ef3;
LAB_180029f45:
    (*(code *)param_2[3])(param_2);
  }
  else {
LAB_180029ef3:
    param_2[1] = uVar6;
    if (*param_2 != 0) {
      pcVar11 = (char *)(*param_2 + lVar3);
      if (iVar2 != 0) {
        *pcVar11 = '-';
        pcVar11 = pcVar11 + 1;
      }
      if (iVar1 == 1) {
        cVar13 = (char)local_98 + '0';
        psVar8 = (short *)(pcVar11 + 1);
      }
      else {
        FUN_180025acd(pcVar11,local_98,iVar1 + 1U);
        psVar8 = (short *)(pcVar11 + (iVar1 + 1U));
        cVar13 = pcVar11[1];
        pcVar11[1] = '.';
      }
      param_1 = local_a8;
      *pcVar11 = cVar13;
      *psVar8 = (ushort)(iVar9 < 1) * 0x200 + 0x2b65;
      if ((int)uVar12 < 100) {
        psVar8 = psVar8 + 1;
      }
      else {
        *(char *)(psVar8 + 1) = (char)(uVar12 / 100) + '0';
        psVar8 = (short *)((longlong)psVar8 + 3);
        uVar12 = uVar12 % 100;
      }
      *psVar8 = *(short *)(&DAT_1802b1ce0 + (ulonglong)uVar12 * 2);
      FUN_180024f0b(local_a8,psVar8 + 1,param_2);
      goto LAB_18002a13a;
    }
    if (uVar4 < uVar6 + uVar7) goto LAB_180029f45;
  }
  param_1 = local_a8;
  if (iVar2 != 0) {
    lVar3 = param_2[1];
    uVar6 = lVar3 + 1;
    if ((ulonglong)param_2[2] < uVar6) {
      (*(code *)param_2[3])(param_2);
      lVar3 = param_2[1];
      uVar6 = lVar3 + 1;
    }
    param_2[1] = uVar6;
    *(undefined1 *)(*param_2 + lVar3) = 0x2d;
  }
  if (iVar1 == 1) {
    FUN_180025acd(&local_78,local_98,1);
    lVar3 = (longlong)&local_78 + 1;
  }
  else {
    lVar3 = (longlong)&local_78 + uVar14 + 1;
    lVar5 = lVar3;
    if (2 < iVar1) {
      uVar10 = (iVar1 - 1U >> 1) + 1;
      uVar14 = local_98;
      do {
        local_98 = uVar14 / 100;
        *(undefined2 *)(lVar5 + -2) = *(undefined2 *)(&DAT_1802b1ce0 + (uVar14 % 100) * 2);
        lVar5 = lVar5 + -2;
        uVar10 = uVar10 - 1;
        uVar14 = local_98;
      } while (1 < uVar10);
    }
    uVar14 = local_98;
    if ((iVar1 - 1U & 1) != 0) {
      uVar14 = local_98 / 10;
      *(byte *)(lVar5 + -1) = (char)local_98 + (char)uVar14 * -10 | 0x30;
      lVar5 = lVar5 + -1;
    }
    *(undefined1 *)(lVar5 + -1) = 0x2e;
    FUN_180025acd(lVar5 + -2,uVar14,1);
  }
  FUN_180025857(&local_a0,&local_78,lVar3,param_2);
  lVar3 = local_a0[1];
  uVar14 = lVar3 + 1;
  if ((ulonglong)local_a0[2] < uVar14) {
    (*(code *)local_a0[3])(local_a0);
    lVar3 = local_a0[1];
    uVar14 = lVar3 + 1;
  }
  local_a0[1] = uVar14;
  *(undefined1 *)(*local_a0 + lVar3) = 0x65;
  FUN_180029346(&local_78,local_ac,local_a0);
  *param_1 = CONCAT44(uStack_74,local_78);
LAB_18002a13a:
  if (DAT_180402640 != (local_60 ^ (ulonglong)auStack_f8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_60 ^ (ulonglong)auStack_f8);
  }
  return param_1;
}

