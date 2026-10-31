/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140053d0a */

undefined4 FUN_140053d0a(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined8 ****ppppuVar8;
  bool bVar9;
  undefined1 local_2c8 [256];
  undefined1 local_1c8 [24];
  int local_1b0 [2];
  undefined8 local_1a8;
  undefined1 local_1a0 [240];
  undefined8 local_b0;
  undefined1 *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 ***local_90 [3];
  ulonglong local_78;
  undefined8 local_70;
  int local_68;
  byte local_4e;
  undefined1 local_4d;
  byte local_4c;
  byte local_4b;
  byte local_4a;
  byte local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar7 = 1;
  if (*(char *)(param_1 + 0x130) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) == 0) {
      uVar7 = 3;
    }
    else {
      FUN_14000550c(local_90,param_2,0);
      FUN_140007025();
      local_70 = 0xffff00000000;
      ppppuVar8 = local_90;
      if (7 < local_78) {
        ppppuVar8 = (undefined8 ****)local_90[0];
      }
      local_68 = FUN_1400dcbb0(ppppuVar8,local_1b0,3,0xffffffff);
      FUN_140007276(&local_70,local_68,local_1b0);
      iVar4 = local_68;
      local_1a8 = FUN_140007025();
      local_1b0[0] = iVar4;
      iVar3 = (int)local_70;
      if ((int)local_70 == 0) {
        if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_14004137b("exists",local_1b0,local_90);
        }
        bVar9 = false;
      }
      else {
        FUN_140007025();
        bVar9 = iVar3 != 1;
      }
      FUN_140005690(local_90);
      uVar7 = 4;
      if ((bVar9) && (uVar7 = 2, *(char *)(param_1 + 0x41) == '\x01')) {
        FUN_14000550c(&local_70,param_2,0);
        FUN_140055d5e(&local_70,local_1b0);
        FUN_14000892c(local_90,local_1b0);
        FUN_140005690(local_1b0);
        FUN_140005690(&local_70);
        uVar5 = FUN_1400554d2();
        FUN_14000169c(&local_70,"packing_msg");
        puVar6 = (undefined8 *)FUN_1400aebe4(uVar5,&local_70);
        uVar1 = puVar6[3];
        puVar2 = (undefined8 *)*puVar6;
        uVar5 = puVar6[2];
        thunk_FUN_140062417(local_1c8,local_90);
        local_a0 = puVar6;
        if (7 < uVar1) {
          local_a0 = puVar2;
        }
        local_b0 = 1;
        local_a8 = local_1c8;
        local_98 = uVar5;
        FUN_14005a9d3(local_1b0);
        FUN_140052d74(local_2c8,&DAT_1401cc970,local_1b0);
        FUN_140052e84(local_2c8);
        FUN_140005242(local_1b0);
        FUN_1400017de(&local_70);
        local_49 = FUN_14007620c(param_1,param_2,param_1 + 0x132);
        if (local_49 == 0) {
          local_4c = 0;
          uVar5 = FUN_1400554d2();
          local_4d = 1;
          FUN_14000169c(&local_70,"failed_msg");
          local_4a = 1;
          local_4b = 1;
          uVar5 = FUN_1400aebe4(uVar5,&local_70);
        }
        else {
          uVar5 = FUN_1400554d2();
          FUN_14000169c(&local_70,"done_msg");
          local_4c = 1;
          uVar5 = FUN_1400aebe4(uVar5,&local_70);
        }
        local_4e = local_49 ^ 1;
        local_4b = local_4e;
        local_4a = local_4e;
        FUN_140052d74(local_1b0,&DAT_1401cc970,uVar5);
        FUN_140052e4f(local_1a0);
        FUN_140052e84(local_1b0);
        local_4a = local_4e;
        local_4b = local_4e;
        if (local_49 == 0) {
          FUN_1400017de(&local_70);
        }
        local_4c = local_49;
        if (local_49 != 0) {
          FUN_1400017de(&local_70);
        }
        uVar7 = 999;
        if (local_49 != 0) {
          uVar7 = 0;
        }
        FUN_140005242(local_90);
      }
    }
  }
  return uVar7;
}

