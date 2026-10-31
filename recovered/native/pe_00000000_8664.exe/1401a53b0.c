/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401a53b0 */

/* Library Function - Single Match
    isspace
   
   Library: Visual Studio 2019 Release */

int __cdecl isspace(int _C)

{
  int iVar1;
  longlong lVar2;
  longlong *local_res10 [3];
  
  if (DAT_140f32750 == 0) {
    if (_C + 1U < 0x101) {
      return *(ushort *)(PTR_DAT_140f29640 + (longlong)_C * 2) & 8;
    }
  }
  else {
    lVar2 = FUN_1401aecc8();
    local_res10[0] = *(longlong **)(lVar2 + 0x90);
    __acrt_update_locale_info(lVar2,local_res10);
    if (_C + 1U < 0x101) {
      return *(ushort *)(*local_res10[0] + (longlong)_C * 2) & 8;
    }
    if (1 < (int)local_res10[0][1]) {
      iVar1 = FUN_1401b43a4(_C,8);
      return iVar1;
    }
  }
  return 0;
}

