/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10144686 */

void FUN_10144686(float *param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  double dVar12;
  double local_7c;
  int local_74;
  int local_70;
  int local_6c;
  float local_68;
  float local_64;
  uint local_60;
  undefined8 local_5c;
  ulonglong local_54 [8];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_7c;
  if ((((param_2 & 0x700000) != 0) && ((param_2 & 0x1800000) != 0)) ||
     (cVar6 = FUN_10116736("context",0), iVar9 = DAT_1039d74c, cVar6 == '\0')) goto LAB_10144aa1;
  FUN_1011177d(0x10000,1);
  uVar7 = *(uint *)(iVar9 + 0x2560);
  if ((param_2 & 0x700000) == 0) {
    local_7c = (double)CONCAT44(local_7c._4_4_,iVar9);
    cVar6 = FUN_10130e0c(&DAT_1033ccdb,uVar7 >> 0x14 & 1);
    uVar10 = (uVar7 & 0xff8fffff) + 0x100000;
    if (cVar6 == '\0') {
      uVar10 = uVar7;
    }
    cVar6 = FUN_10130e0c(&DAT_1033c00d,uVar10 >> 0x15 & 1);
    uVar8 = uVar7 & 0xff8fffff | 0x200000;
    if (cVar6 == '\0') {
      uVar8 = uVar10;
    }
    cVar6 = FUN_10130e0c(&DAT_10330a07,uVar8 >> 0x16 & 1);
    uVar7 = uVar8 & 0xff8fffff | 0x400000;
    if (cVar6 == '\0') {
      uVar7 = uVar8;
    }
    if ((param_2 & 0x1800000) == 0) {
      FUN_10132188();
      iVar9 = local_7c._0_4_;
      goto LAB_10144787;
    }
    iVar9 = local_7c._0_4_;
  }
  else if ((param_2 & 0x1800000) == 0) {
LAB_10144787:
    cVar6 = FUN_10130e0c("0..255",uVar7 >> 0x17 & 1);
    uVar10 = (uVar7 & 0xfe7fffff) + 0x800000;
    if (cVar6 == '\0') {
      uVar10 = uVar7;
    }
    cVar6 = FUN_10130e0c("0.00..1.00",uVar10 >> 0x18 & 1);
    uVar7 = uVar7 & 0xfe7fffff | 0x1000000;
    if (cVar6 == '\0') {
      uVar7 = uVar10;
    }
  }
  FUN_10132188();
  local_54[0] = (ulonglong)DAT_102b8a50;
  cVar6 = FUN_1012e1b7("Copy as..",local_54);
  if (cVar6 != '\0') {
    FUN_10115ea4(&DAT_10330487,0);
  }
  cVar6 = FUN_10116736(&DAT_10330487,0);
  if (cVar6 != '\0') {
    local_64 = *param_1;
    fVar5 = DAT_1028b430;
    if (local_64 <= DAT_1028b430) {
      fVar5 = local_64;
    }
    local_68 = param_1[1];
    fVar3 = DAT_1028b430;
    if (local_68 <= DAT_1028b430) {
      fVar3 = local_68;
    }
    fVar1 = param_1[2];
    fVar4 = DAT_1028b430;
    if (fVar1 <= DAT_1028b430) {
      fVar4 = fVar1;
    }
    if ((param_2 & 2) == 0) {
      fVar2 = param_1[3];
      fVar11 = DAT_1028b430;
      if (fVar2 <= DAT_1028b430) {
        fVar11 = fVar2;
      }
      local_7c = (double)fVar2;
      local_74 = (int)(float)(-(uint)(fVar2 < 0.0) & (uint)DAT_102b70e0 |
                             ~-(uint)(fVar2 < 0.0) & (uint)(fVar11 * DAT_102b7090 + DAT_102b70e0));
      dVar12 = local_7c;
    }
    else {
      local_74 = 0xff;
      dVar12 = DAT_1028b438;
    }
    local_7c = (double)CONCAT44(local_7c._4_4_,
                                (int)(float)(-(uint)(local_64 < 0.0) & (uint)DAT_102b70e0 |
                                            ~-(uint)(local_64 < 0.0) &
                                            (uint)(fVar5 * DAT_102b7090 + DAT_102b70e0)));
    local_6c = (int)(float)(-(uint)(local_68 < 0.0) & (uint)DAT_102b70e0 |
                           ~-(uint)(local_68 < 0.0) & (uint)(fVar3 * DAT_102b7090 + DAT_102b70e0));
    local_70 = (int)(float)(-(uint)(fVar1 < 0.0) & (uint)DAT_102b70e0 |
                           ~-(uint)(fVar1 < 0.0) & (uint)(fVar4 * DAT_102b7090 + DAT_102b70e0));
    local_60 = uVar7;
    FUN_100fa4b1(local_54,0x40,"(%.3ff, %.3ff, %.3ff, %.3ff)",(double)local_64,(double)local_68,
                 (double)fVar1,dVar12);
    local_5c = 0;
    cVar6 = FUN_10133727(local_54,0,0,&local_5c);
    if (cVar6 != '\0') {
      FUN_101032f2();
    }
    FUN_100fa4b1();
    local_5c = 0;
    cVar6 = FUN_10133727(local_54,0,0,&local_5c);
    if (cVar6 != '\0') {
      FUN_101032f2();
    }
    FUN_100fa4b1(local_54,0x40,&DAT_1033beec,SUB84(local_7c,0),local_6c,local_70);
    local_5c = 0;
    cVar6 = FUN_10133727(local_54,0,0,&local_5c);
    uVar7 = local_60;
    if (cVar6 != '\0') {
      FUN_101032f2();
    }
    if ((param_2 & 2) == 0) {
      FUN_100fa4b1();
      local_5c = 0;
      cVar6 = FUN_10133727(local_54,0,0,&local_5c);
      if (cVar6 != '\0') {
        FUN_101032f2();
      }
    }
    FUN_101165cb();
  }
  *(uint *)(iVar9 + 0x2560) = uVar7;
  FUN_10111839();
  FUN_101165cb();
LAB_10144aa1:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_7c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

