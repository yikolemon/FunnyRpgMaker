/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140096248 */

int FUN_140096248(longlong *param_1,LARGE_INTEGER param_2,uint param_3,longlong *param_4)

{
  int iVar1;
  
  if ((param_1 == (longlong *)0x0) || (2 < param_3)) {
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 0x16;
    FUN_1400a1080((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
    iVar1 = -1;
  }
  else {
    FUN_14008ea30((longlong)param_1);
    iVar1 = FUN_14009615c(param_1,param_2,param_3,param_4);
    FUN_14008ea3c((longlong)param_1);
  }
  return iVar1;
}

