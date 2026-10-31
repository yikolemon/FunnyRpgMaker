/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007cad4 */

void FUN_14007cad4(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 ****ppppuVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 local_780 [16];
  undefined1 local_770 [240];
  undefined1 local_680 [16];
  undefined1 local_670 [240];
  undefined8 local_580;
  int local_578;
  undefined1 local_570 [240];
  int local_480 [2];
  undefined8 local_478;
  undefined1 local_470 [240];
  longlong local_380;
  longlong local_378;
  char local_34f;
  undefined **local_308 [11];
  char local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  undefined1 local_288 [32];
  undefined1 local_268 [32];
  undefined8 *local_248;
  undefined8 local_240;
  longlong local_238;
  longlong lStack_230;
  undefined8 local_228 [31];
  longlong local_130;
  int local_128 [6];
  undefined8 local_110;
  int *local_108;
  undefined8 ***local_100 [3];
  ulonglong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  int local_d0;
  undefined8 ***local_b8 [3];
  ulonglong local_a0;
  longlong local_98;
  longlong lStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined4 local_6c;
  int local_68 [2];
  undefined8 local_60;
  undefined1 local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_78 = param_1;
  FUN_14007bc9a(&local_238,L"backup",0);
  FUN_14007dcb3(local_100,local_78,&local_238);
  FUN_140005690(&local_238);
  FUN_140007025();
  local_580 = 0xffff00000000;
  ppppuVar9 = local_100;
  if (7 < local_e8) {
    ppppuVar9 = (undefined8 ****)local_100[0];
  }
  local_578 = FUN_1400dcbb0(ppppuVar9,&local_238,3,0xffffffff);
  FUN_140007276(&local_580,local_578,&local_238);
  iVar2 = local_578;
  local_478 = FUN_140007025();
  local_480[0] = iVar2;
  iVar1 = (int)local_580;
  if ((int)local_580 == 0) {
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14004137b("exists",local_480,local_100);
    }
  }
  else {
    FUN_140007025();
    if (iVar1 != 1) goto code_r0x00014007cbf3;
  }
  if (local_e8 < 8) {
    local_100[0] = local_100;
  }
  uVar5 = FUN_1400dd1d0(local_100[0]);
  if (uVar5 >> 0x20 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140041f39("create_directory",uVar5 >> 0x20,local_100);
  }
