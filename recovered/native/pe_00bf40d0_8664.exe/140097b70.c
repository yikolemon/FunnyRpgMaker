/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140097b70 */

ulonglong FUN_140097b70(int *param_1,longlong *param_2)

{
  ulonglong uVar1;
  
  if (param_1 == (int *)0x0) {
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0x16;
    FUN_1400a1080((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
  }
  else {
    if (((uint)param_1[5] >> 0xc & 1) == 0) {
      FUN_14008ea30((longlong)param_1);
      uVar1 = FUN_140097ac8(param_1,param_2);
      FUN_14008ea3c((longlong)param_1);
      return uVar1 & 0xffffffff;
    }
    FUN_1400a9ce0((undefined8 *)param_1);
  }
  return 0xffffffff;
}

