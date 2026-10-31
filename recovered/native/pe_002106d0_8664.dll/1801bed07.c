/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801bed07 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801bed07(undefined4 *param_1,undefined8 param_2,undefined8 *param_3,int param_4,
                  int param_5)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  int iVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 *local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_180402640 ^ (ulonglong)auStack_108;
  local_c8 = param_3;
  local_78 = param_2;
  lVar5 = FUN_180107ee8();
  lVar6 = FUN_180107ef9();
  uVar7 = FUN_180116bd5();
  FUN_1801342dd("##Canvas",&local_78,0);
  FUN_180110cc6(&local_80);
  FUN_180110cdb(&local_88);
  if (*(char *)((longlong)param_1 + 9) == '\x01') {
    auVar9._0_4_ = (float)local_78 * (float)DAT_1802de570;
    auVar9._4_4_ = (float)((ulonglong)local_78 >> 0x20) * DAT_1802de570._4_4_;
    auVar9._8_4_ = _UNK_1802de578 * 0.0;
    auVar9._12_4_ = _UNK_1802de57c * 0.0;
    auVar10._4_4_ = param_1[5];
    auVar10._0_4_ = param_1[5];
    auVar10._8_8_ = 0;
    auVar10 = divps(auVar9,auVar10);
    *(ulonglong *)(param_1 + 3) =
         CONCAT44(auVar10._4_4_ + _UNK_1802df034,auVar10._0_4_ + _DAT_1802df030);
  }
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  cVar4 = FUN_18011937f(0x296);
  if (cVar4 != '\0') {
    fVar11 = *(float *)(lVar5 + 0xf8);
    if ((fVar11 != 0.0) || (NAN(fVar11))) {
      fVar8 = (fVar11 * DAT_1802dc268 + DAT_1802ac570) * (float)param_1[5];
      fVar11 = (float)param_1[6];
      if (((float)param_1[6] <= fVar8) && (fVar11 = (float)param_1[7], fVar8 <= (float)param_1[7]))
      {
        fVar11 = fVar8;
      }
      param_1[5] = fVar11;
    }
  }
  fVar11 = (float)param_1[5];
  local_c0 = lVar6;
  cVar4 = FUN_180110b56();
  if ((cVar4 != '\0') && (cVar4 = FUN_1801083e1(0,DAT_1802bb8e0), cVar4 != '\0')) {
    param_1[3] = (float)param_1[3] - *(float *)(lVar5 + 0xd4) / fVar11;
    param_1[4] = (float)param_1[4] - *(float *)(lVar5 + 0xd8) / fVar11;
  }
  fVar8 = (float)(int)((float)local_78 * (float)DAT_1802de570 +
                      (local_80 - (float)*(undefined8 *)(param_1 + 3) * fVar11));
  fVar13 = (float)(int)((float)((ulonglong)local_78 >> 0x20) * DAT_1802de570._4_4_ +
                       (fStack_7c -
                       (float)((ulonglong)*(undefined8 *)(param_1 + 3) >> 0x20) * fVar11));
  local_90 = CONCAT44(fVar13,fVar8);
  local_98 = CONCAT44((float)(int)((float)param_5 * fVar11 + fVar13),
                      (float)(int)((float)param_4 * fVar11 + fVar8));
  local_a0 = CONCAT44(fStack_84 + DAT_1802dc280._4_4_,local_88 + (float)DAT_1802dc280);
  local_a8 = CONCAT44(fStack_7c + DAT_1802de550._4_4_,local_80 + (float)DAT_1802de550);
  local_d8 = 0;
  local_e8._0_4_ = 0;
  local_e0._0_4_ = 0x3f800000;
  FUN_180192c0a(uVar7,&local_a8,&local_a0,0xffffffff);
  FUN_18018f5a4(uVar7,&local_80,&local_88,1);
  local_e0 = (undefined8 *)((ulonglong)local_e0._4_4_ << 0x20);
  local_e8 = (undefined8 *)((ulonglong)local_e8._4_4_ << 0x20);
  FUN_180192d20(uVar7,&local_90,&local_98,*param_1);
  lVar5 = local_c0;
  if (*(longlong *)(local_c0 + 0x60) != 0) {
    FUN_18018f256(uVar7,*(longlong *)(local_c0 + 0x60),0,0);
  }
  local_a0 = CONCAT44(DAT_1802dc280._4_4_,(float)DAT_1802dc280);
  local_a8 = 0;
  local_b8 = *local_c8;
  uStack_b0 = local_c8[1];
  local_d8 = 0xffffffff;
  local_e8 = &local_a8;
  local_e0 = &local_a0;
  FUN_18019461a(uVar7,&local_b8,&local_90,&local_98);
  if (*(longlong *)(lVar5 + 0x58) != 0) {
    lVar5 = FUN_180107ef9();
    FUN_18018f256(uVar7,*(undefined8 *)(lVar5 + 0x58),0,0);
  }
  if ((*(char *)(param_1 + 2) == '\x01') && (DAT_1802de604 < fVar11)) {
    auVar14._0_4_ = local_80 - (float)local_90;
    auVar14._4_4_ = local_88 - (float)local_90;
    auVar14._8_4_ = 0.0 - (float)local_90;
    auVar14._12_4_ = 0.0 - (float)local_90;
    auVar2._4_4_ = fVar11;
    auVar2._0_4_ = fVar11;
    auVar2._8_4_ = fVar11;
    auVar2._12_4_ = fVar11;
    auVar10 = divps(auVar14,auVar2);
    iVar12 = (int)auVar10._0_4_;
    if (iVar12 <= (int)auVar10._4_4_) {
      do {
        local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,param_1[1]);
        local_e0 = (undefined8 *)CONCAT44(local_e0._4_4_,0x3f800000);
        FUN_180192a86(uVar7,(float)iVar12 * fVar11 + (float)local_90,fStack_7c,fStack_84);
        bVar1 = iVar12 < (int)((local_88 - (float)local_90) / fVar11);
        iVar12 = iVar12 + 1;
      } while (bVar1);
    }
    auVar15._0_4_ = fStack_7c - local_90._4_4_;
    auVar15._4_4_ = fStack_84 - local_90._4_4_;
    auVar15._8_4_ = 0.0 - local_90._4_4_;
    auVar15._12_4_ = 0.0 - local_90._4_4_;
    auVar3._4_4_ = fVar11;
    auVar3._0_4_ = fVar11;
    auVar3._8_4_ = fVar11;
    auVar3._12_4_ = fVar11;
    auVar10 = divps(auVar15,auVar3);
    iVar12 = (int)auVar10._0_4_;
    if (iVar12 <= (int)auVar10._4_4_) {
      do {
        local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,param_1[1]);
        local_e0 = (undefined8 *)CONCAT44(local_e0._4_4_,0x3f800000);
        FUN_1801928fe(uVar7,local_80,local_88,(float)iVar12 * fVar11 + local_90._4_4_);
        bVar1 = iVar12 < (int)((fStack_84 - local_90._4_4_) / fVar11);
        iVar12 = iVar12 + 1;
      } while (bVar1);
    }
  }
  FUN_18018f750(uVar7);
  if (DAT_180402640 != (local_70 ^ (ulonglong)auStack_108)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_70 ^ (ulonglong)auStack_108);
  }
  return;
}