code_r0x00014007cbf3:
  local_130 = DAT_1401cc670;
  lVar10 = DAT_1401cc668;
  do {
    if (lVar10 == local_130) {
      FUN_140005690(local_100);
      return;
    }
    local_e0 = lVar10;
    FUN_14005759c(&local_d8,lVar10,0);
    FUN_14000892c(local_68,&local_d8);
    uVar6 = FUN_1400554d2();
    FUN_14000169c(&local_98,"remove_prot");
    puVar7 = (undefined8 *)FUN_1400aebe4(uVar6,&local_98);
    uVar5 = puVar7[3];
    puVar11 = (undefined8 *)*puVar7;
    uVar6 = puVar7[2];
    thunk_FUN_140062417(local_128,local_68);
    local_248 = puVar7;
    if (7 < uVar5) {
      local_248 = puVar11;
    }
    local_110 = 1;
    local_108 = local_128;
    local_240 = uVar6;
    FUN_14005a9d3(local_b8,&local_248,&local_110);
    FUN_140052d74(&local_238,&DAT_1401cc970,local_b8);
    FUN_140041192(local_228);
    FUN_140052e84(&local_238);
    FUN_140005242(local_b8);
    FUN_1400017de(&local_98);
    FUN_140005242(local_68);
    FUN_140005690(&local_d8);
    FUN_14005759c(&local_238,local_e0,0);
    FUN_14007dcb3(local_b8,local_78,&local_238);
    FUN_140005690(&local_238);
    local_128[0] = FUN_14007c39f(local_b8);
    FUN_140007025();
    local_d8 = 0xffff00000000;
    ppppuVar9 = local_b8;
    if (7 < local_a0) {
      ppppuVar9 = (undefined8 ****)local_b8[0];
    }
    local_d0 = FUN_1400dcbb0(ppppuVar9,&local_238,3,0xffffffff);
    FUN_140007276(&local_d8,local_d0,&local_238);
    iVar2 = local_d0;
    local_60 = FUN_140007025();
    local_68[0] = iVar2;
    iVar1 = (int)local_d8;
    if ((int)local_d8 == 0) {
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_14004137b("exists",local_68,local_b8);
      }
LAB_14007cf5a:
      uVar6 = FUN_1400554d2();
      FUN_14000169c(local_68,"failed_msg");
      uVar6 = FUN_1400aebe4(uVar6,local_68);
      FUN_140052d74(&local_238,&DAT_1401cc970,uVar6);
      FUN_140052e4f(local_228);
      FUN_140052e84(&local_238);
      FUN_1400017de(local_68);
      FUN_14007de26(&local_238,&DAT_1401cc978);
      FUN_1400ac5a3(local_228,local_b8);
      FUN_140052e4f(local_228);
      FUN_140052e84(&local_238);
    }
    else {
      FUN_140007025();
      if (iVar1 == 1) goto LAB_14007cf5a;
      FUN_14007de85(local_b8,local_100);
      FUN_14007e000(&local_98,local_b8);
      local_110 = CONCAT44(local_110._4_4_,(int)lStack_90 - (int)local_98);
      cVar4 = FUN_14007e26d(&local_98,local_128);
      if (cVar4 == '\0') {
        uVar6 = FUN_1400554d2();
        FUN_14000169c(local_68,"failed_msg");
        FUN_1400aebe4(uVar6,local_68);
        FUN_140052d74(&local_238,&DAT_1401cc970);
        FUN_140052e4f(local_228);
        FUN_140052e84(&local_238);
        FUN_1400017de(local_68);
      }
      else {
        if (local_128[0] == 0) {
          FUN_14007ca47(&local_98,&local_110);
        }
        FUN_14007eaab(local_b8,&local_98);
        if (local_98 != lStack_90) {
          lStack_90 = local_98;
        }
        if (local_128[0] == 1) {
          local_41 = 0;
          FUN_14007ebfe(local_308,local_b8,&local_41);
          lVar3 = local_2a0;
          cVar4 = local_2b0;
          puVar11 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar11 >> 8),local_2b0);
          lVar10 = local_2a8;
          if (local_2b0 == '\0') {
            uVar6 = FUN_1400554d2();
            FUN_14000169c(local_288,"failed_msg");
            uVar6 = FUN_1400aebe4(uVar6,local_288);
            FUN_140052d74(local_480,&DAT_1401cc970,uVar6);
            FUN_140052e4f(local_470);
            FUN_140052e84(local_480);
            FUN_1400017de(local_288);
            FUN_14007de26(&local_580,&DAT_1401cc978);
            FUN_140052e4f(local_570);
            FUN_140052e84(&local_580);
          }
          else {
            for (; lVar10 != lVar3; lVar10 = lVar10 + 0xde0) {
              FUN_1400a111e(lVar10);
            }
            FUN_14007ece0(local_308);
          }
          local_308[0] = CommonEvents::vftable;
          FUN_14008d172(&local_2a8);
          FUN_140086508(local_308);
          if (cVar4 == '\0') goto LAB_14007d3d3;
        }
        if (local_128[0] == 2) {
          FUN_140041956(local_68,local_b8);
          FUN_140005554(&local_238,".project",0);
          FUN_14007f1da(local_68,&local_238);
          FUN_140005690(&local_238);
          FUN_14007de85(local_68,local_100);
          FUN_14007e000(&local_238,local_68);
          FUN_140016e5c(&local_98);
          local_98 = local_238;
          lStack_90 = lStack_230;
          local_88 = local_228[0];
          local_238 = 0;
          lStack_230 = 0;
          local_228[0] = 0;
          FUN_140016e5c(&local_238);
          FUN_14007caa5(&local_98);
          FUN_14007eaab(local_68,&local_98);
          FUN_14007f23c(&local_380,local_68);
          lVar3 = local_378;
          uVar6 = CONCAT71((int7)((ulonglong)puVar11 >> 8),local_34f);
          lVar10 = local_380;
          if (local_34f == '\0') {
            uVar8 = FUN_1400554d2();
            FUN_14000169c(local_268,"failed_msg");
            uVar8 = FUN_1400aebe4(uVar8,local_268);
            FUN_140052d74(local_780,&DAT_1401cc970,uVar8);
            FUN_140052e4f(local_770);
            FUN_140052e84(local_780);
            FUN_1400017de(local_268);
            FUN_14007de26(local_680,&DAT_1401cc978);
            FUN_140052e4f(local_670);
            FUN_140052e84(local_680);
          }
          else {
            for (; lVar10 != lVar3; lVar10 = lVar10 + 0xa0) {
              FUN_1400aab1a(lVar10);
            }
            FUN_14007f354(&local_380,local_78);
          }
          local_6c = (undefined4)uVar6;
          FUN_14007f7bc(&local_380);
          FUN_140005690(local_68);
          if ((char)local_6c == '\0') goto LAB_14007d3d3;
        }
        uVar6 = FUN_1400554d2();
        FUN_14000169c(local_68,"done_msg");
        FUN_1400aebe4(uVar6,local_68);
        FUN_140052d74(&local_238,&DAT_1401cc970);
        FUN_140052e4f(local_228);
        FUN_140052e84(&local_238);
        FUN_1400017de(local_68);
      }
LAB_14007d3d3:
      FUN_140016e5c(&local_98);
    }
    FUN_140005690(local_b8);
    lVar10 = local_e0 + 0x20;
  } while( true );
}

