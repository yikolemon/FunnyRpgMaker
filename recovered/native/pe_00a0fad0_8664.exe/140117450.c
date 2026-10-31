/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140117450 */

/* Library Function - Single Match
    isprint
   
   Library: Visual Studio 2019 Release */

int __cdecl isprint(int _C)

{
  int iVar1;
  longlong lVar2;
  longlong *local_res10 [3];
  
  if (DAT_140354b80 == 0) {
    if (_C + 1U < 0x101) {
      return *(ushort *)(PTR_DAT_1401ca640 + (longlong)_C * 2) & 0x157;
    }
  }
  else {
    lVar2 = FUN_140121578();
    local_res10[0] = *(longlong **)(lVar2 + 0x90);
    __acrt_update_locale_info(lVar2,local_res10);
    if (_C + 1U < 0x101) {
      return *(ushort *)(*local_res10[0] + (longlong)_C * 2) & 0x157;
    }
    if (1 < (int)local_res10[0][1]) {
      iVar1 = FUN_14012ec80(_C,0x157,0);
      return iVar1;
    }
  }
  return 0;
}

