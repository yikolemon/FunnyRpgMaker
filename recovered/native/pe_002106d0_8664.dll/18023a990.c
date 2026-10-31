/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023a990 */

void FUN_18023a990(undefined8 param_1)

{
  bool bVar1;
  uint uVar2;
  BOOL BVar3;
  int iVar4;
  HANDLE pvVar5;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined4 local_58;
  uint uStack_54;
  undefined1 local_50;
  ushort uStack_4f;
  undefined1 uStack_4d;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_88;
  uVar2 = FUN_180239cc0(&local_50,param_1,0x10180,0x2200000);
  if (uVar2 == 0) {
    pvVar5 = (HANDLE)CONCAT44(uStack_4c,CONCAT13(uStack_4d,CONCAT21(uStack_4f,local_50)));
    bVar1 = true;
LAB_18023a9de:
    local_58 = 0x13;
    BVar3 = SetFileInformationByHandle(pvVar5,0x15,&local_58,4);
    if (BVar3 != 0) {
LAB_18023aa05:
      if ((pvVar5 != (HANDLE)0xffffffffffffffff) && (BVar3 = CloseHandle(pvVar5), BVar3 == 0)) {
LAB_18023acb3:
                    /* WARNING: Subroutine does not return */
        abort();
      }
LAB_18023aa1c:
      local_58._0_1_ = 1;
      uStack_54 = 0;
      goto LAB_18023ac7f;
    }
    uVar2 = GetLastError();
    if (((uVar2 != 1) && (uVar2 != 0x32)) && (uVar2 != 0x57)) {
LAB_18023aabf:
      uStack_54 = uVar2;
      if (pvVar5 != (HANDLE)0xffffffffffffffff) {
        iVar4 = CloseHandle(pvVar5);
        goto joined_r0x00018023ac76;
      }
      goto LAB_18023ac7b;
    }
    uVar2 = FUN_18023ad60(pvVar5);
    if (uVar2 == 0) goto LAB_18023aa05;
    if ((uVar2 != 5) || (!bVar1)) goto LAB_18023aabf;
    BVar3 = GetFileInformationByHandleEx(pvVar5,FileBasicInfo,&local_48,0x28);
    if (BVar3 != 0) {
      if ((local_28 & 1) == 0) {
        if (pvVar5 != (HANDLE)0xffffffffffffffff) {
          iVar4 = CloseHandle(pvVar5);
joined_r0x00018023ac32:
          if (iVar4 == 0) goto LAB_18023acb9;
        }
LAB_18023abe1:
        uStack_54 = 5;
        goto LAB_18023ac7b;
      }
      local_28 = local_28 ^ 1;
      BVar3 = SetFileInformationByHandle(pvVar5,FileBasicInfo,&local_48,0x28);
      if (BVar3 == 0) goto LAB_18023ab13;
      iVar4 = FUN_18023ad60(pvVar5);
      if (iVar4 != 0) {
        if (iVar4 == 5) {
          local_28 = local_28 | 1;
          BVar3 = SetFileInformationByHandle(pvVar5,FileBasicInfo,&local_48,0x28);
          if (BVar3 != 0) {
            if (pvVar5 != (HANDLE)0xffffffffffffffff) {
              iVar4 = CloseHandle(pvVar5);
              goto joined_r0x00018023ac32;
            }
            goto LAB_18023abe1;
          }
          goto LAB_18023ab13;
        }
        uStack_54 = GetLastError();
        if (pvVar5 == (HANDLE)0xffffffffffffffff) goto LAB_18023ab32;
        BVar3 = CloseHandle(pvVar5);
        if (BVar3 == 0) goto LAB_18023acb3;
        local_58._0_3_ = (uint3)uStack_4f << 8;
        goto LAB_18023ac87;
      }
      if (pvVar5 == (HANDLE)0xffffffffffffffff) goto LAB_18023aa1c;
      BVar3 = CloseHandle(pvVar5);
      if (BVar3 == 0) goto LAB_18023acb9;
      local_58._0_1_ = 1;
      uStack_54 = 0;
      goto LAB_18023ac7f;
    }
LAB_18023ab13:
    uStack_54 = GetLastError();
    if ((pvVar5 != (HANDLE)0xffffffffffffffff) && (BVar3 = CloseHandle(pvVar5), BVar3 == 0)) {
LAB_18023acb9:
                    /* WARNING: Subroutine does not return */
      abort();
    }
LAB_18023ab32:
    local_58._0_3_ = (uint3)uStack_4f << 8;
  }
  else {
    if (uVar2 == 5) {
      local_40 = 0x2200000;
      local_68 = &local_48;
      local_48 = 0x20;
      bVar1 = false;
      local_38 = 0;
      uStack_30 = 0;
      pvVar5 = (HANDLE)CreateFile2(param_1,0x10000,7,3);
      if ((pvVar5 == (HANDLE)0xffffffffffffffff) && (uStack_54 = GetLastError(), uStack_54 != 0)) {
        local_58 = (uint)CONCAT12(uStack_4d,uStack_4f) << 8;
        goto LAB_18023ac8e;
      }
      goto LAB_18023a9de;
    }
    if (uVar2 < 0x41) {
      if (((uVar2 == 0x40) || (uVar2 == 2)) || ((uVar2 == 3 || (uVar2 == 0x35)))) {
LAB_18023ac61:
        uVar2 = 0;
      }
    }
    else if (((uVar2 == 0x7b) || (uVar2 == 0xa1)) || (uVar2 == 0x10b)) goto LAB_18023ac61;
    pvVar5 = (HANDLE)CONCAT44(uStack_4c,CONCAT13(uStack_4d,CONCAT21(uStack_4f,local_50)));
    uStack_54 = uVar2;
    if (pvVar5 != (HANDLE)0xffffffffffffffff) {
      iVar4 = CloseHandle(pvVar5);
joined_r0x00018023ac76:
      uStack_54 = uVar2;
      if (iVar4 == 0) goto LAB_18023acb3;
    }
LAB_18023ac7b:
    local_58._0_1_ = 0;
LAB_18023ac7f:
    local_58._0_3_ = CONCAT21(uStack_4f,(undefined1)local_58);
  }
LAB_18023ac87:
  local_58 = CONCAT13(uStack_4d,(int3)local_58);
LAB_18023ac8e:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_88);
}

