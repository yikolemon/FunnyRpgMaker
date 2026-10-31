/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100053c2 */

undefined4 FUN_100053c2(undefined4 param_1)

{
  int iVar1;
  DWORD DVar2;
  LPCWSTR ***ppppWVar3;
  LPWSTR ***lpszShortPath;
  int *unaff_FS_OFFSET;
  bool bVar4;
  int local_9c;
  undefined4 local_98;
  undefined4 local_94 [4];
  DWORD local_84;
  char *local_7c;
  undefined4 uStack_78;
  char *local_74;
  undefined4 uStack_70;
  undefined4 local_6c [4];
  DWORD local_5c;
  LPCWSTR **local_54 [4];
  undefined4 local_44;
  uint local_40;
  LPWSTR **local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  DWORD local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_9c;
  local_14 = 0xffffffff;
  local_18 = &LAB_10012940;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_9c = 0;
  local_98 = FUN_10002303();
  FUN_10005738();
  local_14 = 0;
  if (local_9c == 0) {
    ppppWVar3 = local_54;
    if (7 < local_40) {
      ppppWVar3 = (LPCWSTR ***)local_54[0];
    }
    FUN_10005a0c(&local_3c,ppppWVar3,local_44,local_6c);
    local_14 = 0xffffffff;
    iVar1 = (DWORD)local_2c;
    FUN_10001fee();
    if (iVar1 == 1) {
LAB_100055ec:
      local_94[0] = 2;
      local_74 = "FunnyGamePlayer-TempExtDir\\{}";
      uStack_70 = 0x1d;
      local_14 = 0;
      FUN_1000589a(local_6c,0x1d1032f6a5,local_94);
      local_14 = 1;
      FUN_100058f6();
      local_14 = 2;
      FUN_10001cfb(param_1,local_54,&local_3c);
      local_14 = 0xffffffff;
      FUN_10001f04();
      FUN_10001fee();
      goto LAB_10005676;
    }
    ppppWVar3 = (LPCWSTR ***)local_54[0];
    if (local_40 < 8) {
      ppppWVar3 = local_54;
    }
    local_14 = 0;
    DVar2 = GetShortPathNameW((LPCWSTR)ppppWVar3,(LPWSTR)0x0,0);
    if (0 < (int)DVar2) {
      local_3c = (LPWSTR **)0x0;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      local_2c = 0;
      local_14 = 0;
      local_24 = DVar2;
      FUN_10005b1e();
      local_14 = 4;
      lpszShortPath = &local_3c;
      if (7 < local_2c._4_4_) {
        lpszShortPath = (LPWSTR ***)local_3c;
      }
      ppppWVar3 = (LPCWSTR ***)local_54[0];
      if (local_40 < 8) {
        ppppWVar3 = local_54;
      }
      DVar2 = GetShortPathNameW((LPCWSTR)ppppWVar3,(LPWSTR)lpszShortPath,local_24);
      if (DVar2 == (DWORD)local_2c) {
        FUN_10005976(&local_3c);
        ppppWVar3 = local_54;
        if (7 < local_40) {
          ppppWVar3 = (LPCWSTR ***)local_54[0];
        }
        FUN_10005a0c(local_6c,ppppWVar3,local_44,local_94);
        local_14 = 5;
        local_24 = local_5c;
        FUN_10003728(local_54);
        bVar4 = local_24 == local_84;
        local_14 = 0xffffffff;
        FUN_10001134();
        FUN_10001fee();
      }
      else {
        bVar4 = false;
      }
      local_14 = 0xffffffff;
      FUN_10001134();
      if (bVar4) goto LAB_100055ec;
    }
  }
  local_6c[0] = 2;
  local_7c = "C:\\Users\\Public\\FunnyGamePlayer-TempExtDir\\{}";
  uStack_78 = 0x2d;
  local_14 = 0;
  FUN_1000589a(&local_3c,0x2d1032f695,local_6c);
  local_14 = 3;
  FUN_100058f6();
  local_14 = 0xffffffff;
  FUN_10001fee();
LAB_10005676:
  FUN_10001f04();
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}

