/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180239da0 */

void FUN_180239da0(undefined8 param_1,undefined8 param_2,uint param_3)

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
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_f8;
  param_3 = param_3 & 0xf;
  if (param_3 == 2) {
LAB_18023a01a:
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
    goto LAB_18023a06b;
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
  if ((uStack_c4 != 0x50) || (param_3 == 0)) goto LAB_18023a06b;
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
    goto LAB_18023a06b;
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
      goto LAB_18023a06b;
    }
    goto LAB_18023a18b;
  }
  if (param_3 == 4) {
    BVar3 = GetFileInformationByHandleEx(hFile,FileBasicInfo,local_80,0x28);
    lVar6 = local_70;
    if (BVar3 != 0) {
LAB_180239fb4:
      BVar3 = GetFileInformationByHandleEx(hFile_00,FileBasicInfo,local_80,0x28);
      if (BVar3 == 0) {
        uVar1 = GetLastError();
        if (uVar1 != 0) goto LAB_180239f67;
        local_70 = CONCAT44(uStack_c4,CONCAT13(uStack_c5,CONCAT21(uStack_c7,local_c8)));
      }
      if (local_70 < lVar6) {
        if (((hFile_00 != (HANDLE)0xffffffffffffffff) && (BVar3 = CloseHandle(hFile_00), BVar3 == 0)
            ) || ((hFile != (HANDLE)0xffffffffffffffff && (BVar3 = CloseHandle(hFile), BVar3 == 0)))
           ) goto LAB_18023a18b;
        goto LAB_18023a01a;
      }
      goto LAB_18023a092;
    }
    uVar1 = GetLastError();
    if (uVar1 == 0) {
      lVar6 = CONCAT44(uStack_c4,CONCAT13(uStack_c5,CONCAT21(uStack_c7,local_c8)));
      goto LAB_180239fb4;
    }
LAB_180239f67:
    if (((hFile_00 != (HANDLE)0xffffffffffffffff) && (BVar3 = CloseHandle(hFile_00), BVar3 == 0)) ||
       ((hFile != (HANDLE)0xffffffffffffffff && (BVar3 = CloseHandle(hFile), BVar3 == 0)))) {
LAB_18023a18b:
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
LAB_18023a092:
    uVar1 = FUN_18023acc0(hFile,local_80);
    if ((uVar1 == 0) && (uVar1 = FUN_18023acc0(hFile_00,local_58), uVar1 == 0)) {
      iVar4 = memcmp(local_80,local_58,0x18);
      if (iVar4 == 0) {
        if (((hFile_00 != (HANDLE)0xffffffffffffffff) && (BVar3 = CloseHandle(hFile_00), BVar3 == 0)
            ) || ((hFile != (HANDLE)0xffffffffffffffff && (BVar3 = CloseHandle(hFile), BVar3 == 0)))
           ) {
LAB_18023a191:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        local_c8 = false;
        uStack_c4 = 0x20;
      }
      else {
        if (((hFile_00 != (HANDLE)0xffffffffffffffff) && (BVar3 = CloseHandle(hFile_00), BVar3 == 0)
            ) || ((hFile != (HANDLE)0xffffffffffffffff && (BVar3 = CloseHandle(hFile), BVar3 == 0)))
           ) goto LAB_18023a191;
        local_c8 = false;
        uStack_c4 = 0;
      }
      goto LAB_18023a06b;
    }
    if (((hFile_00 != (HANDLE)0xffffffffffffffff) && (BVar3 = CloseHandle(hFile_00), BVar3 == 0)) ||
       ((hFile != (HANDLE)0xffffffffffffffff && (BVar3 = CloseHandle(hFile), BVar3 == 0))))
    goto LAB_18023a191;
  }
  local_c8 = false;
  uStack_c4 = uVar1;
LAB_18023a06b:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_40 ^ (ulonglong)auStack_f8);
}

