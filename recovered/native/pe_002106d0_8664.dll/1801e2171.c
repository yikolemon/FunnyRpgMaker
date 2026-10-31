/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e2171 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1801e2171(uint param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined8 unaff_RSI;
  ulonglong uVar10;
  undefined8 uVar11;
  byte bVar12;
  bool bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_180402640 ^ (ulonglong)auStack_b8;
  iVar3 = FUN_1801e3b7d(param_2,param_3);
  if (iVar3 == 0) {
    uVar4 = *(uint *)(param_2 + 0x1178);
    if ((uVar4 & 1) == 0) {
      iVar3 = FUN_1801e866b(param_2,*(undefined4 *)(param_4 + 0x4c),param_4 + 0x50,0);
      if (iVar3 != 0) goto LAB_1801e21b3;
      uVar4 = *(uint *)(param_2 + 0x1178);
    }
    uVar11 = 0;
    uVar10 = 0;
    if ((uVar4 & 2) == 0) {
      local_68 = 0;
      local_70 = 0;
      local_78 = 0;
      local_80 = 0;
      local_88 = param_3;
      puVar8 = (undefined4 *)FUN_1801ca31a(param_1,*(undefined8 *)(param_4 + 0x38));
      auVar16 = _DAT_180337240;
      local_8c = (undefined4)CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
      if ((puVar8 == (undefined4 *)0x0) || (uVar4 = FUN_1801e86b5(*puVar8), uVar4 == 0)) {
        bVar12 = 0;
        bVar13 = true;
      }
      else {
        bVar12 = (byte)(uVar4 >> 0xc) & 1;
        auVar15._0_4_ = -(uint)(_DAT_180337250 == (uVar4 & _DAT_180337250));
        auVar15._4_4_ = -(uint)(_UNK_180337254 == (uVar4 & _UNK_180337254));
        auVar15._8_4_ = -(uint)(_UNK_180337258 == (uVar4 & _UNK_180337258));
        auVar15._12_4_ = -(uint)(_UNK_18033725c == (uVar4 & _UNK_18033725c));
        auVar16._0_4_ = -(uint)((uVar4 & _DAT_180337260) == 0);
        auVar16._4_4_ = -(uint)((uVar4 & _UNK_180337264) == 0);
        auVar16._8_4_ = -(uint)((uVar4 & _UNK_180337268) == 0);
        auVar16._12_4_ = -(uint)((uVar4 & _UNK_18033726c) == 0);
        auVar16 = packssdw(auVar15,auVar16);
        auVar14._0_4_ = -(uint)((uVar4 & _DAT_180337250) == 0);
        auVar14._4_4_ = -(uint)((uVar4 & _UNK_180337254) == 0);
        auVar14._8_4_ = -(uint)((uVar4 & _UNK_180337258) == 0);
        auVar14._12_4_ = -(uint)((uVar4 & _UNK_18033725c) == 0);
        iVar3 = movmskps(uVar4,auVar14);
        bVar13 = iVar3 == 0xf;
        local_8c = 0;
      }
      if (!bVar13) {
        FUN_1801e86ef(param_2);
      }
      if ((auVar16._4_2_ & 1) != 0) {
        iVar3 = FUN_1801e8754(param_2);
        iVar5 = FUN_1801e87b2(param_2,iVar3);
        iVar6 = FUN_1801e88e2(param_2,iVar3);
        FUN_1801e8948(param_2,*(undefined4 *)(*(longlong *)(param_2 + 0x38) + (longlong)iVar3 * 4),
                      iVar5 + iVar6);
      }
      if ((auVar16._6_2_ & 1) != 0) {
        iVar3 = FUN_1801e89a0(param_2);
        iVar5 = FUN_1801e89fe(param_2,iVar3);
        iVar6 = FUN_1801e8b2e(param_2,iVar3);
        FUN_1801e8b94(param_2,*(undefined4 *)(*(longlong *)(param_2 + 0x40) + (longlong)iVar3 * 4),
                      iVar5 - iVar6);
      }
      if ((auVar16._0_4_ & 1) != 0) {
        uVar7 = FUN_1801e8bf4(param_2);
        FUN_1801e87b2(param_2,uVar7);
        FUN_1801e88e2(param_2,uVar7);
      }
      if ((auVar16._0_4_ >> 0x10 & 1) != 0) {
        uVar7 = FUN_1801e8c44(param_2);
        FUN_1801e89fe(param_2,uVar7);
        FUN_1801e8b2e(param_2,uVar7);
      }
      iVar3 = FUN_1801e866b(param_2,*(undefined4 *)(param_4 + 0x250),param_4 + 0x254,1);
      uVar10 = 0;
      if ((char)local_8c == '\0') {
        FUN_1801e8c94(param_2,1,&local_68,&local_70);
        uVar10 = 0;
        FUN_1801e8c94(param_2,0,&local_78,&local_80);
        if (bVar12 == 0) {
          if (local_80 == 0 || local_78 == 0) {
            if (local_70 == 0 || local_68 == 0) {
              lVar9 = ((ulonglong)(uint)(*(int *)(param_4 + 0x40) << 2) / 10) *
                      (longlong)*(int *)(param_4 + 0x14);
              uVar10 = lVar9 + (lVar9 >> 0x3f) + 0x8000U >> 0x10;
            }
            else {
              uVar10 = (ulonglong)
                       (uint)((*(int *)(local_68 + 0x10) - *(int *)(local_70 + 0x10)) / 2);
            }
          }
          else {
            uVar10 = (ulonglong)
                     (uint)(((*(int *)(local_78 + 0x10) - *(int *)(local_80 + 0x10)) * 2) / 3);
          }
        }
      }
      lVar2 = local_68;
      lVar9 = local_70;
      if (local_70 != 0 && local_68 != 0) {
        if ((auVar16._8_2_ & 1) == 0) {
          FUN_1801e8d1d(param_2,local_68,local_70);
        }
        if ((auVar16._10_2_ & 1) == 0) {
          FUN_1801e8d4e(param_2,lVar2,lVar9);
        }
      }
      lVar2 = local_78;
      lVar9 = local_80;
      if (local_80 != 0 && local_78 != 0) {
        if ((auVar16._12_2_ & 1) == 0) {
          FUN_1801e8d1d(param_2,local_78,local_80);
        }
        if ((auVar16._14_2_ & 1) == 0) {
          FUN_1801e8d4e(param_2,lVar2,lVar9);
        }
      }
      if (iVar3 != 0) goto LAB_1801e21b3;
      param_3 = local_88;
      if ((*(byte *)(*(longlong *)(*(longlong *)(param_4 + 0x30) + 0x10) + 1 +
                    (ulonglong)param_1 * 2) & 0x40) == 0) {
        FUN_1801e8d7f(param_2,param_4);
        param_3 = local_88;
      }
    }
    bVar13 = true;
    do {
      bVar1 = bVar13;
      if (bVar1) {
        if ((*(uint *)(param_2 + 0x1178) & 1) == 0) goto LAB_1801e2574;
      }
      else {
        if ((*(uint *)(param_2 + 0x1178) & 2) != 0) break;
LAB_1801e2574:
        FUN_1801e8f62(param_2,uVar11);
        FUN_1801e9790(param_2,uVar11);
        FUN_1801e582f(param_2,uVar11);
        FUN_1801e5a2c(param_2,uVar11);
        local_98 = *(undefined8 *)(param_4 + 0x38);
        FUN_1801e982e(param_2,uVar11,param_1,uVar10 & 0xffffffff);
      }
      uVar11 = 1;
      bVar13 = false;
    } while (bVar1);
    FUN_1801e5be0(param_2,param_3);
    iVar3 = 0;
  }
LAB_1801e21b3:
  if (DAT_180402640 != (local_60 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_60 ^ (ulonglong)auStack_b8);
  }
  return iVar3;
}

