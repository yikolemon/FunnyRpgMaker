/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404af0f4 */

/* Library Function - Single Match
    _commit
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _commit(int _FileHandle)

{
  int iVar1;
  undefined4 *puVar2;
  int local_res8 [2];
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int *local_18 [3];
  
  local_res8[0] = _FileHandle;
  if (_FileHandle == -2) {
    puVar2 = (undefined4 *)FUN_14048fb3c();
    *puVar2 = 9;
  }
  else {
    if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_140632cd0)) &&
       ((*(byte *)((&DAT_1406328d0)[(longlong)_FileHandle >> 6] + 0x38 +
                  (ulonglong)(_FileHandle & 0x3f) * 0x48) & 1) != 0)) {
      local_18[0] = local_res8;
      local_res18[0] = _FileHandle;
      local_res20[0] = _FileHandle;
      iVar1 = FUN_1404af188(local_res10,local_res20,local_18,local_res18);
      return iVar1;
    }
    puVar2 = (undefined4 *)FUN_14048fb3c();
    *puVar2 = 9;
    FUN_1404a1f20();
  }
  return -1;
}

