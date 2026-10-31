/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140099760 */

LARGE_INTEGER FUN_140099760(longlong *param_1,longlong *param_2)

{
  LARGE_INTEGER LVar1;
  
  if (param_1 == (longlong *)0x0) {
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0x16;
    FUN_1400a1080((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
    LVar1.QuadPart = -1;
  }
  else {
    FUN_14008ea30((longlong)param_1);
    LVar1 = FUN_140099610(param_1,param_2);
    FUN_14008ea3c((longlong)param_1);
  }
  return (LARGE_INTEGER)LVar1.QuadPart;
}

