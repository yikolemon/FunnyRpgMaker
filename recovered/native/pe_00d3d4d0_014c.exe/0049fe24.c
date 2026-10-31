/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049fe24 */

undefined1 __cdecl FUN_0049fe24(int *param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD unaff_ESI;
  LARGE_INTEGER local_1c;
  DWORD local_14;
  int local_10;
  undefined8 local_c;
  
  if (((uint)param_1[3] >> 3 & 1) != 0) {
    return 1;
  }
  if ((((param_1[3] & 0xc0U) == 0) || (*param_1 != param_1[1])) &&
     (hFile = (HANDLE)FUN_0049d4c2(param_1[4]), hFile != (HANDLE)0xffffffff)) {
    local_c = 0;
    BVar1 = SetFilePointerEx(hFile,(LARGE_INTEGER)(ZEXT48(&local_14) << 0x20),(PLARGE_INTEGER)0x1,
                             unaff_ESI);
    if ((BVar1 != 0) && (BVar1 = GetFileSizeEx(hFile,&local_1c), BVar1 != 0)) {
      if ((local_14 == local_1c.s.LowPart) && (local_10 == local_1c.s.HighPart)) {
        return 1;
      }
      return 0;
    }
  }
  return 0;
}

