/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007730c */

ulonglong FUN_14007730c(uint *param_1,undefined8 *param_2,char *param_3)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 ***pppuVar9;
  undefined8 unaff_RDI;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined1 local_408 [528];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined8 local_1d8;
  code *pcStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  wchar_t *local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  ulonglong local_68;
  int local_60 [2];
  undefined8 local_58;
  undefined8 **local_50 [3];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_14000550c(local_a8,param_2,0);
  FUN_140052ff2(local_408);
  FUN_14000892c(local_e8,local_408);
  FUN_140005690(local_408);
  FUN_140052ee6(local_a8,local_408);
  FUN_14000892c(local_c8,local_408);
  FUN_140005690(local_408);
  FUN_140075fec(local_a8,local_408);
  FUN_14000892c(local_88,local_408);
  FUN_140005690(local_408);
  puVar6 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    puVar6 = (undefined8 *)*param_2;
  }
  uVar12 = FUN_1400baaa8(puVar6,local_408,0);
  cVar1 = FUN_1400755d6(uVar12,param_2);
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if (cVar1 == '\0') goto LAB_1400777d9;
  uVar12 = extraout_XMM0_Da;
  if (*param_3 == '\0') {
    cVar1 = FUN_140075738(extraout_XMM0_Da,param_2);
    uVar12 = extraout_XMM0_Da_00;
    if (cVar1 != '\0') goto LAB_1400777d9;
  }
  uVar4 = *param_1;
  if (uVar4 == 0xffffffff) {
    uVar2 = FUN_140077c12(uVar12,param_2);
    if (uVar2 != 0) {
      if (uVar2 != 200 && uVar2 < 1000) {
        cVar1 = FUN_140077eee(param_1,param_2);
        if (cVar1 != '\0') {
          uVar4 = *param_1;
          goto LAB_140077410;
        }
      }
      goto LAB_140077531;
    }
    uVar4 = FUN_140077d84(param_1,param_2,param_3);
  }
  else {
LAB_140077410:
    uVar5 = (ulonglong)uVar4;
    lVar7 = DAT_1401cc260 - DAT_1401cc258 >> 4;
    uVar8 = lVar7 * -0x3333333333333333;
    uVar10 = (*(longlong *)(param_1 + 4) - *(longlong *)(param_1 + 2) >> 4) * -0x3333333333333333;
    if (uVar10 + uVar8 <= uVar5) {
      local_f8 = L"Specified Mode: {} out of range";
      local_f0 = 0x1f;
      FUN_14007701d(local_50,&local_f8,param_1);
      FUN_140052d74(local_1f8,&DAT_1401cc978,local_50);
      FUN_140052e4f(local_1e8);
      FUN_140052e84(local_1f8);
      FUN_140005242(local_50);
      if ((char)param_1[0x10] == '\x01') {
                    /* WARNING: Subroutine does not return */
        ExitProcess(1);
      }
LAB_140077531:
      uVar5 = 0;
      goto LAB_1400777d9;
    }
    if ((char)param_1[0x10] != '\0') {
      uVar11 = uVar5 + lVar7 * 0x3333333333333333;
      if (uVar5 < uVar8) {
        lVar7 = DAT_1401cc258 + uVar5 * 0x50;
      }
      else {
        if (uVar10 < uVar11 || uVar10 - uVar11 == 0) {
          iVar3 = FUN_140079428();
          goto LAB_14007787c;
        }
        lVar7 = *(longlong *)(param_1 + 2) + uVar11 * 0x50;
      }
      FUN_140006874(local_1f8,lVar7);
      local_1c8 = *(undefined8 *)(lVar7 + 0x30);
      local_1d8 = *(undefined8 *)(lVar7 + 0x20);
      pcStack_1d0 = *(code **)(lVar7 + 0x28);
      local_1c0 = 0;
      uStack_1b8 = 0;
      local_1b0 = 0;
      FUN_14005872a(&local_1c0,*(longlong *)(lVar7 + 0x40) - *(longlong *)(lVar7 + 0x38),
                    lVar7 + 0x38,lVar7 + 0x40);
      FUN_14000550c(local_50,local_88,0);
      pppuVar9 = local_50;
      if (7 < local_38) {
        pppuVar9 = (undefined8 ***)local_50[0];
      }
      uVar5 = FUN_1400dd1d0(pppuVar9);
      if (uVar5 >> 0x20 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140041f39("create_directory",uVar5 >> 0x20,local_50);
      }
      FUN_140005690(local_50);
      FUN_14000550c(local_50,local_88,0);
      pppuVar9 = local_50;
      if (7 < local_38) {
        pppuVar9 = (undefined8 ***)local_50[0];
      }
      iVar3 = FUN_1400dd1b0(pppuVar9);
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140041f39("current_path(const path&)",iVar3,local_50);
      }
      FUN_140005690(local_50);
      uVar4 = (*pcStack_1d0)(local_408,&DAT_140174404,local_1c0);
      uVar5 = CONCAT71((int7)((ulonglong)pppuVar9 >> 8),-1 < (int)uVar4);
      if (-1 >= (int)uVar4) {
        FUN_14000550c(local_50,local_c8,0);
        pppuVar9 = local_50;
        if (7 < local_38) {
          pppuVar9 = (undefined8 ***)local_50[0];
        }
        iVar3 = FUN_1400dd1b0(pppuVar9);
        if (iVar3 != 0) {
LAB_14007787c:
                    /* WARNING: Subroutine does not return */
          FUN_140041f39("current_path(const path&)",iVar3,local_50);
        }
        FUN_140005690(local_50);
        FUN_14000550c(local_50,local_88,0);
        FUN_140007025();
        FUN_140007025();
        pppuVar9 = local_50;
        if (7 < local_38) {
          pppuVar9 = (undefined8 ***)local_50[0];
        }
        uVar8 = FUN_1400dd250(pppuVar9);
        iVar3 = (int)(uVar8 >> 0x20);
        local_68 = (ulonglong)((uint)uVar8 & 1);
        local_58 = FUN_140007025();
        local_60[0] = iVar3;
        if (uVar8 >> 0x20 == 0x91) {
          FUN_140079439(local_50,local_60,&local_68);
        }
        if (local_60[0] != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_14004137b("remove_all",local_60,local_50);
        }
        FUN_140005690(local_50);
      }
      if ((char)param_1[0x10] == '\x01') {
                    /* WARNING: Subroutine does not return */
        ExitProcess(uVar4 >> 0x1f);
      }
      FUN_14000550c(local_50,local_e8,0);
      pppuVar9 = local_50;
      if (7 < local_38) {
        pppuVar9 = (undefined8 ***)local_50[0];
      }
      iVar3 = FUN_1400dd1b0(pppuVar9);
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140041f39("current_path(const path&)",iVar3,local_50);
      }
      FUN_140005690(local_50);
      FUN_140016e5c(&local_1c0);
      FUN_1400017de(local_1f8);
      goto LAB_1400777d9;
    }
    uVar4 = FUN_140077f94(param_1,param_2,param_1,param_3);
  }
  uVar5 = (ulonglong)uVar4;
LAB_1400777d9:
  FUN_140005242(local_88);
  FUN_140005242(local_c8);
  FUN_140005242(local_e8);
  FUN_140005690(local_a8);
  return uVar5 & 0xffffffff;
}

