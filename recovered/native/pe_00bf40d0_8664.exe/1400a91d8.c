/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a91d8 */

longlong thunk_FUN_1400a91e0(uint param_1,LARGE_INTEGER param_2,DWORD param_3,longlong *param_4)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_1 == 0xfffffffe) {
    *(undefined1 *)(param_4 + 7) = 1;
    *(undefined4 *)((longlong)param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
  }
  else {
    if (((int)param_1 < 0) || (DAT_1401437a0 <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if ((*(byte *)((&DAT_1401433a0)[(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        FUN_1400a9b7c(param_1);
        lVar2 = -1;
        if ((*(byte *)((&DAT_1401433a0)[(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 1) == 0) {
          *(undefined1 *)(param_4 + 6) = 1;
          *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
          *(undefined1 *)(param_4 + 7) = 1;
          *(undefined4 *)((longlong)param_4 + 0x34) = 0;
        }
        else {
          lVar2 = FUN_1400a9300(param_1,param_2,param_3,(longlong)param_4);
        }
        FUN_1400a9ba4(param_1);
        return lVar2;
      }
    }
    *(undefined1 *)(param_4 + 7) = 1;
    *(undefined4 *)((longlong)param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
    FUN_1400a1080((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
  }
  return -1;
}

