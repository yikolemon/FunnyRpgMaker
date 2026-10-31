/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009c010 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14009c010(undefined8 param_1)

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
  
  local_f0 = DAT_140f17b40 ^ (ulonglong)auStack_168;
  fVar3 = (float)FUN_14008ff20();
  fVar3 = fVar3 / DAT_140211698;
  fVar6 = DAT_14021169c * fVar3;
  FUN_14009311d(local_f8);
  fVar7 = DAT_1401c86a4 + fVar6;
  fVar8 = DAT_1402116c0 * fVar3;
  fVar14 = local_f8._0_4_;
  fVar9 = local_f8._4_4_;
  local_108 = (float)DAT_1402116d0 * fVar8 + fVar14 + DAT_1402113b0 * fVar7 + _DAT_1402116e0;
  fStack_104 = (float)((ulonglong)DAT_1402116d0 >> 0x20) * fVar7 + fVar9 + _UNK_1402116e4;
  local_100 = CONCAT44(fStack_104,local_108);
  local_108 = local_108 - fVar14;
  fStack_104 = fStack_104 - fVar9;
  FUN_1400b076d();
  cVar1 = FUN_140089f8c();
  if (cVar1 != '\0') {
    fVar12 = (float)DAT_1402116a0;
    fVar13 = (float)((ulonglong)DAT_1402116a0 >> 0x20) * fVar3;
    fVar10 = fVar3 * _DAT_1402116b0;
    fVar11 = fVar3 * _UNK_1402116b4;
    fVar14 = DAT_1401c86c0 + fVar14;
    fVar5 = fVar3 * _DAT_1402116f0;
    FUN_1400dab18(param_1,local_f8,&local_100,1);
    lVar2 = 0x10;
    do {
      local_108 = (float)*(int *)(&DAT_140210ac0 + lVar2) * fVar8 +
                  (float)*(int *)(&UNK_140210ac4 + lVar2) * fVar7 + (fVar14 - fVar7);
      fStack_104 = (float)*(int *)(&DAT_140210ac0 + lVar2) * fVar7 + fVar9;
      local_110 = CONCAT44(fStack_104 + fVar6,local_108 + fVar6);
      local_140 = 0;
      local_148._0_4_ = fVar13;
      FUN_1400de294(param_1,&local_108,&local_110,0xffcccccc);
      local_138 = 0;
      local_140 = 0x3f800000;
      local_148._0_4_ = fVar13;
      FUN_1400de17e(param_1,&local_108,&local_110,0xff181818);
      fVar4 = local_108 + fVar12 * fVar3;
      local_118 = CONCAT44(fStack_104 + fVar13,fVar4);
      local_120 = CONCAT44(fStack_104 + fVar13 + fVar5,fVar4 + fVar5);
      local_138 = 0;
      local_140 = 0x40000000;
      local_148._0_4_ = fVar3 + fVar3;
      FUN_1400de17e(param_1,&local_118,&local_120,0xffc1c1c1);
      local_140 = 0;
      local_148 = CONCAT44(local_148._4_4_,fVar3 + fVar3);
      FUN_1400de294(param_1,&local_118,&local_120,0xfffcfcfc);
      local_128 = CONCAT44(fStack_104 + fVar11,local_108 + fVar10);
      local_148 = 0;
      FUN_1400dfb46(param_1,&local_128,0xff404040,*(undefined8 *)(&UNK_140210ac8 + lVar2));
      cVar1 = FUN_140091d93(*(undefined4 *)((longlong)&DAT_140210ad0 + lVar2));
      if (cVar1 != '\0') {
        local_148 = CONCAT44(local_148._4_4_,fVar13);
        local_140 = 0;
        FUN_1400de294(param_1,&local_108,&local_110,0x800000ff);
      }
      lVar2 = lVar2 + 0x18;
    } while (lVar2 != 0x178);
    FUN_1400dacc4(param_1);
  }
  if (DAT_140f17b40 == (local_f0 ^ (ulonglong)auStack_168)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_f0 ^ (ulonglong)auStack_168);
}

