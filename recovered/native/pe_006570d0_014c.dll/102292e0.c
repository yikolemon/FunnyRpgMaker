/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102292e0 */

ulonglong FUN_102292e0(LPCWSTR param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined1 local_2c [16];
  uint local_1c;
  uint local_c;
  
  BVar1 = CreateDirectoryW(param_1,(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar1 != 0) {
    local_c = CONCAT31(local_c._1_3_,1);
    return (ulonglong)local_c;
  }
  DVar2 = GetLastError();
  if (DVar2 == 0xb7) {
    DVar2 = FUN_10228d20(param_1,local_2c,3,0xffffffff);
    if ((DVar2 == 0) && ((local_1c >> 4 & 1) == 0)) {
      DVar2 = 0xb7;
    }
  }
  return CONCAT44(DVar2,local_c) & 0xffffffffffffff00;
}

