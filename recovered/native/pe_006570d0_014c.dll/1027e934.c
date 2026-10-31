/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027e934 */

/* Library Function - Single Match
    __commit
   
   Library: Visual Studio 2019 Release */

int __cdecl __commit(int _FileHandle)

{
  undefined4 *puVar1;
  int iVar2;
  int local_14;
  int *local_10;
  int local_c [2];
  
  if (_FileHandle == -2) {
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 9;
  }
  else {
    if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_103a5430)) &&
       ((*(byte *)((&DAT_103a5230)[_FileHandle >> 6] + 0x28 + (_FileHandle & 0x3fU) * 0x38) & 1) !=
        0)) {
      local_10 = &_FileHandle;
      local_c[0] = _FileHandle;
      local_14 = _FileHandle;
      iVar2 = FUN_1027e9b1(&local_14,&local_10,local_c);
      return iVar2;
    }
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 9;
    FUN_10273ea8();
  }
  return -1;
}

