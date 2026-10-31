/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fe427 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fe427(float param_1,float param_2,float param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float10 fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint local_18;
  
  iVar7 = DAT_1039d74c;
  fVar6 = _UNK_102b8ab4;
  fVar5 = _DAT_102b8ab0;
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  if (10 < param_4) {
    param_4 = 0;
  }
  iVar1 = *(int *)(DAT_1039d74c + 0x1fe0);
  if (iVar1 != 0) {
    iVar2 = *(int *)(DAT_1039d74c + 0x1248);
    iVar3 = *(int *)(DAT_1039d74c + 0x1fe8);
    iVar11 = 0;
    do {
      iVar10 = *(int *)(iVar3 + iVar11);
      local_48 = 0;
      local_50 = 0;
      local_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      local_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      uVar8 = FUN_1019059b(iVar2,param_4,&local_48,&local_50,&local_40,&local_30);
      if ((char)uVar8 != '\0') {
        fVar13 = param_1 - (float)local_48;
        fVar14 = param_2 - (float)((ulonglong)local_48 >> 0x20);
        local_58 = CONCAT44(fVar14,fVar13);
        fVar16 = *(float *)(iVar10 + 0x30) * param_3;
        fVar15 = (float)*(undefined8 *)(iVar10 + 0xc);
        auVar4._4_4_ = -(uint)(*(float *)(iVar10 + 8) < ((float)local_50 + fVar5) * fVar16 + fVar13)
        ;
        auVar4._0_4_ = -(uint)(fVar15 < ((float)((ulonglong)local_50 >> 0x20) + fVar6) * fVar16 +
                                        fVar14);
        auVar4._8_4_ = -(uint)(fVar14 < *(float *)(iVar10 + 0x14) + fVar15);
        auVar4._12_4_ =
             -(uint)(fVar13 < *(float *)(iVar10 + 8) +
                              (float)((ulonglong)*(undefined8 *)(iVar10 + 0xc) >> 0x20));
        iVar9 = movmskps(uVar8,auVar4);
        if (iVar9 == 0xf) {
          iVar10 = FUN_100fe900(iVar10);
          local_70 = *(undefined4 *)(iVar2 + 0x20);
          uStack_6c = *(undefined4 *)(iVar2 + 0x24);
          uStack_68 = *(undefined4 *)(iVar2 + 0x28);
          uStack_64 = *(undefined4 *)(iVar2 + 0x2c);
          FUN_101883ba(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x24),
                       *(undefined4 *)(iVar2 + 0x28),*(undefined4 *)(iVar2 + 0x2c));
          fVar13 = (float)((ulonglong)local_58 >> 0x20);
          local_78 = CONCAT44(((float)((ulonglong)local_50 >> 0x20) + 0.0) * fVar16 + fVar13,
                              ((float)local_50 + DAT_1028b430) * fVar16 + (float)local_58);
          local_80 = CONCAT44(fVar13 + fVar16 * 0.0,(float)local_58 + fVar16 * DAT_1028b430);
          FUN_1018d090(local_70,uStack_6c,uStack_68,uStack_64,&local_80,&local_78,&local_30,
                       &uStack_28,param_7);
          fVar13 = (float)((ulonglong)local_58 >> 0x20);
          local_78 = CONCAT44(((float)((ulonglong)local_50 >> 0x20) + 0.0) * fVar16 + fVar13,
                              ((float)local_50 + DAT_102b8ac0) * fVar16 + (float)local_58);
          local_80 = CONCAT44(fVar16 * 0.0 + fVar13,fVar16 + fVar16 + (float)local_58);
          FUN_1018d090(local_70,uStack_6c,uStack_68,uStack_64,&local_80,&local_78,&local_30,
                       &uStack_28,param_7);
          local_78 = CONCAT44((float)((ulonglong)local_58 >> 0x20) +
                              (float)((ulonglong)local_50 >> 0x20) * fVar16,
                              (float)local_58 + (float)local_50 * fVar16);
          FUN_1018d090(local_70,uStack_6c,uStack_68,uStack_64,&local_58,&local_78,&local_30,
                       &uStack_28,param_6);
          local_78 = CONCAT44((float)((ulonglong)local_58 >> 0x20) +
                              (float)((ulonglong)local_50 >> 0x20) * fVar16,
                              (float)local_58 + (float)local_50 * fVar16);
          FUN_1018d090(local_70,uStack_6c,uStack_68,uStack_64,&local_58,&local_78,&local_40,
                       &uStack_38,param_5);
          if ((param_4 & 0xe) == 8) {
            fVar12 = (float10)FUN_1026dec0((double)((float)*(double *)(iVar7 + 0x18) * DAT_102b7100)
                                           ,0x60000000,0x401921fb);
            local_78 = CONCAT44(local_58._4_4_ - fVar16,fVar16 * DAT_102b8ac8 + (float)local_58);
            FUN_10189cf2(&local_78,fVar16 * DAT_102b8a58,(float)fVar12,(float)fVar12 + _DAT_102b8ac4
                         ,0);
            FUN_101888a4(*(undefined4 *)(iVar10 + 0x40),*(undefined4 *)(iVar10 + 0x38),param_5,
                         fVar16 * DAT_102b6c58,0);
            *(undefined4 *)(iVar10 + 0x38) = 0;
          }
          FUN_1018846c();
        }
      }
      iVar11 = iVar11 + 4;
    } while (iVar1 << 2 != iVar11);
  }
  if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

