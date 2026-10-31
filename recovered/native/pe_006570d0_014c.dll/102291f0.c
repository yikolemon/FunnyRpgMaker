/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102291f0 */

longlong FUN_102291f0(LPCWSTR param_1)

{
  uint uVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  DWORD DVar3;
  DWORD DVar4;
  int iVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  undefined4 local_14;
  int local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10288790;
  local_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  hModule = GetModuleHandleW(L"kernel32.dll");
  pFVar2 = GetProcAddress(hModule,"GetTempPath2W");
  if (pFVar2 == (FARPROC)0x0) {
    DVar3 = GetTempPathW(0x105,param_1);
  }
  else {
    (*(code *)PTR_guard_check_icall_1035d810)(0x105,param_1,uVar1);
    DVar3 = (*pFVar2)();
  }
  if (DVar3 == 0) {
    DVar3 = GetLastError();
    *unaff_FS_OFFSET = local_10;
    return (ulonglong)DVar3 << 0x20;
  }
  DVar4 = GetFileAttributesW(param_1);
  if ((DVar4 == 0xffffffff) || ((DVar4 & 0x10) == 0)) {
LAB_102292b6:
    uVar6 = 0xffffffff;
  }
  else {
    if ((DVar4 & 0x400) != 0) {
      iVar5 = FUN_102288f0(&local_14,param_1,0x80,0x2000000);
      FUN_10228960(local_14);
      if (iVar5 != 0) goto LAB_102292b6;
    }
    uVar6 = 0;
  }
  *unaff_FS_OFFSET = local_10;
  return CONCAT44(uVar6,DVar3);
}

