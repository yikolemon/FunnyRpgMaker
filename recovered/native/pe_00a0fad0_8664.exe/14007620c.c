/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007620c */

ulonglong FUN_14007620c(uint *param_1,undefined8 *param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 ****ppppuVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  wchar_t *local_2c8;
  undefined8 local_2c0;
  wchar_t *local_2b8;
  undefined8 local_2b0;
  wchar_t *local_2a8;
  undefined8 local_2a0;
  undefined1 local_298 [32];
  undefined1 local_278 [32];
  int local_258;
  int iStack_254;
  undefined8 uStack_250;
  int local_248;
  int iStack_244;
  int iStack_240;
  int iStack_23c;
  undefined8 ***local_158 [2];
  undefined8 local_148;
  ulonglong local_140;
  undefined8 ***local_138 [3];
  ulonglong local_120;
  undefined **local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  int local_f8;
  undefined8 ***local_e0 [3];
  ulonglong local_c8;
  undefined8 ***local_c0 [3];
  ulonglong local_a8;
  undefined8 ***local_a0;
  ulonglong local_98;
  longlong local_90;
  ulonglong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  code *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_4b;
  byte local_4a;
  byte local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  FUN_14000550c(local_c0,param_2,0);
  FUN_140007025();
  local_100 = 0xffff00000000;
  ppppuVar10 = local_c0;
  if (7 < local_a8) {
    ppppuVar10 = (undefined8 ****)local_c0[0];
  }
  local_f8 = FUN_1400dcbb0(ppppuVar10,&local_258,3,0xffffffff);
  FUN_140007276(&local_100,local_f8,&local_258);
  iVar2 = local_f8;
  local_98 = FUN_140007025();
  local_a0 = (undefined8 ***)CONCAT44(local_a0._4_4_,iVar2);
  iVar4 = (int)local_100;
  if ((int)local_100 == 0) {
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14004137b("exists",&local_a0,local_c0);
    }
  }
  else {
    FUN_140007025();
    if (iVar4 != 1) {
      local_a0 = (undefined8 ****)0xffff00000000;
      if (local_a8 < 8) {
        local_c0[0] = local_c0;
      }
      uVar3 = FUN_1400dcbb0(local_c0[0],&local_258,3,0xffffffff);
      local_98 = CONCAT44(local_98._4_4_,uVar3);
      FUN_140007276(&local_a0,uVar3,&local_258);
      if (((int)local_98 != 0) && (((uint)local_a0 & 0xfffffff7) != 1)) {
                    /* WARNING: Subroutine does not return */
        FUN_140041f39("status",local_98 & 0xffffffff,local_c0);
      }
      if ((uint)local_a0 == 3) {
        FUN_140052ee6(local_c0,&local_258);
        FUN_14000892c(&local_100,&local_258);
        FUN_140005690(&local_258);
        FUN_140075fec(local_c0,&local_258);
        FUN_14000892c(local_158,&local_258);
        FUN_140005690(&local_258);
        FUN_140055cae(&local_a0,&local_100,&DAT_140173c42);
        ppppuVar10 = local_158;
        if (7 < local_140) {
          ppppuVar10 = (undefined8 ****)local_158[0];
        }
        piVar6 = (int *)FUN_140008bae(&local_a0,ppppuVar10,local_148);
        local_258 = *piVar6;
        iStack_254 = piVar6[1];
        uStack_250 = *(undefined8 *)(piVar6 + 2);
        local_248 = piVar6[4];
        iStack_244 = piVar6[5];
        iStack_240 = piVar6[6];
        iStack_23c = piVar6[7];
        piVar6[4] = 0;
        piVar6[5] = 0;
        piVar6[6] = 7;
        piVar6[7] = 0;
        *(undefined2 *)piVar6 = 0;
        FUN_140052f9e(local_e0,&local_258,L".wolf");
        FUN_140005242(&local_258);
        FUN_140005242(&local_a0);
        bVar1 = *param_3;
        if (bVar1 == 0) {
          local_4b = 1;
          FUN_14000550c(local_138,local_e0,0);
          local_49 = 1;
          local_4a = 0;
          FUN_140007025();
          local_a0 = (undefined8 ****)0xffff00000000;
          ppppuVar10 = local_138;
          if (7 < local_120) {
            ppppuVar10 = (undefined8 ****)local_138[0];
          }
          uVar3 = FUN_1400dcbb0(ppppuVar10,&local_258,3,0xffffffff);
          local_98 = CONCAT44(local_98._4_4_,uVar3);
          FUN_140007276(&local_a0,uVar3,&local_258);
          iVar2 = (int)local_98;
          uStack_250 = FUN_140007025();
          local_258 = iVar2;
          iVar4 = (uint)local_a0;
          param_3 = (byte *)((ulonglong)local_a0 & 0xffffffff);
          if ((uint)local_a0 == 0) {
            if (iVar2 != 0) {
              local_49 = 1;
              local_4a = 1;
                    /* WARNING: Subroutine does not return */
              FUN_14004137b("exists",&local_258,local_138);
            }
            bVar13 = false;
          }
          else {
            FUN_140007025();
            bVar13 = iVar4 != 1;
          }
        }
        else {
          bVar13 = false;
        }
        local_4a = bVar1 ^ 1;
        local_49 = local_4a;
        if (bVar1 == 0) {
          FUN_140005690(local_138);
        }
        uVar7 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
        if (!bVar13) {
          uVar7 = (ulonglong)*param_1;
          if (uVar7 == 0xffffffff) {
            local_110 = 0;
            uStack_108 = 0;
            local_118 = InvalidModeException::vftable;
                    /* WARNING: Subroutine does not return */
            FUN_140106270(&local_118,&DAT_1401a2000);
          }
          lVar8 = DAT_1401cc260 - DAT_1401cc258 >> 4;
          uVar9 = lVar8 * -0x3333333333333333;
          uVar11 = (*(longlong *)(param_1 + 4) - *(longlong *)(param_1 + 2) >> 4) *
                   -0x3333333333333333;
          if (uVar7 < uVar11 + uVar9) {
            uVar12 = uVar7 + lVar8 * 0x3333333333333333;
            if (uVar7 < uVar9) {
              lVar8 = DAT_1401cc258 + uVar7 * 0x50;
            }
            else {
              if (uVar11 < uVar12 || uVar11 - uVar12 == 0) {
                FUN_140079428();
                goto LAB_140076999;
              }
              lVar8 = *(longlong *)(param_1 + 2) + uVar12 * 0x50;
            }
            FUN_140006874(&local_a0,lVar8);
            local_70 = *(code **)(lVar8 + 0x30);
            local_80 = *(undefined8 *)(lVar8 + 0x20);
            uStack_78 = *(undefined8 *)(lVar8 + 0x28);
            local_68 = 0;
            uStack_60 = 0;
            local_58 = 0;
            FUN_14005872a(&local_68,*(longlong *)(lVar8 + 0x40) - *(longlong *)(lVar8 + 0x38),
                          lVar8 + 0x38,lVar8 + 0x40);
            piVar6 = &local_258;
            FUN_14000550c(piVar6,&local_100,0);
            if (7 < CONCAT44(iStack_23c,iStack_240)) {
              piVar6 = (int *)CONCAT44(iStack_254,local_258);
            }
            iVar4 = FUN_1400dd1b0(piVar6);
            if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_140041f39("current_path(const path&)",iVar4,&local_258);
            }
            FUN_140005690(&local_258);
            if (local_70 == (code *)0x0) {
              FUN_14007709a(&local_258);
              ppppuVar10 = &local_a0;
              if (0xf < local_88) {
                ppppuVar10 = (undefined8 ****)local_a0;
              }
              FUN_140007482(&local_258,local_298,ppppuVar10,local_90 + (longlong)ppppuVar10);
              FUN_14007720c(&local_258);
              local_2a8 = L"Encryption function not found for mode: {}";
              local_2a0 = 0x2a;
              FUN_140052dd3(local_278,&local_2a8,local_298);
              FUN_140052d74(&local_258,&DAT_1401cc978,local_278);
              FUN_140052e4f(&local_248);
              FUN_140052e84(&local_258);
              FUN_140005242(local_278);
              if ((char)param_1[0x10] == '\x01') {
LAB_140076999:
                    /* WARNING: Subroutine does not return */
                ExitProcess(1);
              }
              FUN_140005242(local_298);
              uVar7 = 0;
            }
            else {
              if (7 < (ulonglong)param_2[3]) {
                param_2 = (undefined8 *)*param_2;
              }
              ppppuVar10 = local_e0;
              if (7 < local_c8) {
                ppppuVar10 = (undefined8 ****)local_e0[0];
              }
              uVar5 = (*local_70)(ppppuVar10,param_2,1,local_68,(undefined2)local_80);
              uVar7 = CONCAT71((int7)((ulonglong)&local_a0 >> 8),-1 < (int)uVar5);
              if (-1 >= (int)uVar5) {
                FUN_14000550c(&local_258,local_e0,0);
                FUN_1400761d3(&local_258);
                FUN_140005690(&local_258);
              }
              if ((char)param_1[0x10] == '\x01') {
                    /* WARNING: Subroutine does not return */
                ExitProcess(uVar5 >> 0x1f);
              }
            }
            FUN_140016e5c(&local_68);
            FUN_1400017de(&local_a0);
          }
          else {
            local_2b8 = L"Specified Mode: {} out of range";
            local_2b0 = 0x1f;
            FUN_14007701d(&local_a0,&local_2b8,param_1);
            FUN_140052d74(&local_258,&DAT_1401cc978,&local_a0);
            FUN_140052e4f(&local_248);
            FUN_140052e84(&local_258);
            FUN_140005242(&local_a0);
            if ((char)param_1[0x10] == '\x01') {
                    /* WARNING: Subroutine does not return */
              ExitProcess(1);
            }
            uVar7 = 0;
          }
        }
        FUN_140005242(local_e0);
        FUN_140005242(local_158);
        FUN_140005242(&local_100);
        goto LAB_1400764d1;
      }
    }
  }
  local_2c8 = L"Invalid directory: {}";
  local_2c0 = 0x15;
  FUN_140052dd3(&local_a0,&local_2c8,param_2);
  FUN_140052d74(&local_258,&DAT_1401cc978,&local_a0);
  FUN_140052e4f(&local_248);
  FUN_140052e84(&local_258);
  FUN_140005242(&local_a0);
  if ((char)param_1[0x10] == '\x01') {
                    /* WARNING: Subroutine does not return */
    ExitProcess(1);
  }
  uVar7 = 0;
LAB_1400764d1:
  FUN_140005690(local_c0);
  return uVar7 & 0xffffffff;
}

