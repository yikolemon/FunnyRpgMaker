/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026a95d */

/* Library Function - Single Match
    bool __cdecl get_drive_number_from_path(wchar_t const * const,int &)
   
   Library: Visual Studio 2019 Release */

bool __cdecl get_drive_number_from_path(wchar_t *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  *param_2 = 0;
  uVar2 = (uint)(ushort)*param_1;
  if ((((uVar2 < 0x41) || (0x5a < uVar2)) && (0x19 < uVar2 - 0x61)) || (param_1[1] != L':')) {
    iVar1 = FUN_1027a3ec();
  }
  else {
    if (param_1[2] == L'\0') {
      ___acrt_errno_map_os_error(2);
      return false;
    }
    if (uVar2 - 0x41 < 0x1a) {
      uVar2 = uVar2 + 0x20;
    }
    iVar1 = uVar2 - 0x60;
  }
  *param_2 = iVar1;
  return true;
}

