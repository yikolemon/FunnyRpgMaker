/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d11ff */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400d11ff(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4,
                  float param_5)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_140f17b40 ^ (ulonglong)auStack_98;
  local_70 = param_3;
  local_68 = param_4;
  if (param_4 != param_3) {
    uVar4 = param_4;
    uVar5 = param_3;
    if (param_3 < param_4) {
      uVar4 = param_3;
      uVar5 = param_4;
    }
    uVar3 = FUN_1400d166f(param_2,uVar4,uVar5);
    if (0.0 < param_5) {
      if (param_4 < param_3) {
        FUN_1400be977(&local_70,&local_68);
        param_4 = local_68;
        param_3 = local_70;
      }
      auVar6._8_4_ = (int)(param_3 >> 0x20);
      auVar6._0_8_ = param_3;
      auVar6._12_4_ = DAT_140211f10._4_4_;
      dVar1 = (double)param_5;
      dVar9 = (auVar6._8_8_ - _UNK_140211f28) +
              ((double)CONCAT44((undefined4)DAT_140211f10,(int)param_3) - _DAT_140211f20);
      dVar2 = dVar1;
      if (dVar1 <= dVar9) {
        dVar2 = dVar9;
      }
      auVar7._8_4_ = (int)((ulonglong)uVar3 >> 0x20);
      auVar7._0_8_ = uVar3;
      auVar7._12_4_ = DAT_140211f10._4_4_;
      dVar9 = (auVar7._8_8_ - _UNK_140211f28) +
              ((double)CONCAT44((undefined4)DAT_140211f10,(int)uVar3) - _DAT_140211f20);
      if (dVar2 < dVar9) {
        auVar8._8_4_ = (int)(param_4 >> 0x20);
        auVar8._0_8_ = param_4;
        auVar8._12_4_ = DAT_140211f10._4_4_;
        dVar10 = (auVar8._8_8_ - _UNK_140211f28) +
                 ((double)CONCAT44((undefined4)DAT_140211f10,(int)param_4) - _DAT_140211f20);
        if (dVar1 <= dVar10) {
          dVar1 = dVar10;
        }
        if (dVar9 < dVar1) {
          FUN_1401a5490(dVar9 / dVar2);
          FUN_1401a5490(dVar1 / dVar2);
        }
      }
    }
  }
  if (DAT_140f17b40 == (local_60 ^ (ulonglong)auStack_98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_60 ^ (ulonglong)auStack_98);
}

