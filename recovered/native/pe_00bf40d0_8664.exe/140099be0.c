/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140099be0 */

/* Library Function - Single Match
    isupper
   
   Library: Visual Studio 2019 Release */

int __cdecl isupper(int _C)

{
  int iVar1;
  longlong lVar2;
  longlong *local_res10 [3];
  
  if (DAT_140142c48 == 0) {
    if (_C + 1U < 0x101) {
      return *(ushort *)(PTR_DAT_14013bc00 + (longlong)_C * 2) & 1;
    }
  }
  else {
    lVar2 = FUN_1400a1528();
    local_res10[0] = *(longlong **)(lVar2 + 0x90);
    __acrt_update_locale_info(lVar2,(longlong *)local_res10);
    if (_C + 1U < 0x101) {
      return *(ushort *)(*local_res10[0] + (longlong)_C * 2) & 1;
    }
    if (1 < (int)local_res10[0][1]) {
      iVar1 = FUN_1400a5cd4(_C,1,(__crt_locale_pointers *)0x0);
      return iVar1;
    }
  }
  return 0;
}

