/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005fe6c */

bool FUN_1005fe6c(void)

{
  DWORD DVar1;
  BOOL BVar2;
  LPCWSTR **pppWVar3;
  bool bVar4;
  uint local_84;
  LPCWSTR *local_80 [4];
  int local_70;
  uint local_6c;
  LPVOID local_68;
  undefined4 local_64;
  undefined4 local_60;
  DWORD local_5c;
  LPVOID local_58;
  undefined1 local_54 [24];
  LPCWSTR *local_3c [5];
  uint local_28;
  DWORD local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_84;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c1a50;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_100c522a(local_80,0);
  local_14 = 0;
  if (local_70 == 0) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039c928) {
      FUN_1022c0d0(&DAT_1039c928);
      if (DAT_1039c928 == -1) {
        local_14 = 2;
        FUN_10021a06();
        FUN_1022c3a0(&LAB_1002210b);
        local_14 = 0xffffffff;
        FUN_1022c180(&DAT_1039c928);
      }
    }
    local_24 = DAT_1039c914;
    local_14 = 0;
    DVar1 = GetLastError();
    FUN_100c4e7c(local_54,DVar1);
    local_14 = 0xd;
    FUN_100c5628(local_3c,local_54);
    local_14 = 0xe;
    FUN_10058860("C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\wolfrpg\\wolf_rpg_editor.cpp"
                 ,0x2e5,&DAT_1032ef44,4,"Failed to get exe path: {}",0x1a,local_3c);
    local_14 = 0xffffffff;
    FUN_10001fee();
    FUN_10001134();
    bVar4 = false;
  }
  else {
    local_5c = 0;
    FUN_100c522a(local_3c,0);
    local_14 = 3;
    pppWVar3 = local_3c;
    if (7 < local_28) {
      pppWVar3 = (LPCWSTR **)local_3c[0];
    }
    DVar1 = GetFileVersionInfoSizeW((LPCWSTR)pppWVar3,&local_5c);
    local_14 = 0xffffffff;
    FUN_10001134();
    if (DVar1 == 0) {
      if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039c928)
      {
        FUN_1022c0d0(&DAT_1039c928);
        if (DAT_1039c928 == -1) {
          local_14 = 1;
          FUN_10021a06();
          FUN_1022c3a0(&LAB_1002210b);
          local_14 = 0xffffffff;
          FUN_1022c180(&DAT_1039c928);
        }
      }
      local_24 = DAT_1039c914;
      local_14 = 0;
      DVar1 = GetLastError();
      FUN_100c4e7c(local_54,DVar1);
      local_14 = 0xb;
      FUN_100c5628(local_3c,local_54);
      local_14 = 0xc;
      FUN_10058860("C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\wolfrpg\\wolf_rpg_editor.cpp"
                   ,0x2ed,&DAT_1032ef44,4,"Failed to get exe version size: {}",0x22,local_3c);
      local_14 = 0xffffffff;
      FUN_10001fee();
      FUN_10001134();
      bVar4 = false;
    }
    else {
      local_68 = (LPVOID)0x0;
      local_64 = 0;
      local_60 = 0;
      local_14 = 0;
      local_24 = DVar1;
      FUN_100164d2(DVar1);
      local_14 = 4;
      pppWVar3 = local_80;
      if (7 < local_6c) {
        pppWVar3 = (LPCWSTR **)local_80[0];
      }
      BVar2 = GetFileVersionInfoW((LPCWSTR)pppWVar3,0,local_24,local_68);
      if (BVar2 == 0) {
        if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) <
            DAT_1039c928) {
          FUN_1022c0d0(&DAT_1039c928);
          if (DAT_1039c928 == -1) {
            local_14 = 6;
            FUN_10021a06();
            FUN_1022c3a0(&LAB_1002210b);
            local_14 = 0xffffffff;
            FUN_1022c180(&DAT_1039c928);
          }
        }
        local_24 = DAT_1039c914;
        local_14 = 4;
        DVar1 = GetLastError();
        FUN_100c4e7c(local_54,DVar1);
        local_14 = 9;
        FUN_100c5628(local_3c,local_54);
        local_14 = 10;
        FUN_10058860("C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\wolfrpg\\wolf_rpg_editor.cpp"
                     ,0x2f4,&DAT_1032ef44,4,"Failed to get exe version info: {}",0x22,local_3c);
        local_14 = 0xffffffff;
        FUN_10001fee();
        FUN_10001134();
        bVar4 = false;
      }
      else {
        local_58 = (LPVOID)0x0;
        local_84 = 0;
        BVar2 = VerQueryValueW(local_68,L"\\",&local_58,&local_84);
        if (BVar2 == 0) {
          if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) <
              DAT_1039c928) {
            FUN_1022c0d0(&DAT_1039c928);
            if (DAT_1039c928 == -1) {
              local_14 = 5;
              FUN_10021a06();
              FUN_1022c3a0(&LAB_1002210b);
              local_14 = 0xffffffff;
              FUN_1022c180(&DAT_1039c928);
            }
          }
          local_24 = DAT_1039c914;
          local_14 = 4;
          DVar1 = GetLastError();
          FUN_100c4e7c(local_54,DVar1);
          local_14 = 7;
          FUN_100c5628(local_3c,local_54);
          local_14 = 8;
          FUN_10058860("C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\wolfrpg\\wolf_rpg_editor.cpp"
                       ,0x2fb,&DAT_1032ef44,4,"Failed to query exe version value: {}",0x25,local_3c)
          ;
          local_14 = 0xffffffff;
          FUN_10001fee();
          FUN_10001134();
          bVar4 = false;
        }
        else {
          DAT_1039ca4c = *(uint *)((int)local_58 + 8);
          bVar4 = 0xffff < DAT_1039ca4c;
        }
        local_14 = 0xffffffff;
      }
      FUN_10004eae();
    }
  }
  FUN_10001134();
  ExceptionList = local_1c;
  return bVar4;
}

