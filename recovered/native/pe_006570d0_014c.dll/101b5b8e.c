/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b5b8e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall
FUN_101b5b8e(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char cVar4;
  int iVar5;
  float in_XMM0_Da;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float in_XMM1_Da;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int local_70;
  float local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  float local_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  float local_2c;
  float fStack_28;
  float local_24;
  float fStack_20;
  float local_1c;
  float fStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_70;
  local_5c = (float)param_2;
  local_1c = in_XMM0_Da;
  fStack_18 = in_XMM1_Da;
  iVar5 = FUN_1010330d();
  local_70 = FUN_1010331e();
  FUN_10111ef5();
  FUN_1012e242("##Canvas",&local_1c,0);
  FUN_1010c032(&local_24);
  FUN_1010c049(&local_2c);
  if (*(char *)((int)param_1 + 9) == '\x01') {
    auVar7._0_4_ = local_1c * (float)DAT_102b89c0;
    auVar7._4_4_ = fStack_18 * DAT_102b89c0._4_4_;
    auVar7._8_4_ = _UNK_102b89c8 * 0.0;
    auVar7._12_4_ = _UNK_102b89cc * 0.0;
    auVar8._4_4_ = param_1[5];
    auVar8._0_4_ = param_1[5];
    auVar8._8_8_ = 0;
    auVar8 = divps(auVar7,auVar8);
    *(ulonglong *)(param_1 + 3) =
         CONCAT44(auVar8._4_4_ + _UNK_102b94e4,auVar8._0_4_ + _DAT_102b94e0);
  }
  *(undefined1 *)((int)param_1 + 9) = 0;
  cVar4 = FUN_1011452d(0x296);
  if (cVar4 != '\0') {
    fVar9 = *(float *)(iVar5 + 0xc4);
    if ((fVar9 != 0.0) || (NAN(fVar9))) {
      fVar6 = (fVar9 * DAT_102b71b8 + DAT_1028b430) * (float)param_1[5];
      fVar9 = (float)param_1[6];
      if (((float)param_1[6] <= fVar6) && (fVar9 = (float)param_1[7], fVar6 <= (float)param_1[7])) {
        fVar9 = fVar6;
      }
      param_1[5] = fVar9;
    }
  }
  local_6c = (float)param_1[5];
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  cVar4 = FUN_1010bee1();
  if ((cVar4 != '\0') && (cVar4 = FUN_1010378f(0,0xbf800000), cVar4 != '\0')) {
    param_1[3] = (float)param_1[3] - *(float *)(iVar5 + 0xa8) / local_6c;
    param_1[4] = (float)param_1[4] - *(float *)(iVar5 + 0xac) / local_6c;
  }
  fVar9 = (float)(int)(local_1c * (float)DAT_102b89c0 +
                      (local_24 - (float)*(undefined8 *)(param_1 + 3) * local_6c));
  fVar6 = (float)(int)(fStack_18 * DAT_102b89c0._4_4_ +
                      (fStack_20 -
                      (float)((ulonglong)*(undefined8 *)(param_1 + 3) >> 0x20) * local_6c));
  local_34 = CONCAT44(fVar6,fVar9);
  fVar10 = (float)(int)local_5c;
  local_5c = local_6c;
  fStack_58 = local_6c;
  fStack_54 = local_6c;
  fStack_50 = local_6c;
  local_3c = CONCAT44((float)(int)((float)param_7 * local_6c + fVar6),
                      (float)(int)(fVar10 * local_6c + fVar9));
  local_44 = CONCAT44(fStack_28 + DAT_102b70a0._4_4_,local_2c + (float)DAT_102b70a0);
  local_4c = CONCAT44(fStack_20 + DAT_102b89a0._4_4_,local_24 + (float)DAT_102b89a0);
  FUN_1018b762(&local_4c,&local_44,_DAT_10302630,_UNK_10302634,_UNK_10302638,_UNK_1030263c);
  FUN_101881b4(&local_24,&local_2c,1);
  FUN_1018b85a(&local_34,&local_3c,*param_1,0,0);
  if (*(int *)(local_70 + 0x34) != 0) {
    FUN_10187e9e(*(int *)(local_70 + 0x34),0,0);
  }
  local_44 = CONCAT44(DAT_102b70a0._4_4_,(float)DAT_102b70a0);
  local_4c = 0;
  FUN_1018d090(param_3,param_4,param_5,param_6,&local_34,&local_3c,&local_4c,&local_44,0xffffffff);
  if (*(int *)(local_70 + 0x30) != 0) {
    iVar5 = FUN_1010331e();
    FUN_10187e9e(*(undefined4 *)(iVar5 + 0x30),0,0);
  }
  if ((*(char *)(param_1 + 2) == '\x01') && (DAT_102b8a58 < local_6c)) {
    auVar11._0_4_ = local_24 - (float)local_34;
    auVar11._4_4_ = local_2c - (float)local_34;
    auVar11._8_4_ = 0.0 - (float)local_34;
    auVar11._12_4_ = 0.0 - (float)local_34;
    auVar2._4_4_ = fStack_58;
    auVar2._0_4_ = local_5c;
    auVar2._8_4_ = fStack_54;
    auVar2._12_4_ = fStack_50;
    auVar8 = divps(auVar11,auVar2);
    iVar5 = (int)auVar8._0_4_;
    if (iVar5 <= (int)auVar8._4_4_) {
      do {
        FUN_1018b5da((float)iVar5 * local_6c + (float)local_34,fStack_20,fStack_28,param_1[1],
                     0x3f800000);
        bVar1 = iVar5 < (int)((local_2c - (float)local_34) / local_6c);
        iVar5 = iVar5 + 1;
      } while (bVar1);
    }
    auVar12._0_4_ = fStack_20 - local_34._4_4_;
    auVar12._4_4_ = fStack_28 - local_34._4_4_;
    auVar12._8_4_ = 0.0 - local_34._4_4_;
    auVar12._12_4_ = 0.0 - local_34._4_4_;
    auVar3._4_4_ = fStack_58;
    auVar3._0_4_ = local_5c;
    auVar3._8_4_ = fStack_54;
    auVar3._12_4_ = fStack_50;
    auVar8 = divps(auVar12,auVar3);
    iVar5 = (int)auVar8._0_4_;
    if (iVar5 <= (int)auVar8._4_4_) {
      do {
        FUN_1018b44e(local_24,local_2c,(float)iVar5 * local_6c + local_34._4_4_,param_1[1],
                     0x3f800000);
        bVar1 = iVar5 < (int)((fStack_28 - local_34._4_4_) / local_6c);
        iVar5 = iVar5 + 1;
      } while (bVar1);
    }
  }
  FUN_10188384();
  if (DAT_10388d00 != (local_14 ^ (uint)&local_70)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

