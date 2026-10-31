/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140054ae2 */

undefined4 FUN_140054ae2(longlong param_1,longlong param_2,char *param_3,char *param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 ****ppppuVar9;
  bool bVar10;
  undefined1 local_2e0 [256];
  undefined8 local_1e0;
  undefined1 *local_1d8;
  undefined8 *local_1d0;
  undefined8 local_1c8;
  undefined8 *local_1c0;
  undefined8 local_1b8;
  int local_1b0 [2];
  undefined8 local_1a8;
  undefined1 local_1a0 [240];
  undefined1 local_b0 [32];
  undefined8 local_90;
  undefined8 ***local_88 [3];
  ulonglong local_70;
  undefined8 local_68;
  int local_60;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  FUN_14000550c(local_88,param_2,0);
  FUN_140007025();
  local_68 = 0xffff00000000;
  ppppuVar9 = local_88;
  if (7 < local_70) {
    ppppuVar9 = (undefined8 ****)local_88[0];
  }
  local_60 = FUN_1400dcbb0(ppppuVar9,local_1b0,3,0xffffffff);
  FUN_140007276(&local_68,local_60,local_1b0);
  iVar3 = local_60;
  local_1a8 = FUN_140007025();
  local_1b0[0] = iVar3;
  iVar5 = (int)local_68;
  if ((int)local_68 == 0) {
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14004137b("exists",local_1b0,local_88);
    }
    bVar10 = false;
  }
  else {
    FUN_140007025();
    bVar10 = iVar5 != 1;
  }
  FUN_140005690(local_88);
  if (!bVar10) {
    return 4;
  }
  if (*(longlong *)(param_2 + 0x10) == 0) {
    return 3;
  }
  if (*(char *)(param_1 + 0x41) != '\x01') {
    return 2;
  }
  FUN_14000550c(&local_68,param_2,0);
  FUN_140055d5e(&local_68,local_1b0);
  FUN_14000892c(local_88,local_1b0);
  FUN_140005690(local_1b0);
  FUN_140005690(&local_68);
  cVar4 = FUN_1400755d6(param_1,param_2);
  uVar6 = 0;
  if (cVar4 != '\0') {
    if ((*(char *)(param_1 + 0x132) == '\0') &&
       (cVar4 = FUN_140075738(param_1,param_2), cVar4 != '\0')) {
      uVar7 = FUN_1400554d2();
      FUN_14000169c(local_b0,"unpacked_msg");
      local_1c0 = (undefined8 *)FUN_1400aebe4(uVar7,local_b0);
      local_1b8 = local_1c0[2];
      if (7 < (ulonglong)local_1c0[3]) {
        local_1c0 = (undefined8 *)*local_1c0;
      }
      FUN_140052dd3(&local_68,&local_1c0,local_88);
      FUN_140052d74(local_1b0,&DAT_1401cc970,&local_68);
      FUN_140052e4f(local_1a0);
      FUN_140052e84(local_1b0);
      FUN_140005242(&local_68);
      FUN_1400017de(local_b0);
    }
    else {
      if (*param_3 == '\0') {
        uVar7 = FUN_1400554d2();
        FUN_14000169c(&local_68,"unpacking_msg");
        puVar8 = (undefined8 *)FUN_1400aebe4(uVar7,&local_68);
        uVar1 = puVar8[3];
        puVar2 = (undefined8 *)*puVar8;
        local_90 = puVar8[2];
        thunk_FUN_140062417(local_b0,local_88);
        local_1d0 = puVar8;
        if (7 < uVar1) {
          local_1d0 = puVar2;
        }
        local_1e0 = 1;
        local_1d8 = local_b0;
        local_1c8 = local_90;
        FUN_14005a9d3(local_1b0);
        FUN_140052d74(local_2e0,&DAT_1401cc970,local_1b0);
        FUN_140052e84(local_2e0);
        FUN_140005242(local_1b0);
        FUN_1400017de(&local_68);
      }
      cVar4 = FUN_14007730c(param_1,param_2,param_1 + 0x132);
      if (cVar4 == '\0') {
        if ((*(char *)(param_1 + 0x130) == '\0') &&
           (cVar4 = FUN_140055dfe(param_1,param_2), cVar4 == '\0')) {
          uVar7 = FUN_1400554d2();
          FUN_14000169c(&local_68,"failed_msg");
          uVar7 = FUN_1400aebe4(uVar7,&local_68);
          FUN_140052d74(local_1b0,&DAT_1401cc970,uVar7);
          FUN_140052e4f(local_1a0);
          FUN_140052e84(local_1b0);
          FUN_1400017de(&local_68);
          uVar6 = 1;
        }
        else {
          if (*param_4 == '\0') {
            local_1b0[0] = CONCAT31(local_1b0[0]._1_3_,1);
            iVar5 = FUN_1400553c0(param_1);
            if (iVar5 == 0) {
              local_1b0[0] = CONCAT31(local_1b0[0]._1_3_,1);
              local_68 = CONCAT71(local_68._1_7_,1);
              uVar6 = FUN_140054ae2(param_1,param_2);
              goto LAB_140054fe3;
            }
          }
          uVar7 = FUN_1400554d2();
          FUN_14000169c(&local_68,"failed_msg");
          uVar7 = FUN_1400aebe4(uVar7,&local_68);
          FUN_140052d74(local_1b0,&DAT_1401cc970,uVar7);
          FUN_140052e4f(local_1a0);
          FUN_140052e84(local_1b0);
          FUN_1400017de(&local_68);
          uVar6 = 5;
        }
      }
      else {
        uVar7 = FUN_1400554d2();
        FUN_14000169c(&local_68,"done_msg");
        uVar7 = FUN_1400aebe4(uVar7,&local_68);
        FUN_140052d74(local_1b0,&DAT_1401cc970,uVar7);
        FUN_140052e4f(local_1a0);
        FUN_140052e84(local_1b0);
        FUN_1400017de(&local_68);
      }
    }
  }
LAB_140054fe3:
  FUN_140005242(local_88);
  return uVar6;
}

