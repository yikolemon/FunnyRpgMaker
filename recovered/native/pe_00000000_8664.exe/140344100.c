/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140344100 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140344100(wchar_t *param_1,wchar_t *param_2,ulonglong param_3)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  size_t sVar5;
  wchar_t *pwVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0 [2];
  float local_b8;
  float fStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  
  lVar3 = DAT_14062a630;
  local_a0 = ram0x000140613b10 ^ (ulonglong)auStack_e8;
  *(undefined1 *)(*(longlong *)(DAT_14062a630 + 0x1608) + 0x10b) = 1;
  lVar2 = *(longlong *)(lVar3 + 0x1608);
  if (*(char *)(lVar2 + 0x10e) == '\0') {
    if (param_1 == param_2) {
      param_1 = L"pNonPic";
      param_2 = L"pNonPic";
    }
    if (param_2 == (wchar_t *)0x0) {
      sVar5 = strlen((char *)param_1);
      param_2 = (wchar_t *)((longlong)param_1 + sVar5);
    }
    fVar1 = *(float *)(lVar2 + 0x158);
    fVar12 = *(float *)(lVar2 + 0x15c) + *(float *)(lVar2 + 400);
    if (((longlong)param_2 - (longlong)param_1 < 0x7d1) ||
       (fVar11 = 0.0, 0.0 <= *(float *)(lVar2 + 0x244))) {
      uVar10 = 0;
      if (0.0 <= *(float *)(lVar2 + 0x244)) {
        uVar10 = FUN_1403192af(lVar2 + 0x158);
      }
      local_c8 = uVar10;
      FUN_14031389a(&local_a8,param_1,param_2,0);
      local_b0 = CONCAT44(fVar12 + (float)(local_a8 >> 0x20),fVar1 + (float)local_a8);
      local_b8 = fVar1;
      fStack_b4 = fVar12;
      FUN_1403229e4(&local_a8,0);
      cVar4 = FUN_140322b86(&local_b8,0,0,0);
      if (cVar4 != '\0') {
        FUN_14031356d(CONCAT44(fStack_b4,local_b8),param_1,param_2,uVar10);
      }
    }
    else {
      fVar9 = (float)FUN_1403280d8();
      local_a8 = 0;
      fVar13 = fVar12;
      if ((*(char *)(lVar3 + 0x2a40) == '\0') &&
         (iVar7 = (int)((*(float *)(lVar2 + 700) - fVar12) / fVar9), 0 < iVar7)) {
        fVar11 = 0.0;
        if (param_1 < param_2) {
          iVar8 = 0;
          do {
            pwVar6 = (wchar_t *)FUN_1404b9620(param_1,10,(longlong)param_2 - (longlong)param_1);
            if (pwVar6 == (wchar_t *)0x0) {
              pwVar6 = param_2;
            }
            if ((param_3 & 1) == 0) {
              local_c8 = 0xbf800000;
              FUN_14031389a(&local_b8,param_1,pwVar6,0);
              fVar11 = (float)FUN_140313933(local_a8 & 0xffffffff,local_b8);
              local_a8 = CONCAT44(local_a8._4_4_,fVar11);
            }
            param_1 = (wchar_t *)((longlong)pwVar6 + 1);
            iVar8 = iVar8 + 1;
          } while ((param_1 < param_2) && (iVar8 < iVar7));
          fVar13 = (float)iVar8;
        }
        else {
          fVar13 = 0.0;
        }
        fVar13 = fVar13 * fVar9 + fVar12;
      }
      if (param_1 < param_2) {
        local_b0._4_4_ = fVar9 + fVar13;
        local_b0._0_4_ = DAT_1404efa34 + fVar1;
        local_b8 = fVar1;
        fStack_b4 = fVar13;
        do {
          cVar4 = FUN_140319202(&local_b8,0);
          if (cVar4 != '\0') break;
          pwVar6 = (wchar_t *)FUN_1404b9620(param_1,10,(longlong)param_2 - (longlong)param_1);
          if (pwVar6 == (wchar_t *)0x0) {
            pwVar6 = param_2;
          }
          local_c8 = 0xbf800000;
          FUN_14031389a(local_c0,param_1,pwVar6,0);
          uVar10 = FUN_140313933(local_a8 & 0xffffffff,local_c0[0]);
          local_a8 = CONCAT44(local_a8._4_4_,uVar10);
          FUN_140313298(CONCAT44(fVar13,fVar1),param_1,pwVar6);
          param_1 = (wchar_t *)((longlong)pwVar6 + 1);
          fStack_b4 = fStack_b4 + fVar9;
          local_b0._4_4_ = local_b0._4_4_ + fVar9;
          fVar13 = fVar13 + fVar9;
        } while (param_1 < param_2);
        fVar11 = 0.0;
        if (param_1 < param_2) {
          iVar7 = 0;
          do {
            pwVar6 = (wchar_t *)FUN_1404b9620(param_1,10,(longlong)param_2 - (longlong)param_1);
            if (pwVar6 == (wchar_t *)0x0) {
              pwVar6 = param_2;
            }
            if ((param_3 & 1) == 0) {
              local_c8 = 0xbf800000;
              FUN_14031389a(local_c0,param_1,pwVar6,0);
              uVar10 = FUN_140313933(local_a8 & 0xffffffff,local_c0[0]);
              local_a8 = CONCAT44(local_a8._4_4_,uVar10);
            }
            param_1 = (wchar_t *)((longlong)pwVar6 + 1);
            iVar7 = iVar7 + 1;
          } while (param_1 < param_2);
          fVar11 = (float)iVar7;
        }
        fVar13 = fVar13 + fVar11 * fVar9;
        fVar11 = (float)local_a8;
      }
      local_a8 = CONCAT44(fVar13 - fVar12,(float)local_a8);
      local_b0 = CONCAT44((fVar13 - fVar12) + fVar12,fVar11 + fVar1);
      local_b8 = fVar1;
      fStack_b4 = fVar12;
      FUN_1403229e4(&local_a8,0);
      FUN_140322b86(&local_b8,0,0,0);
    }
  }
  if (ram0x000140613b10 == (local_a0 ^ (ulonglong)auStack_e8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_a0 ^ (ulonglong)auStack_e8);
}

