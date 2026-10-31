/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018acf0 */

ulonglong FUN_14018acf0(LPCWSTR param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  uint local_res10;
  undefined1 local_28 [16];
  byte local_18;
  
  BVar1 = CreateDirectoryW(param_1,(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar1 != 0) {
    local_res10 = CONCAT31(local_res10._1_3_,1);
    return (ulonglong)local_res10;
  }
  DVar2 = GetLastError();
  if (DVar2 == 0xb7) {
    DVar2 = FUN_14018a650(param_1,local_28,3,0xffffffff);
    if ((DVar2 == 0) && ((local_18 & 0x10) == 0)) {
      DVar2 = 0xb7;
    }
  }
  return (ulonglong)CONCAT43(DVar2,local_res10._1_3_) << 8;
}

