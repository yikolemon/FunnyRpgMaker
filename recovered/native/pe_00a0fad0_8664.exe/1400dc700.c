/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400dc700 */

void FUN_1400dc700(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  DWORD DVar2;
  BOOL BVar3;
  int iVar4;
  HANDLE hFile;
  HANDLE hFile_00;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  bool local_c8;
  undefined2 uStack_c7;
  undefined1 uStack_c5;
  uint uStack_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80 [16];
  longlong local_70;
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_1401c9640 ^ (ulonglong)auStack_f8;
  param_3 = param_3 & 0xf;
  if (param_3 == 2) {
LAB_1400dc97a:
    local_a8 = 0;
    local_c0 = 0x20;
    local_b8 = 0;
    uStack_b0 = 0;
    uVar1 = CopyFile2(param_1,param_2,&local_c0);
    local_c8 = (bool)((byte)(uVar1 >> 0x1f) ^ 1);
    uStack_c4 = 0;
    if ((int)uVar1 < 0) {
      uStack_c4 = uVar1 & 0xffff;
    }
    goto LAB_1400dc9cb;
  }
  local_a8 = 0;
  local_c0 = 0x100000020;
  local_b8 = 0;
  uStack_b0 = 0;
  uVar1 = CopyFile2(0,param_2,&local_c0);
  if ((int)uVar1 < 0) {
    uStack_c4 = uVar1 & 0xffff;
  }
  else {
    uStack_c4 = 0;
  }
  local_c8 = (int)uVar1 >= 0;
  if ((uStack_c4 != 0x50) || (param_3 == 0)) goto LAB_1400dc9cb;
  local_98 = 0;
  local_d8 = &local_a0;
  local_a0 = 0x20;
  uVar5 = 3;
  if (param_3 != 1) {
    uVar5 = 1;
  }
  local_90 = 0;
  uStack_88 = 0;
  hFile = (HANDLE)CreateFile2(param_1,0x80,uVar5,3);
  if ((hFile == (HANDLE)0xffffffffffffffff) && (DVar2 = GetLastError(), DVar2 != 0)) {
    local_c8 = false;
    uStack_c4 = DVar2;
    goto LAB_1400dc9cb;
  }
  local_b8 = 0;
  local_d8 = &local_c0;
  local_c0 = 0x20;
  uStack_b0 = 0;
  local_a8 = 0;
  hFile_00 = (HANDLE)CreateFile2(param_2,0x80,uVar5,3);
  if ((hFile_00 == (HANDLE)0xffffffffffffffff) && (DVar2 = GetLastError(), DVar2 != 0)) {
    if ((hFile == (HANDLE)0xffffffffffffffff) || (BVar3 = CloseHandle(hFile), BVar3 != 0)) {
      local_c8 = false;
      uStack_c4 = DVar2;
      goto LAB_1400dc9cb;
    }
    goto LAB_1400dcaeb;
  }
  if (param_3 == 4) {
    BVar3 = GetFileInformationByHandleEx(hFile,FileBasicInfo,local_80,0x28);
    lVar6 = local_70;
    if (BVar3 != 0) {
LAB_1400dc914:
      BVar3 = GetFileInformationByHandleEx(hFile_00,FileBasicInfo,local_80,0x28);
      if (BVar3 == 0) {
        uVar1 = GetLastError();
        if (uVar1 != 0) goto LAB_1400dc8c7;
        local_70 = CONCAT44(uStack_c4,CONCAT13(uStack_c5,CONCAT21(uStack_c7,local_c8)));
      }
      if (local_70 < lVar6) {
        if (((hFile_00 != (HANDLE)0xffffffffffffffff) && (BVar3 = CloseHandle(hFile_00), BVar3 == 0)
            ) || ((hFile != (HANDLE)0xffffffffffffffff && (BVar3 = CloseHandle(hFile), BVar3 == 0)))
           ) goto LAB_1400dcaeb;
        goto LAB_1400dc97a;
      }
      goto LAB_1400dc9f2;
    }
    uVar1 = GetLastError();
    if (uVar1 == 0) {
      lVar6 = CONCAT44(uStack_c4,CONCAT13(uStack_c5,CONCAT21(uStack_c7,local_c8)));
      goto LAB_1400dc914;
    }
LAB_1400dc8c7:
    if (((hFile_00 != (HANDLE)0xffffffffffffffff) && (BVar3 = CloseHandle(hFile_00), BVar3 == 0)) ||
       ((hFile != (HANDLE)0xffffffffffffffff && (BVar3 = CloseHandle(hFile), BVar3 == 0)))) {
LAB_1400dcaeb:
                    /* WARNING: Subroutine does not return */
      FUN_140115938();
    }
  }
  else {
LAB_1400dc9f2:
    uVar1 = FUN_1400dd580(hFile,local_80);
    if ((uVar1 == 0) && (uVar1 = FUN_1400dd580(hFile_00,local_58), uVar1 == 0)) {
      iVar4 = memcmp(local_80,local_58,0x18);
      if (iVar4 == 0) {
        if (((hFile_00 != (HANDLE)0xffffffffffffffff) && (BVar3 = CloseHandle(hFile_00), BVar3 == 0)
            ) || ((hFile != (HANDLE)0xffffffffffffffff && (BVar3 = CloseHandle(hFile), BVar3 == 0)))
           ) {
LAB_1400dcaf1:
                    /* WARNING: Subroutine does not return */
          FUN_140115938();
        }
        local_c8 = false;
        uStack_c4 = 0x20;
      }
      else {
        if (((hFile_00 != (HANDLE)0xffffffffffffffff) && (BVar3 = CloseHandle(hFile_00), BVar3 == 0)
            ) || ((hFile != (HANDLE)0xffffffffffffffff && (BVar3 = CloseHandle(hFile), BVar3 == 0)))
           ) goto LAB_1400dcaf1;
        local_c8 = false;
        uStack_c4 = 0;
      }
      goto LAB_1400dc9cb;
    }
    if (((hFile_00 != (HANDLE)0xffffffffffffffff) && (BVar3 = CloseHandle(hFile_00), BVar3 == 0)) ||
       ((hFile != (HANDLE)0xffffffffffffffff && (BVar3 = CloseHandle(hFile), BVar3 == 0))))
    goto LAB_1400dcaf1;
  }
  local_c8 = false;
  uStack_c4 = uVar1;
LAB_1400dc9cb:
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_40 ^ (ulonglong)auStack_f8);
}

