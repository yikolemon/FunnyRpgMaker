/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140083f56 */

bool FUN_140083f56(undefined8 param_1,LPCWSTR param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  BOOL BVar3;
  HANDLE hFile;
  undefined8 uVar4;
  undefined8 *puVar5;
  LPCWSTR lpFileName;
  bool bVar6;
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
  hFile = CreateFileW(lpFileName,0x40000000,2,(LPSECURITY_ATTRIBUTES)0x0,2,0,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    uVar4 = FUN_1400554d2();
    FUN_14000169c(local_68,"open_file_error_msg");
    puVar5 = (undefined8 *)FUN_1400aebe4(uVar4,local_68);
    uVar1 = puVar5[3];
    puVar2 = (undefined8 *)*puVar5;
    uVar4 = puVar5[2];
    thunk_FUN_140062417(local_c8,param_2);
    local_a0 = puVar5;
    if (7 < uVar1) {
      local_a0 = puVar2;
    }
    local_b0 = 1;
    local_a8 = local_c8;
    local_98 = uVar4;
    FUN_14005a9d3(local_88);
    FUN_140052d74(local_1c8,&DAT_1401cc978,local_88);
    FUN_140052e4f(local_1b8);
    FUN_140052e84(local_1c8);
    FUN_140005242(local_88);
    FUN_1400017de(local_68);
    bVar6 = false;
  }
  else {
    local_8c = 0;
    BVar3 = WriteFile(hFile,(LPCVOID)*param_3,*(int *)(param_3 + 1) - (int)(LPCVOID)*param_3,
                      &local_8c,(LPOVERLAPPED)0x0);
    CloseHandle(hFile);
    bVar6 = BVar3 != 0;
    if (!bVar6) {
      uVar4 = FUN_1400554d2();
      FUN_14000169c(local_68,"write_file_error_msg");
      puVar5 = (undefined8 *)FUN_1400aebe4(uVar4,local_68);
      uVar1 = puVar5[3];
      puVar2 = (undefined8 *)*puVar5;
      uVar4 = puVar5[2];
      thunk_FUN_140062417(local_c8,param_2);
      local_a0 = puVar5;
      if (7 < uVar1) {
        local_a0 = puVar2;
      }
      local_b0 = 1;
      local_a8 = local_c8;
      local_98 = uVar4;
      FUN_14005a9d3(local_88);
      FUN_140052d74(local_1c8,&DAT_1401cc978,local_88);
      FUN_140052e4f(local_1b8);
      FUN_140052e84(local_1c8);
      FUN_140005242(local_88);
      FUN_1400017de(local_68);
    }
  }
  return bVar6;
}

