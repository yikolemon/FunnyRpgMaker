/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400abb60 */

void FUN_1400abb60(char *param_1,char *param_2,ulonglong param_3)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  size_t sVar5;
  char *pcVar6;
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
  
  lVar3 = DAT_140f2a910;
  local_a0 = DAT_140f17b40 ^ (ulonglong)auStack_e8;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  lVar2 = *(longlong *)(lVar3 + 0x1608);
  if (*(char *)(lVar2 + 0x10e) == '\0') {
    if (param_1 == param_2) {
      param_1 = "";
      param_2 = "";
    }
    if (param_2 == (char *)0x0) {
      sVar5 = strlen(param_1);
      param_2 = param_1 + sVar5;
    }
    fVar1 = *(float *)(lVar2 + 0x158);
    fVar12 = *(float *)(lVar2 + 0x15c) + *(float *)(lVar2 + 400);
    if (((longlong)param_2 - (longlong)param_1 < 0x7d1) ||
       (fVar11 = 0.0, 0.0 <= *(float *)(lVar2 + 0x244))) {
      uVar10 = 0;
      if (0.0 <= *(float *)(lVar2 + 0x244)) {
        uVar10 = FUN_1400810f7(lVar2 + 0x158);
      }
      local_c8 = uVar10;
      FUN_14007b686(&local_a8,param_1,param_2,0);
      local_b0 = CONCAT44(fVar12 + (float)(local_a8 >> 0x20),fVar1 + (float)local_a8);
      local_b8 = fVar1;
      fStack_b4 = fVar12;
      FUN_14008a82c(&local_a8,0);
      cVar4 = FUN_14008a9ce(&local_b8,0,0,0);
      if (cVar4 != '\0') {
        FUN_14007b359(CONCAT44(fStack_b4,local_b8),param_1,param_2,uVar10);
      }
    }
    else {
      fVar9 = (float)FUN_14008ff20();
      local_a8 = 0;
      fVar13 = fVar12;
      if ((*(char *)(lVar3 + 0x2a40) == '\0') &&
         (iVar7 = (int)((*(float *)(lVar2 + 700) - fVar12) / fVar9), 0 < iVar7)) {
        fVar11 = 0.0;
        if (param_1 < param_2) {
          iVar8 = 0;
          do {
            pcVar6 = (char *)FUN_1401c4fe0(param_1,10,(longlong)param_2 - (longlong)param_1);
            if (pcVar6 == (char *)0x0) {
              pcVar6 = param_2;
            }
            if ((param_3 & 1) == 0) {
              local_c8 = 0xbf800000;
              FUN_14007b686(&local_b8,param_1,pcVar6,0);
              fVar11 = (float)FUN_14007b71f(local_a8 & 0xffffffff,local_b8);
              local_a8 = CONCAT44(local_a8._4_4_,fVar11);
            }
            param_1 = pcVar6 + 1;
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
        local_b0._0_4_ = DAT_1402112e4 + fVar1;
        local_b8 = fVar1;
        fStack_b4 = fVar13;
        do {
          cVar4 = FUN_14008104a(&local_b8,0);
          if (cVar4 != '\0') break;
          pcVar6 = (char *)FUN_1401c4fe0(param_1,10,(longlong)param_2 - (longlong)param_1);
          if (pcVar6 == (char *)0x0) {
            pcVar6 = param_2;
          }
          local_c8 = 0xbf800000;
          FUN_14007b686(local_c0,param_1,pcVar6,0);
          uVar10 = FUN_14007b71f(local_a8 & 0xffffffff,local_c0[0]);
          local_a8 = CONCAT44(local_a8._4_4_,uVar10);
          FUN_14007b084(CONCAT44(fVar13,fVar1),param_1,pcVar6);
          param_1 = pcVar6 + 1;
          fStack_b4 = fStack_b4 + fVar9;
          local_b0._4_4_ = local_b0._4_4_ + fVar9;
          fVar13 = fVar13 + fVar9;
        } while (param_1 < param_2);
        fVar11 = 0.0;
        if (param_1 < param_2) {
          iVar7 = 0;
          do {
            pcVar6 = (char *)FUN_1401c4fe0(param_1,10,(longlong)param_2 - (longlong)param_1);
            if (pcVar6 == (char *)0x0) {
              pcVar6 = param_2;
            }
            if ((param_3 & 1) == 0) {
              local_c8 = 0xbf800000;
              FUN_14007b686(local_c0,param_1,pcVar6,0);
              uVar10 = FUN_14007b71f(local_a8 & 0xffffffff,local_c0[0]);
              local_a8 = CONCAT44(local_a8._4_4_,uVar10);
            }
            param_1 = pcVar6 + 1;
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
      FUN_14008a82c(&local_a8,0);
      FUN_14008a9ce(&local_b8,0,0,0);
    }
  }
  if (DAT_140f17b40 == (local_a0 ^ (ulonglong)auStack_e8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_a0 ^ (ulonglong)auStack_e8);
}

