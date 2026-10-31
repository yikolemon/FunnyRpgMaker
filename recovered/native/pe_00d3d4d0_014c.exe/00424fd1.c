/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00424fd1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_00424fd1(undefined8 param_1,double param_2,double param_3,char param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  float10 fVar5;
  float10 fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  uVar9 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar10 = SUB84(param_2,0);
  uVar11 = (undefined4)((ulonglong)param_2 >> 0x20);
  FUN_0041b968(&local_40,(int)param_1,uVar9,uVar10,uVar11,param_3);
  fVar5 = FUN_0041ba2c((int)&local_40);
  if ((double)fVar5 < param_2) {
    fVar5 = FUN_0041ba2c((int)&local_40);
    dVar1 = (double)fVar5;
    fVar5 = FUN_0041ba2c((int)&local_40);
    if ((double)fVar5 < param_2) {
      if (param_4 == '\0') {
        uVar7 = (undefined4)DAT_004a88f8;
        uVar8 = (undefined4)((ulonglong)DAT_004a88f8 >> 0x20);
      }
      else {
        uVar7 = (undefined4)DAT_004d7df8;
        uVar8 = (undefined4)((ulonglong)DAT_004d7df8 >> 0x20);
      }
      auVar3._8_4_ = uVar10;
      auVar3._0_8_ = param_2;
      auVar3._12_4_ = uVar11;
      do {
        param_3 = param_3 + (double)CONCAT44(uVar8,uVar7);
        FUN_0041b968(&local_60,(int)param_1,uVar9,uVar10,uVar11,param_3);
        fVar5 = FUN_0041ba2c((int)&local_60);
        if (((double)fVar5 < dVar1) ||
           (fVar5 = FUN_0041ba2c((int)&local_60),
           (double)((ulonglong)((double)fVar5 - param_2) & _DAT_004a88c0) < DAT_004dc960)) break;
        fVar5 = FUN_0041ba2c((int)&local_60);
        fVar6 = FUN_0041ba2c((int)&local_40);
        dStack_68 = auVar3._8_8_;
        if ((double)((ulonglong)((double)fVar5 - param_2) & _DAT_004a88c0) <
            (double)((ulonglong)((double)fVar6 - dStack_68) & _UNK_004a88c8)) {
          local_30 = local_50;
          uStack_2c = uStack_4c;
          uStack_28 = uStack_48;
          uStack_24 = uStack_44;
          local_40 = local_60;
          uStack_3c = uStack_5c;
          uStack_38 = uStack_58;
          uStack_34 = uStack_54;
        }
        fVar5 = FUN_0041ba2c((int)&local_60);
        dVar2 = (double)fVar5;
        dVar4 = dVar2;
        if (dVar2 <= dVar1) {
          dVar4 = dVar1;
        }
        dVar1 = (double)(~-(ulonglong)NAN(dVar1) & (ulonglong)dVar4 |
                        -(ulonglong)NAN(dVar1) & (ulonglong)dVar2);
        fVar5 = FUN_0041ba2c((int)&local_40);
      } while ((double)fVar5 < param_2);
    }
  }
  if (DAT_0050e8c0 != (local_14 ^ (uint)&stack0xfffffffc)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&stack0xfffffffc);
  }
  return (float10)param_3;
}

