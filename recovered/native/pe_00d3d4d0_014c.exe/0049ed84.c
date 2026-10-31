/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049ed84 */

/* Library Function - Single Match
    __commit
   
   Library: Visual Studio 2019 Release */

int __cdecl __commit(int _FileHandle)

{
  __acrt_ptd *p_Var1;
  int iVar2;
  uint local_14;
  int *local_10;
  int local_c;
  
  if (_FileHandle == -2) {
    p_Var1 = FUN_0048f66d();
    *(undefined4 *)p_Var1 = 9;
  }
  else {
    if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_00521ec8)) &&
       ((*(byte *)((&DAT_00521cc8)[_FileHandle >> 6] + 0x28 + (_FileHandle & 0x3fU) * 0x38) & 1) !=
        0)) {
      local_10 = &_FileHandle;
      local_c = _FileHandle;
      local_14 = _FileHandle;
      iVar2 = FUN_0049ee01(&local_14,&local_10);
      return iVar2;
    }
    p_Var1 = FUN_0048f66d();
    *(undefined4 *)p_Var1 = 9;
    FUN_00495c88();
  }
  return -1;
}

