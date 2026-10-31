/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180115ea1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180115ea1(void)

{
  code *pcVar1;
  undefined1 auVar2 [12];
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined8 in_XMM2_Qb;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  ulonglong local_a8;
  ulonglong local_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined4 local_80 [20];
  ulonglong local_30;
  
  lVar3 = DAT_180419160;
  local_30 = DAT_180402640 ^ (ulonglong)auStack_e8;
  if (*(char *)(DAT_180419160 + 0x2b02) == '\x01') {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  puVar6 = (undefined4 *)(DAT_180419160 + 0x1fe0);
  puVar7 = local_80;
  for (lVar5 = 0x14; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined4 *)(DAT_180419160 + 0x1fa4) = 0;
  uVar4 = FUN_180103228(*(undefined8 *)(*(longlong *)(lVar3 + 0x1608) + 0x48));
  local_98 = (float)local_80._12_8_;
  fStack_94 = SUB84(local_80._12_8_,4);
  fStack_90 = (float)local_80._20_8_;
  fStack_8c = SUB84(local_80._20_8_,4);
  local_98 = local_98 + _DAT_1802de850;
  fStack_94 = fStack_94 + _UNK_1802de854;
  fStack_90 = fStack_90 + _UNK_1802de858;
  fStack_8c = fStack_8c + _UNK_1802de85c;
  local_a0 = *(ulonglong *)(lVar3 + 0x118);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = local_a0;
  auVar2._4_8_ = in_XMM2_Qb;
  auVar2._0_4_ = fStack_94;
  auVar11._0_8_ = auVar2._0_8_ << 0x20;
  auVar11._8_4_ = fStack_90;
  auVar11._12_4_ = fStack_8c;
  auVar12._12_4_ = fStack_8c;
  auVar12._8_4_ = fStack_90;
  auVar12._0_8_ = auVar11._8_8_;
  auVar10 = minps(auVar12,auVar10);
  uVar8 = -(uint)((float)local_a0 < local_98);
  uVar9 = -(uint)((float)(local_a0 >> 0x20) < fStack_94);
  local_a8 = CONCAT44(~uVar9 & auVar10._4_4_,~uVar8 & auVar10._0_4_) |
             CONCAT44((uint)fStack_94 & uVar9,(uint)local_98 & uVar8);
  local_b8 = 0;
  local_c0 = 0x3f800000;
  local_c8 = 0;
  FUN_180192c0a(uVar4,&local_98,&fStack_90,0xff00ff00);
  local_c8 = 0x3f800000;
  FUN_180192790(uVar4,&local_a0,&local_a8,0xff00ff00);
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_e8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_e8);
}

