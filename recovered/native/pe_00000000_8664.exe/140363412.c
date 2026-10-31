/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140363412 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_140363412(undefined8 param_1,char *param_2,char *param_3,undefined4 param_4,char param_5)

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
  
  lVar4 = DAT_14062a630;
  local_c0 = ram0x000140613b10 ^ (ulonglong)auStack_108;
  *(undefined1 *)(*(longlong *)(DAT_14062a630 + 0x1608) + 0x10b) = 1;
  lVar3 = *(longlong *)(lVar4 + 0x1608);
  if (*(char *)(lVar3 + 0x10e) == '\0') {
    fVar1 = *(float *)(lVar3 + 0x158);
    fVar13 = *(float *)(lVar3 + 0x15c);
    uVar8 = FUN_140313264(param_1,0);
    local_e8 = -1.0;
    FUN_14031389a(&local_c8,param_1,uVar8,0);
    local_d1 = FUN_140363310();
    if (local_d1 != '\0') {
      FUN_14032795a(0x2000,1);
    }
    FUN_140329468(param_1);
    if (param_5 == '\0') {
      FUN_140327a50(1);
    }
    if (*(int *)(lVar3 + 0x214) == 0) {
      fVar12 = (float)(int)(*(float *)(lVar4 + 0xe04) * DAT_1404ecffc) + *(float *)(lVar3 + 0x158);
      *(float *)(lVar3 + 0x158) = fVar12;
      fVar1 = *(float *)(lVar3 + 0x15c);
      fVar13 = *(float *)(lVar3 + 400);
      uVar2 = *(ushort *)(lVar3 + 0x1d0);
      FUN_140312e61(0xe,*(float *)(lVar4 + 0xe04) + *(float *)(lVar4 + 0xe04));
      local_d0 = (ulonglong)local_c8;
      uVar6 = FUN_14034a6c6(L"pNonPic",param_4,0x2800000);
      FUN_14031319b(1);
      if ((*(byte *)(lVar4 + 0x1fe9) & 1) != 0) {
        FUN_140313298(CONCAT44(fVar1 + fVar13,fVar12 + (float)uVar2),param_1,uVar8,0);
      }
      *(float *)(lVar3 + 0x158) =
           (float)(int)(*(float *)(lVar4 + 0xe04) * DAT_1404efd18) + *(float *)(lVar3 + 0x158);
    }
    else {
      local_d2 = (char)param_4;
      fVar12 = 0.0;
      if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
        local_e8 = -1.0;
        FUN_14031389a(&local_d0,param_2,0,0);
        fVar12 = (float)local_d0;
      }
      fVar11 = 0.0;
      if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
        local_e8 = -1.0;
        FUN_14031389a(&local_d0,param_3,0,0);
        fVar11 = (float)local_d0;
      }
      local_e8 = (float)(int)(*(float *)(lVar4 + 0x1320) * DAT_1404efdd4);
      fVar9 = (float)FUN_140362110(lVar3 + 0x1c4,fVar12,local_c8,fVar11);
      FUN_140322539(&local_d0);
      fVar10 = (float)FUN_140313933(0,(float)local_d0 - fVar9);
      fVar13 = fVar13 + *(float *)(lVar3 + 400);
      local_d0 = CONCAT44(local_c4,fVar9);
      uVar6 = FUN_14034a6c6(L"pNonPic",0,0x3800000,&local_d0);
      if ((*(byte *)(lVar4 + 0x1fe9) & 1) != 0) {
        fVar9 = fVar13 + 0.0;
        FUN_140313298(CONCAT44(fVar9,(float)*(ushort *)(lVar3 + 0x1d0) + fVar1),param_1,uVar8,0);
        if (0.0 < fVar12) {
          FUN_140313298(CONCAT44(fVar9,(float)*(ushort *)(lVar3 + 0x1ce) + fVar1),param_2,0,1);
        }
        if (0.0 < fVar11) {
          FUN_1403129c9(0,lVar4 + 0xef8);
          FUN_14032e77b("ect imgui API call! Otherwise it would severely hinder your ability to catch and correct mistakes!"
                        ,
                        "irect imgui API call! Otherwise it would severely hinder your ability to catch and correct mistakes!"
                       );
          FUN_140313298(CONCAT44(fVar9,(float)*(ushort *)(lVar3 + 0x1d2) + fVar10 + fVar1),param_3,0
                        ,0);
          FUN_140312af5(1);
        }
        if (local_d2 != '\0') {
          fVar12 = *(float *)(lVar4 + 0x1320) * _DAT_1404f062c;
          uVar7 = FUN_14031276b(0,DAT_1404bda40);
          FUN_1403ace93(*(undefined8 *)(lVar3 + 800),
                        CONCAT44(fVar13 + DAT_1404f0630 * *(float *)(lVar4 + 0x1320) * DAT_1404ecffc
                                 ,fVar1 + *(float *)(lVar4 + 0x1320) * DAT_1404ccda8 +
                                          fVar10 + (float)*(ushort *)(lVar3 + 0x1d4)),uVar7,fVar12);
        }
      }
    }
    if ((((*(int *)(lVar4 + 0x167c) == *(int *)(lVar4 + 0x1fe0)) &&
         (*(int *)(lVar4 + 0x1664) != *(int *)(lVar4 + 0x1fe0))) && (*(int *)(lVar4 + 0x169c) == 1))
       && (cVar5 = FUN_1403198b1(0,DAT_1404ccdb0), cVar5 != '\0')) {
      FUN_140318926();
      FUN_14032a6bf(0x290,0xffffffff,0);
    }
    if (param_5 == '\0') {
      FUN_140327b46();
    }
    FUN_14032981f();
    if (local_d1 != '\0') {
      FUN_140327a18();
    }
  }
  else {
    uVar6 = 0;
  }
  if (ram0x000140613b10 != (local_c0 ^ (ulonglong)auStack_108)) {
                    /* WARNING: Subroutine does not return */
    FUN_14044aba0(local_c0 ^ (ulonglong)auStack_108);
  }
  return uVar6;
}

