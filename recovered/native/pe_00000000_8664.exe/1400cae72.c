/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400cae72 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_1400cae72(undefined8 param_1,char *param_2,char *param_3,undefined4 param_4,char param_5)

{
  float fVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_108 [32];
  float local_e8;
  char local_d2;
  char local_d1;
  undefined8 local_d0;
  uint local_c8;
  undefined4 local_c4;
  ulonglong local_c0;
  
  lVar4 = DAT_140f2a910;
  local_c0 = DAT_140f17b40 ^ (ulonglong)auStack_108;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  lVar3 = *(longlong *)(lVar4 + 0x1608);
  if (*(char *)(lVar3 + 0x10e) == '\0') {
    fVar1 = *(float *)(lVar3 + 0x158);
    fVar13 = *(float *)(lVar3 + 0x15c);
    uVar8 = FUN_14007b050(param_1,0);
    local_e8 = -1.0;
    FUN_14007b686(&local_c8,param_1,uVar8,0);
    local_d1 = FUN_1400cad70();
    if (local_d1 != '\0') {
      FUN_14008f7a2(0x2000,1);
    }
    FUN_1400912b0(param_1);
    if (param_5 == '\0') {
      FUN_14008f898(1);
    }
    if (*(int *)(lVar3 + 0x214) == 0) {
      fVar12 = (float)(int)(*(float *)(lVar4 + 0xe04) * DAT_1401c86a0) + *(float *)(lVar3 + 0x158);
      *(float *)(lVar3 + 0x158) = fVar12;
      fVar1 = *(float *)(lVar3 + 0x15c);
      fVar13 = *(float *)(lVar3 + 400);
      uVar2 = *(ushort *)(lVar3 + 0x1d0);
      FUN_14007ac4d(0xe,*(float *)(lVar4 + 0xe04) + *(float *)(lVar4 + 0xe04));
      local_d0 = (ulonglong)local_c8;
      uVar6 = FUN_1400b2126(&DAT_140edcdbf,param_4,0x2800000);
      FUN_14007af87(1);
      if ((*(byte *)(lVar4 + 0x1fe9) & 1) != 0) {
        FUN_14007b084(CONCAT44(fVar1 + fVar13,fVar12 + (float)uVar2),param_1,uVar8,0);
      }
      *(float *)(lVar3 + 0x158) =
           (float)(int)(*(float *)(lVar4 + 0xe04) * DAT_1402115a8) + *(float *)(lVar3 + 0x158);
    }
    else {
      local_d2 = (char)param_4;
      fVar12 = 0.0;
      if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
        local_e8 = -1.0;
        FUN_14007b686(&local_d0,param_2,0,0);
        fVar12 = (float)local_d0;
      }
      fVar11 = 0.0;
      if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
        local_e8 = -1.0;
        FUN_14007b686(&local_d0,param_3,0,0);
        fVar11 = (float)local_d0;
      }
      local_e8 = (float)(int)(*(float *)(lVar4 + 0x1320) * DAT_140211670);
      fVar9 = (float)FUN_1400c9b70(lVar3 + 0x1c4,fVar12,local_c8,fVar11);
      FUN_14008a381(&local_d0);
      fVar10 = (float)FUN_14007b71f(0,(float)local_d0 - fVar9);
      fVar13 = fVar13 + *(float *)(lVar3 + 400);
      local_d0 = CONCAT44(local_c4,fVar9);
      uVar6 = FUN_1400b2126(&DAT_140edcdbf,0,0x3800000,&local_d0);
      if ((*(byte *)(lVar4 + 0x1fe9) & 1) != 0) {
        fVar9 = fVar13 + 0.0;
        FUN_14007b084(CONCAT44(fVar9,(float)*(ushort *)(lVar3 + 0x1d0) + fVar1),param_1,uVar8,0);
        if (0.0 < fVar12) {
          FUN_14007b084(CONCAT44(fVar9,(float)*(ushort *)(lVar3 + 0x1ce) + fVar1),param_2,0,1);
        }
        if (0.0 < fVar11) {
          FUN_14007a7b5(0,lVar4 + 0xef8);
          FUN_140096567(&DAT_140ed959a,&DAT_140ed9598);
          FUN_14007b084(CONCAT44(fVar9,(float)*(ushort *)(lVar3 + 0x1d2) + fVar10 + fVar1),param_3,0
                        ,0);
          FUN_14007a8e1(1);
        }
        if (local_d2 != '\0') {
          fVar12 = *(float *)(lVar4 + 0x1320) * _DAT_140211ecc;
          uVar7 = FUN_14007a557(0,DAT_1401c86c8);
          FUN_1400e6f37(*(undefined8 *)(lVar3 + 800),
                        CONCAT44(fVar13 + DAT_140211ed0 * *(float *)(lVar4 + 0x1320) * DAT_1401c86a0
                                 ,fVar1 + *(float *)(lVar4 + 0x1320) * DAT_140210024 +
                                          fVar10 + (float)*(ushort *)(lVar3 + 0x1d4)),uVar7,fVar12);
        }
      }
    }
    if ((((*(int *)(lVar4 + 0x167c) == *(int *)(lVar4 + 0x1fe0)) &&
         (*(int *)(lVar4 + 0x1664) != *(int *)(lVar4 + 0x1fe0))) && (*(int *)(lVar4 + 0x169c) == 1))
       && (cVar5 = FUN_1400816f9(0,DAT_1401c86a4), cVar5 != '\0')) {
      FUN_14008076e();
      FUN_140092507(0x290,0xffffffff,0);
    }
    if (param_5 == '\0') {
      FUN_14008f98e();
    }
    FUN_140091667();
    if (local_d1 != '\0') {
      FUN_14008f860();
    }
  }
  else {
    uVar6 = 0;
  }
  if (DAT_140f17b40 != (local_c0 ^ (ulonglong)auStack_108)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_c0 ^ (ulonglong)auStack_108);
  }
  return uVar6;
}

