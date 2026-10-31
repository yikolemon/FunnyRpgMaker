/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801230e1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801230e1(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  float local_108;
  float fStack_104;
  undefined8 local_100;
  undefined1 local_f8 [8];
  ulonglong local_f0;
  
  local_f0 = DAT_180402640 ^ (ulonglong)auStack_168;
  fVar3 = (float)FUN_180116c08();
  fVar3 = fVar3 / DAT_1802de928;
  fVar6 = DAT_1802de92c * fVar3;
  FUN_180119e05(local_f8);
  fVar7 = DAT_1802bb8e0 + fVar6;
  fVar8 = DAT_1802de950 * fVar3;
  fVar14 = local_f8._0_4_;
  fVar9 = local_f8._4_4_;
  local_108 = (float)DAT_1802de960 * fVar8 + fVar14 + DAT_1802dbb3c * fVar7 + _DAT_1802de970;
  fStack_104 = (float)((ulonglong)DAT_1802de960 >> 0x20) * fVar7 + fVar9 + _UNK_1802de974;
  local_100 = CONCAT44(fStack_104,local_108);
  local_108 = local_108 - fVar14;
  fStack_104 = fStack_104 - fVar9;
  FUN_18013783d();
  cVar1 = FUN_180110c74();
  if (cVar1 != '\0') {
    fVar12 = (float)DAT_1802de930;
    fVar13 = (float)((ulonglong)DAT_1802de930 >> 0x20) * fVar3;
    fVar10 = fVar3 * _DAT_1802de940;
    fVar11 = fVar3 * _UNK_1802de944;
    fVar14 = DAT_1802dc2d0 + fVar14;
    fVar5 = fVar3 * _DAT_1802de980;
    FUN_18018f5a4(param_1,local_f8,&local_100,1);
    lVar2 = 0x10;
    do {
      local_108 = (float)*(int *)(&DAT_1802ddd40 + lVar2) * fVar8 +
                  (float)*(int *)(&UNK_1802ddd44 + lVar2) * fVar7 + (fVar14 - fVar7);
      fStack_104 = (float)*(int *)(&DAT_1802ddd40 + lVar2) * fVar7 + fVar9;
      local_110 = CONCAT44(fStack_104 + fVar6,local_108 + fVar6);
      local_140 = 0;
      local_148._0_4_ = fVar13;
      FUN_180192d20(param_1,&local_108,&local_110,0xffcccccc);
      local_138 = 0;
      local_140 = 0x3f800000;
      local_148._0_4_ = fVar13;
      FUN_180192c0a(param_1,&local_108,&local_110,0xff181818);
      fVar4 = local_108 + fVar12 * fVar3;
      local_118 = CONCAT44(fStack_104 + fVar13,fVar4);
      local_120 = CONCAT44(fStack_104 + fVar13 + fVar5,fVar4 + fVar5);
      local_138 = 0;
      local_140 = 0x40000000;
      local_148._0_4_ = fVar3 + fVar3;
      FUN_180192c0a(param_1,&local_118,&local_120,0xffc1c1c1);
      local_140 = 0;
      local_148 = CONCAT44(local_148._4_4_,fVar3 + fVar3);
      FUN_180192d20(param_1,&local_118,&local_120,0xfffcfcfc);
      local_128 = CONCAT44(fStack_104 + fVar11,local_108 + fVar10);
      local_148 = 0;
      FUN_1801945d2(param_1,&local_128,0xff404040,*(undefined8 *)(&UNK_1802ddd48 + lVar2));
      cVar1 = FUN_180118a7b(*(undefined4 *)((longlong)&DAT_1802ddd50 + lVar2));
      if (cVar1 != '\0') {
        local_148 = CONCAT44(local_148._4_4_,fVar13);
        local_140 = 0;
        FUN_180192d20(param_1,&local_108,&local_110,0x800000ff);
      }
      lVar2 = lVar2 + 0x18;
    } while (lVar2 != 0x178);
    FUN_18018f750(param_1);
  }
  if (DAT_180402640 == (local_f0 ^ (ulonglong)auStack_168)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_f0 ^ (ulonglong)auStack_168);
}

