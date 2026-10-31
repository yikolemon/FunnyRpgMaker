/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001e465 */

undefined8 * FUN_14001e465(undefined8 *param_1,longlong *param_2,float param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  char *pcVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  char *pcVar15;
  uint uVar16;
  char cVar17;
  undefined1 in_register_00001284 [12];
  undefined1 auStack_e8 [32];
  uint local_c8;
  undefined4 *local_c0;
  uint local_b8;
  undefined8 local_b0;
  int local_a0;
  uint local_9c;
  undefined8 *local_98;
  longlong *local_90;
  ulonglong local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined4 local_7b;
  undefined7 uStack_77;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined1 uStack_68;
  undefined7 uStack_67;
  ulonglong local_60;
  
  auVar1._4_12_ = in_register_00001284;
  auVar1._0_4_ = param_3;
  local_60 = DAT_140f17b40 ^ (ulonglong)auStack_e8;
  iVar4 = FUN_14019e8c0((double)param_3);
  uVar14 = (uint)(iVar4 != 0);
  if (0x7f7fffff < (uint)ABS(param_3)) {
    local_80 = 0x8000;
    local_7c = 0x20;
    uStack_77 = 0xffffffff000000;
    local_7b = 0;
    local_c8 = uVar14;
    FUN_14001e874(param_1,param_2,NAN(param_3));
    goto LAB_14001e82d;
  }
  uVar6 = FUN_14001e941(auVar1._0_8_);
  uVar5 = (uint)uVar6 | 1;
  uVar16 = 0x1f;
  if (uVar5 != 0) {
    for (; uVar5 >> uVar16 == 0; uVar16 = uVar16 - 1) {
    }
  }
  uVar12 = (uVar6 & 0xffffffff) + *(longlong *)(&DAT_1401c9bf0 + (ulonglong)uVar16 * 8);
  iVar2 = (int)(uVar6 >> 0x20);
  iVar3 = (int)(uVar12 >> 0x20);
  local_88 = uVar6;
  if (iVar2 + iVar3 + 3U < 0xb) {
    local_c0 = &local_70;
    local_70 = 0x8000;
    uStack_67 = 0xffffffff000000;
    uStack_6c = 0x20;
    uStack_68 = 0;
    local_b0 = 0;
    local_c8 = CONCAT31(local_c8._1_3_,0x2e);
    local_b8 = uVar14;
    FUN_14001ec05(param_1,param_2,&local_88,uVar12 >> 0x20);
    goto LAB_14001e82d;
  }
  local_a0 = iVar2 + iVar3;
  local_9c = (iVar2 + iVar3) - 1;
  uVar16 = 1 - local_a0;
  if (0 < local_a0) {
    uVar16 = local_9c;
  }
  uVar13 = (ulonglong)((99 < (int)uVar16) + 4 + (uint)(iVar3 != 1) + uVar14 + iVar3);
  lVar7 = param_2[1];
  uVar8 = param_2[2];
  uVar10 = lVar7 + uVar13;
  local_98 = param_1;
  if (uVar8 < uVar10) {
    (*(code *)param_2[3])(param_2);
    lVar7 = param_2[1];
    uVar8 = param_2[2];
    uVar10 = lVar7 + uVar13;
    if (uVar10 <= uVar8) goto LAB_14001e606;
LAB_14001e65c:
    (*(code *)param_2[3])(param_2);
  }
  else {
LAB_14001e606:
    param_2[1] = uVar10;
    if (*param_2 != 0) {
      pcVar15 = (char *)(*param_2 + lVar7);
      if (iVar4 != 0) {
        *pcVar15 = '-';
        pcVar15 = pcVar15 + 1;
      }
      if (iVar3 == 1) {
        cVar17 = (char)uVar6 + '0';
        pcVar11 = pcVar15;
      }
      else {
        FUN_14001a250(pcVar15,uVar6 & 0xffffffff,iVar3 + 1);
        cVar17 = pcVar15[1];
        pcVar15[1] = '.';
        pcVar11 = pcVar15 + iVar3;
      }
      param_1 = local_98;
      *pcVar15 = cVar17;
      *(ushort *)(pcVar11 + 1) = (ushort)(local_a0 < 1) * 0x200 + 0x2b65;
      if ((int)uVar16 < 100) {
        pcVar11 = pcVar11 + 3;
      }
      else {
        pcVar11[3] = (char)(uVar16 / 100) + '0';
        pcVar11 = pcVar11 + 4;
        uVar16 = uVar16 % 100;
      }
      *(undefined2 *)pcVar11 = *(undefined2 *)(&DAT_1401c9cf0 + (ulonglong)uVar16 * 2);
      FUN_14001a559(local_98,pcVar11 + 2,param_2);
      goto LAB_14001e82d;
    }
    if (uVar8 < uVar10 + uVar13) goto LAB_14001e65c;
  }
  param_1 = local_98;
  if (iVar4 != 0) {
    lVar7 = param_2[1];
    uVar10 = lVar7 + 1;
    if ((ulonglong)param_2[2] < uVar10) {
      (*(code *)param_2[3])(param_2);
      lVar7 = param_2[1];
      uVar10 = lVar7 + 1;
    }
    param_2[1] = uVar10;
    *(undefined1 *)(*param_2 + lVar7) = 0x2d;
  }
  if (iVar3 == 1) {
    FUN_14001a250(&local_70,uVar6 & 0xffffffff,uVar12 >> 0x20);
    lVar7 = (longlong)&local_70 + 1;
  }
  else {
    lVar7 = (longlong)&local_70 + ((longlong)uVar12 >> 0x20) + 1;
    lVar9 = lVar7;
    if (iVar3 < 3) {
      uVar12 = uVar6 & 0xffffffff;
    }
    else {
      uVar14 = (iVar3 - 1U >> 1) + 1;
      do {
        iVar4 = (int)uVar6;
        uVar12 = (uVar6 & 0xffffffff) / 100;
        uVar6 = (uVar6 & 0xffffffff) / 100;
        *(undefined2 *)(lVar9 + -2) =
             *(undefined2 *)(&DAT_1401c9cf0 + (ulonglong)(uint)(iVar4 + (int)uVar6 * -100) * 2);
        lVar9 = lVar9 + -2;
        uVar14 = uVar14 - 1;
      } while (1 < uVar14);
    }
    uVar6 = uVar12;
    if ((iVar3 - 1U & 1) != 0) {
      uVar6 = uVar12 / 10;
      *(byte *)(lVar9 + -1) = (char)uVar12 + (char)(uVar12 / 10) * -10 | 0x30;
      lVar9 = lVar9 + -1;
    }
    *(undefined1 *)(lVar9 + -1) = 0x2e;
    FUN_14001a250(lVar9 + -2,uVar6,1);
  }
  FUN_14001aea5(&local_90,&local_70,lVar7,param_2);
  lVar7 = local_90[1];
  uVar6 = lVar7 + 1;
  if ((ulonglong)local_90[2] < uVar6) {
    (*(code *)local_90[3])(local_90);
    lVar7 = local_90[1];
    uVar6 = lVar7 + 1;
  }
  local_90[1] = uVar6;
  *(undefined1 *)(*local_90 + lVar7) = 0x65;
  FUN_14001ee7c(&local_70,local_9c,local_90);
  *param_1 = CONCAT44(uStack_6c,local_70);
LAB_14001e82d:
  if (DAT_140f17b40 != (local_60 ^ (ulonglong)auStack_e8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_60 ^ (ulonglong)auStack_e8);
  }
  return param_1;
}

