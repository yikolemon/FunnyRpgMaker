/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400dd250 */

void FUN_1400dd250(undefined8 param_1)

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
  
  local_20 = DAT_1401c9640 ^ (ulonglong)auStack_88;
  uVar2 = FUN_1400dc620(&local_50,param_1,0x10180,0x2200000);
  if (uVar2 == 0) {
    pvVar5 = (HANDLE)CONCAT44(uStack_4c,CONCAT13(uStack_4d,CONCAT21(uStack_4f,local_50)));
    bVar1 = true;
LAB_1400dd29e:
    local_58 = 0x13;
    BVar3 = SetFileInformationByHandle(pvVar5,0x15,&local_58,4);
    if (BVar3 != 0) {
LAB_1400dd2c5:
      if ((pvVar5 != (HANDLE)0xffffffffffffffff) && (BVar3 = CloseHandle(pvVar5), BVar3 == 0)) {
LAB_1400dd573:
                    /* WARNING: Subroutine does not return */
        FUN_140115938();
      }
LAB_1400dd2dc:
      local_58._0_1_ = 1;
      uStack_54 = 0;
      goto LAB_1400dd53f;
    }
    uVar2 = GetLastError();
    if (((uVar2 != 1) && (uVar2 != 0x32)) && (uVar2 != 0x57)) {
LAB_1400dd37f:
      uStack_54 = uVar2;
      if (pvVar5 != (HANDLE)0xffffffffffffffff) {
        iVar4 = CloseHandle(pvVar5);
        goto joined_r0x0001400dd536;
      }
      goto LAB_1400dd53b;
    }
    uVar2 = FUN_1400dd620(pvVar5);
    if (uVar2 == 0) goto LAB_1400dd2c5;
    if ((uVar2 != 5) || (!bVar1)) goto LAB_1400dd37f;
    BVar3 = GetFileInformationByHandleEx(pvVar5,FileBasicInfo,&local_48,0x28);
    if (BVar3 != 0) {
      if ((local_28 & 1) == 0) {
        if (pvVar5 != (HANDLE)0xffffffffffffffff) {
          iVar4 = CloseHandle(pvVar5);
joined_r0x0001400dd4f2:
          if (iVar4 == 0) goto LAB_1400dd579;
        }
LAB_1400dd4a1:
        uStack_54 = 5;
        goto LAB_1400dd53b;
      }
      local_28 = local_28 ^ 1;
      BVar3 = SetFileInformationByHandle(pvVar5,FileBasicInfo,&local_48,0x28);
      if (BVar3 == 0) goto LAB_1400dd3d3;
      iVar4 = FUN_1400dd620(pvVar5);
      if (iVar4 != 0) {
        if (iVar4 == 5) {
          local_28 = local_28 | 1;
          BVar3 = SetFileInformationByHandle(pvVar5,FileBasicInfo,&local_48,0x28);
          if (BVar3 != 0) {
            if (pvVar5 != (HANDLE)0xffffffffffffffff) {
              iVar4 = CloseHandle(pvVar5);
              goto joined_r0x0001400dd4f2;
            }
            goto LAB_1400dd4a1;
          }
          goto LAB_1400dd3d3;
        }
        uStack_54 = GetLastError();
        if (pvVar5 == (HANDLE)0xffffffffffffffff) goto LAB_1400dd3f2;
        BVar3 = CloseHandle(pvVar5);
        if (BVar3 == 0) goto LAB_1400dd573;
        local_58._0_3_ = (uint3)uStack_4f << 8;
        goto LAB_1400dd547;
      }
      if (pvVar5 == (HANDLE)0xffffffffffffffff) goto LAB_1400dd2dc;
      BVar3 = CloseHandle(pvVar5);
      if (BVar3 == 0) goto LAB_1400dd579;
      local_58._0_1_ = 1;
      uStack_54 = 0;
      goto LAB_1400dd53f;
    }
LAB_1400dd3d3:
    uStack_54 = GetLastError();
    if ((pvVar5 != (HANDLE)0xffffffffffffffff) && (BVar3 = CloseHandle(pvVar5), BVar3 == 0)) {
LAB_1400dd579:
                    /* WARNING: Subroutine does not return */
      FUN_140115938();
    }
LAB_1400dd3f2:
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
        goto LAB_1400dd54e;
      }
      goto LAB_1400dd29e;
    }
    if (uVar2 < 0x41) {
      if (((uVar2 == 0x40) || (uVar2 == 2)) || ((uVar2 == 3 || (uVar2 == 0x35)))) {
LAB_1400dd521:
        uVar2 = 0;
      }
    }
    else if (((uVar2 == 0x7b) || (uVar2 == 0xa1)) || (uVar2 == 0x10b)) goto LAB_1400dd521;
    pvVar5 = (HANDLE)CONCAT44(uStack_4c,CONCAT13(uStack_4d,CONCAT21(uStack_4f,local_50)));
    uStack_54 = uVar2;
    if (pvVar5 != (HANDLE)0xffffffffffffffff) {
      iVar4 = CloseHandle(pvVar5);
joined_r0x0001400dd536:
      uStack_54 = uVar2;
      if (iVar4 == 0) goto LAB_1400dd573;
    }
LAB_1400dd53b:
    local_58._0_1_ = 0;
LAB_1400dd53f:
    local_58._0_3_ = CONCAT21(uStack_4f,(undefined1)local_58);
  }
LAB_1400dd547:
  local_58 = CONCAT13(uStack_4d,(int3)local_58);
LAB_1400dd54e:
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_20 ^ (ulonglong)auStack_88);
}

