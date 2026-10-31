/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005f7a1 */

ulonglong FUN_18005f7a1(void)

{
  undefined8 uVar1;
  DWORD DVar2;
  BOOL BVar3;
  LPCWSTR **pppWVar4;
  ulonglong uVar5;
  char *local_e0;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined *local_c0;
  LPCWSTR *local_b8 [2];
  longlong local_a8;
  ulonglong local_a0;
  uint local_94;
  LPVOID local_90;
  char *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  DWORD local_64;
  undefined1 local_60 [32];
  LPCWSTR *local_40 [3];
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_1800c8ca5(local_b8,0);
  if (local_a8 == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2c) < DAT_180417808) {
      FUN_18023d500(&DAT_180417808);
      if (DAT_180417808 == -1) {
        FUN_180021e84(&DAT_180417610);
        FUN_18023d710(&LAB_18002260a);
        _Init_thread_footer(&DAT_180417808);
      }
    }
    uVar1 = DAT_1804177e8;
    DVar2 = GetLastError();
    FUN_1800c88a4(local_60,DVar2);
    FUN_1800c9080(local_40,local_60);
    local_88 = "Failed to get exe path: {}";
    uStack_80 = 0x1a;
    local_d0 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\wolfrpg\\wolf_rpg_editor.cpp"
    ;
    local_c8 = 0x2e5;
    local_c0 = &DAT_18035f060;
    FUN_180059be0(uVar1,&local_d0,4,&local_88,local_40);
    FUN_180001ef2(local_40);
    FUN_1800010ec(local_60);
    uVar5 = 0;
  }
  else {
    local_64 = 0;
    FUN_1800c8ca5(local_40,0);
    pppWVar4 = local_40;
    if (7 < local_28) {
      pppWVar4 = (LPCWSTR **)local_40[0];
    }
    DVar2 = GetFileVersionInfoSizeW((LPCWSTR)pppWVar4,&local_64);
    FUN_1800010ec(local_40);
    if (DVar2 == 0) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2c) < DAT_180417808) {
        FUN_18023d500(&DAT_180417808);
        if (DAT_180417808 == -1) {
          FUN_180021e84(&DAT_180417610);
          FUN_18023d710(&LAB_18002260a);
          _Init_thread_footer(&DAT_180417808);
        }
      }
      uVar1 = DAT_1804177e8;
      DVar2 = GetLastError();
      FUN_1800c88a4(local_60,DVar2);
      FUN_1800c9080(local_40,local_60);
      local_88 = "Failed to get exe version size: {}";
      uStack_80 = 0x22;
      local_d0 = 
      "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\wolfrpg\\wolf_rpg_editor.cpp"
      ;
      local_c8 = 0x2ed;
      local_c0 = &DAT_18035f060;
      FUN_180059be0(uVar1,&local_d0,4,&local_88,local_40);
      FUN_180001ef2(local_40);
      FUN_1800010ec(local_60);
      uVar5 = 0;
    }
    else {
      local_88 = (char *)0x0;
      uStack_80 = 0;
      local_78 = 0;
      FUN_180016162();
      pppWVar4 = local_b8;
      if (7 < local_a0) {
        pppWVar4 = (LPCWSTR **)local_b8[0];
      }
      BVar3 = GetFileVersionInfoW((LPCWSTR)pppWVar4,0,DVar2,local_88);
      if (BVar3 == 0) {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x2c) < DAT_180417808) {
          FUN_18023d500(&DAT_180417808);
          if (DAT_180417808 == -1) {
            FUN_180021e84(&DAT_180417610);
            FUN_18023d710(&LAB_18002260a);
            _Init_thread_footer(&DAT_180417808);
          }
        }
        uVar1 = DAT_1804177e8;
        DVar2 = GetLastError();
        FUN_1800c88a4(local_60,DVar2);
        FUN_1800c9080(local_40,local_60);
        local_e0 = "Failed to get exe version info: {}";
        local_d8 = 0x22;
        local_d0 = 
        "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\wolfrpg\\wolf_rpg_editor.cpp"
        ;
        local_c8 = 0x2f4;
        local_c0 = &DAT_18035f060;
        FUN_180059be0(uVar1,&local_d0,4,&local_e0,local_40);
        FUN_180001ef2(local_40);
        FUN_1800010ec(local_60);
        uVar5 = 0;
      }
      else {
        local_90 = (LPVOID)0x0;
        local_94 = 0;
        BVar3 = VerQueryValueW(local_88,L"\\",&local_90,&local_94);
        if (BVar3 == 0) {
          if (*(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) <
              DAT_180417808) {
            FUN_18023d500(&DAT_180417808);
            if (DAT_180417808 == -1) {
              FUN_180021e84(&DAT_180417610);
              FUN_18023d710(&LAB_18002260a);
              _Init_thread_footer(&DAT_180417808);
            }
          }
          uVar1 = DAT_1804177e8;
          DVar2 = GetLastError();
          FUN_1800c88a4(local_60,DVar2);
          FUN_1800c9080(local_40,local_60);
          local_e0 = "Failed to query exe version value: {}";
          local_d8 = 0x25;
          local_d0 = 
          "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\wolfrpg\\wolf_rpg_editor.cpp"
          ;
          local_c8 = 0x2fb;
          local_c0 = &DAT_18035f060;
          FUN_180059be0(uVar1,&local_d0,4,&local_e0,local_40);
          FUN_180001ef2(local_40);
          FUN_1800010ec(local_60);
          uVar5 = 0;
        }
        else {
          DAT_180417a10 = *(uint *)((longlong)local_90 + 8);
          uVar5 = CONCAT71((int7)((ulonglong)pppWVar4 >> 8),0xffff < DAT_180417a10);
        }
      }
      FUN_180004cea(&local_88);
    }
  }
  FUN_1800010ec(local_b8);
  return uVar5 & 0xffffffff;
}

