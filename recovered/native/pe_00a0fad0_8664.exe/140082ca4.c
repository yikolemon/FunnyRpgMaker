/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140082ca4 */

ulonglong FUN_140082ca4(undefined8 param_1,LPCWSTR param_2,undefined8 *param_3,DWORD *param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  DWORD DVar3;
  BOOL BVar4;
  HANDLE hFile;
  undefined8 uVar5;
  undefined8 *puVar6;
  LPCWSTR lpFileName;
  ulonglong uVar7;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [240];
  undefined1 local_c8 [24];
  undefined8 local_b0;
  undefined1 *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  DWORD local_8c;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lpFileName = param_2;
  if (7 < *(ulonglong *)(param_2 + 0xc)) {
    lpFileName = *(LPCWSTR *)param_2;
  }
  hFile = CreateFileW(lpFileName,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    uVar5 = FUN_1400554d2();
    FUN_14000169c(local_68,"open_file_error_msg");
    puVar6 = (undefined8 *)FUN_1400aebe4(uVar5,local_68);
    uVar7 = puVar6[3];
    puVar2 = (undefined8 *)*puVar6;
    uVar5 = puVar6[2];
    thunk_FUN_140062417(local_c8,param_2);
    local_a0 = puVar6;
    if (7 < uVar7) {
      local_a0 = puVar2;
    }
    local_b0 = 1;
    local_a8 = local_c8;
    local_98 = uVar5;
    FUN_14005a9d3(local_88);
    FUN_140052d74(local_1c8,&DAT_1401cc978,local_88);
    FUN_140052e4f(local_1b8);
    FUN_140052e84(local_1c8);
    FUN_140005242(local_88);
    FUN_1400017de(local_68);
    uVar7 = 0;
  }
  else {
    DVar3 = GetFileSize(hFile,(LPDWORD)0x0);
    *param_4 = DVar3;
    if (DVar3 == 0xffffffff) {
      uVar5 = FUN_1400554d2();
      FUN_14000169c(local_68,"get_file_size_error_msg");
      puVar6 = (undefined8 *)FUN_1400aebe4(uVar5,local_68);
      uVar7 = puVar6[3];
      puVar2 = (undefined8 *)*puVar6;
      uVar5 = puVar6[2];
      thunk_FUN_140062417(local_c8,param_2);
      local_a0 = puVar6;
      if (7 < uVar7) {
        local_a0 = puVar2;
      }
      local_b0 = 1;
      local_a8 = local_c8;
      local_98 = uVar5;
      FUN_14005a9d3(local_88);
      FUN_140052d74(local_1c8,&DAT_1401cc978,local_88);
      FUN_140052e4f(local_1b8);
      FUN_140052e84(local_1c8);
      FUN_140005242(local_88);
      FUN_1400017de(local_68);
      CloseHandle(hFile);
      uVar7 = 0;
    }
    else {
      local_1c8[0] = 0;
      FUN_1400abbc6(param_3,DVar3);
      local_8c = 0;
      BVar4 = ReadFile(hFile,(LPVOID)*param_3,*param_4,&local_8c,(LPOVERLAPPED)0x0);
      CloseHandle(hFile);
      uVar7 = CONCAT71((int7)((ulonglong)hFile >> 8),BVar4 != 0);
      if (BVar4 == 0) {
        uVar5 = FUN_1400554d2();
        FUN_14000169c(local_68,"read_file_error_msg");
        puVar6 = (undefined8 *)FUN_1400aebe4(uVar5,local_68);
        uVar1 = puVar6[3];
        puVar2 = (undefined8 *)*puVar6;
        uVar5 = puVar6[2];
        thunk_FUN_140062417(local_c8,param_2);
        local_a0 = puVar6;
        if (7 < uVar1) {
          local_a0 = puVar2;
        }
        local_b0 = 1;
        local_a8 = local_c8;
        local_98 = uVar5;
        FUN_14005a9d3(local_88);
        FUN_140052d74(local_1c8,&DAT_1401cc978,local_88);
        FUN_140052e4f(local_1b8);
        FUN_140052e84(local_1c8);
        FUN_140005242(local_88);
        FUN_1400017de(local_68);
      }
    }
  }
  return uVar7 & 0xffffffff;
}

