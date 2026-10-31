/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100be32a */

bool __fastcall FUN_100be32a(int ***param_1)

{
  int ***pppiVar1;
  bool bVar2;
  int **local_70;
  undefined1 *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [32];
  int ***local_40;
  int local_3c;
  int **local_34;
  undefined1 *local_30;
  int ***local_2c;
  int ***local_28;
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_70;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c1dd0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_34 = (int **)param_1;
  pppiVar1 = &local_70;
  if (DAT_1039caf4 == 0) {
    FUN_100bea21();
    local_14 = 0xffffffff;
    FUN_10001134();
    pppiVar1 = (int ***)local_20;
  }
  local_20 = (undefined1 *)pppiVar1;
  if (DAT_1039caf8 == 0) {
    local_30 = (undefined1 *)((int)local_34[1] + (int)*local_34);
    FUN_100b1566(local_34,&local_30,"81 FA E0 00 00 00 7C ? 8B 45 08 0F B6 08 81 F9 FC 00 00 00");
    local_14 = 3;
    local_40 = (int ***)&local_40;
    local_2c = (int ***)0x0;
    local_28 = (int ***)0x0;
    local_24 = 0;
    local_6c = local_60;
    FUN_100b1f98(1,&local_6c,&local_40);
    local_14 = 4;
    FUN_100b1127();
    local_14 = 0xffffffff;
    FUN_100b21ee();
    local_14 = 0xffffffff;
    FUN_10001fee();
    if (local_3c - (int)local_40 == 4) {
      local_14 = 7;
      local_70 = *local_40 + -0x14;
      pppiVar1 = &local_70;
      if (local_70 <= *local_34) {
        pppiVar1 = (int ***)local_34;
      }
      FUN_100b1566(pppiVar1,local_40,"55 8B EC");
      local_14 = 9;
      local_6c = (undefined1 *)0x0;
      local_68 = 0;
      local_64 = 0;
      local_2c = (int ***)&local_40;
      local_30 = local_60;
      FUN_100b1f98(1,&local_30,&local_2c);
      local_14 = 10;
      FUN_100b1127();
      local_14 = 0xffffffff;
      FUN_100b21ee();
      local_14 = 0xffffffff;
      FUN_10001fee();
      local_14 = 0xb;
      if (local_2c != local_28) {
        FUN_100beab7();
        local_14 = 0xffffffff;
        FUN_10001134();
      }
      local_14 = 0xffffffff;
      FUN_10004eae();
    }
    local_14 = 0xffffffff;
    FUN_10004eae();
  }
  if (DAT_1039cafc == 0) {
    local_30 = (undefined1 *)((int)local_34[1] + (int)*local_34);
    FUN_100b1566(local_34,&local_30,"8B 44 24 08 3D B1 04 00 00");
    local_14 = 0xf;
    local_40 = (int ***)&local_40;
    local_2c = (int ***)0x0;
    local_28 = (int ***)0x0;
    local_24 = 0;
    local_6c = local_60;
    FUN_100b1f98(1,&local_6c,&local_40);
    local_14 = 0x10;
    FUN_100b1127();
    local_14 = 0xffffffff;
    FUN_100b21ee();
    local_14 = 0xffffffff;
    FUN_10001fee();
    local_14 = 0x11;
    if (local_3c - (int)local_40 == 4) {
      FUN_100beb4d();
      local_14 = 0xffffffff;
      FUN_10001134();
    }
    local_14 = 0xffffffff;
    FUN_10004eae();
  }
  if (DAT_1039cb00 == 0) {
    local_30 = (undefined1 *)((int)local_34[1] + (int)*local_34);
    FUN_100b1566(local_34,&local_30,"81 ? FE 7F 00 00 0F 84 ???? 81 ? E9 FD 00 00");
    local_14 = 0x15;
    local_40 = (int ***)&local_40;
    local_2c = (int ***)0x0;
    local_28 = (int ***)0x0;
    local_24 = 0;
    local_6c = local_60;
    FUN_100b1f98(1,&local_6c,&local_40);
    local_14 = 0x16;
    FUN_100b1127();
    local_14 = 0xffffffff;
    FUN_100b21ee();
    local_14 = 0xffffffff;
    FUN_10001fee();
    if (local_3c - (int)local_40 == 4) {
      local_14 = 0x19;
      local_70 = *local_40 + -0x480;
      pppiVar1 = (int ***)local_34;
      if (*local_34 < local_70) {
        pppiVar1 = &local_70;
      }
      FUN_100b1566(pppiVar1,local_40,"83 EC ? 83 3D ???? 00 75");
      local_14 = 0x1b;
      local_6c = (undefined1 *)0x0;
      local_68 = 0;
      local_64 = 0;
      local_2c = (int ***)&local_40;
      local_30 = local_60;
      FUN_100b1f98(1,&local_30,&local_2c);
      local_14 = 0x1c;
      FUN_100b1127();
      local_14 = 0xffffffff;
      FUN_100b21ee();
      local_14 = 0xffffffff;
      FUN_10001fee();
      local_14 = 0x1d;
      if (local_2c != local_28) {
        FUN_100bebd3();
        local_14 = 0xffffffff;
        FUN_10001134();
      }
      local_14 = 0xffffffff;
      FUN_10004eae();
    }
    local_14 = 0xffffffff;
    FUN_10004eae();
  }
  bVar2 = true;
  if (((DAT_1039caf4 == 0) && (DAT_1039caf8 == 0)) && (DAT_1039cafc == 0)) {
    bVar2 = DAT_1039cb00 != 0;
  }
  ExceptionList = local_1c;
  return bVar2;
}

