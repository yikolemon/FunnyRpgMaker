/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007592e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007592e(undefined4 param_1)

{
  HANDLE pvVar1;
  LPVOID pvVar2;
  LPCWSTR **lpFileName;
  int *unaff_FS_OFFSET;
  undefined1 local_c0 [36];
  undefined1 local_9c [36];
  undefined1 local_78 [36];
  undefined1 local_54 [24];
  int local_3c;
  LPCWSTR *local_38 [5];
  uint local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_c0;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2b10;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_10003728(param_1);
  local_14 = 0;
  lpFileName = local_38;
  if (7 < local_24) {
    lpFileName = (LPCWSTR **)local_38[0];
  }
  pvVar1 = CreateFileW((LPCWSTR)lpFileName,_DAT_102944e0,_UNK_102944e4,_UNK_102944e8,_UNK_102944ec,
                       0x80,(HANDLE)0x0);
  *(HANDLE *)(local_3c + 4) = pvVar1;
  local_14 = 0xffffffff;
  FUN_10001134();
  if (*(HANDLE *)(local_3c + 4) == (HANDLE)0x0) {
    FUN_10003728(param_1);
    local_14 = 1;
    FUN_10075656(local_38,L"Failed to open file: ",local_54);
    local_14 = 2;
    FUN_100756a4(local_38);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(local_c0,&DAT_10367d38);
  }
  pvVar1 = CreateFileMappingW(*(HANDLE *)(local_3c + 4),(LPSECURITY_ATTRIBUTES)DAT_102944f0,
                              DAT_102944f0._4_4_,0,0,(LPCWSTR)0x0);
  *(HANDLE *)(local_3c + 8) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(local_3c + 4));
    FUN_10003728(param_1);
    local_14 = 3;
    FUN_10075656(local_38,L"Failed to create file mapping for: ",local_54);
    local_14 = 4;
    FUN_100756a4(local_38);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(local_9c,&DAT_10367d38);
  }
  pvVar2 = MapViewOfFile(pvVar1,DAT_10294500,0,0,0);
  *(LPVOID *)(local_3c + 0xc) = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    *(LPVOID *)(local_3c + 0x10) = pvVar2;
    *unaff_FS_OFFSET = local_1c;
    return;
  }
  CloseHandle(*(HANDLE *)(local_3c + 8));
  CloseHandle(*(HANDLE *)(local_3c + 4));
  FUN_10003728(param_1);
  local_14 = 5;
  FUN_10075656(local_38,L"Failed to create map view of file: ",local_54);
  local_14 = 6;
  FUN_100756a4(local_38);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(local_78,&DAT_10367d38);
}

