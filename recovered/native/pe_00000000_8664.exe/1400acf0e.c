/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400acf0e */

undefined4 FUN_1400acf0e(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_d8 [32];
  float *local_b8;
  longlong lStack_b0;
  float *pfStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  byte bStack_82;
  char cStack_81;
  float local_80;
  float fStack_7c;
  undefined8 uStack_78;
  undefined1 local_70 [8];
  float local_68;
  float local_64;
  ulonglong local_60;
  
  lVar2 = DAT_140f2a910;
  local_60 = DAT_140f17b40 ^ (ulonglong)auStack_d8;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  lVar1 = *(longlong *)(lVar2 + 0x1608);
  if (*(char *)(lVar1 + 0x10e) == '\0') {
    uVar4 = FUN_140080066(lVar1,param_1,0);
    uVar7 = FUN_14007b050(param_1,0);
    local_b8 = (float *)CONCAT44(local_b8._4_4_,0xbf800000);
    FUN_14007b686(&local_68,param_1,uVar7,0);
    local_80 = *(float *)(lVar1 + 0x158);
    fStack_7c = *(float *)(lVar1 + 0x15c);
    fVar9 = *(float *)(lVar2 + 0xdf8);
    if ((short)param_3 < 0) {
      if (fVar9 < *(float *)(lVar1 + 400)) {
        fStack_7c = fStack_7c + (*(float *)(lVar1 + 400) - fVar9);
      }
    }
    FUN_14008a3c7(local_70,*param_2,*(float *)(lVar2 + 0xdf4) + *(float *)(lVar2 + 0xdf4) + local_68
                  ,fVar9 + fVar9 + local_64);
    uStack_78 = CONCAT44(fStack_7c + local_70._4_4_,local_80 + local_70._0_4_);
    FUN_14008a82c(local_70);
    uVar5 = 0;
    cVar3 = FUN_14008a9ce(&local_80,uVar4,0,0);
    if (cVar3 != '\0') {
      local_b8._0_4_ = param_3;
      uVar5 = FUN_1400ac79b(&local_80,uVar4,&cStack_81,&bStack_82);
      iVar8 = 0x16;
      if (cStack_81 != '\0') {
        iVar8 = bStack_82 + 0x17;
      }
      uVar6 = FUN_14007a557(iVar8);
      FUN_14007bdca(&local_80,uVar4,0);
      local_b8 = (float *)CONCAT44(local_b8._4_4_,*(undefined4 *)(lVar2 + 0xdfc));
      FUN_14007ba95(CONCAT44(fStack_7c,local_80),uStack_78,uVar6,1);
      if (*(char *)(lVar2 + 0x2a40) == '\x01') {
        FUN_140096567(&DAT_140ecc3c7,&DAT_140ecc3ac);
      }
      lStack_b0 = lVar2 + 0xe98;
      fVar9 = (float)*(undefined8 *)(lVar2 + 0xdf4);
      fVar10 = (float)((ulonglong)*(undefined8 *)(lVar2 + 0xdf4) >> 0x20);
      uStack_90 = CONCAT44((float)((ulonglong)uStack_78 >> 0x20) - fVar10,(float)uStack_78 - fVar9);
      uStack_98 = CONCAT44(fStack_7c + fVar10,local_80 + fVar9);
      local_b8 = &local_68;
      pfStack_a8 = &local_80;
      FUN_14007b731(&uStack_98,&uStack_90,param_1,uVar7);
    }
  }
  else {
    uVar5 = 0;
  }
  if (DAT_140f17b40 == (local_60 ^ (ulonglong)auStack_d8)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_60 ^ (ulonglong)auStack_d8);
}

