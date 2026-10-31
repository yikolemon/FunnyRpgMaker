/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400aaebc */

/* Library Function - Single Match
    _commit
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _commit(int _FileHandle)

{
  __acrt_ptd *p_Var1;
  undefined8 uVar2;
  int local_res8 [2];
  undefined1 local_res10 [8];
  uint local_res18 [2];
  uint local_res20 [2];
  int *local_18 [3];
  
  local_res8[0] = _FileHandle;
  if (_FileHandle == -2) {
    p_Var1 = FUN_140095e5c();
    *(undefined4 *)p_Var1 = 9;
  }
  else {
    if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_1401437a0)) &&
       ((*(byte *)((&DAT_1401433a0)[(longlong)_FileHandle >> 6] + 0x38 +
                  (ulonglong)(_FileHandle & 0x3f) * 0x48) & 1) != 0)) {
      local_18[0] = local_res8;
      local_res18[0] = _FileHandle;
      local_res20[0] = _FileHandle;
      uVar2 = FUN_1400aaf50(local_res10,local_res20,local_18,local_res18);
      return (int)uVar2;
    }
    p_Var1 = FUN_140095e5c();
    *(undefined4 *)p_Var1 = 9;
    FUN_1400a0ea0();
  }
  return -1;
}

