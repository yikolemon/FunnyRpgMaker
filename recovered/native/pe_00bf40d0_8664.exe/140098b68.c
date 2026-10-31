/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140098b68 */

undefined2 FUN_140098b68(WCHAR param_1,longlong *param_2,longlong *param_3)

{
  undefined2 uVar1;
  
  if (param_2 == (longlong *)0x0) {
    *(undefined1 *)(param_3 + 6) = 1;
    *(undefined4 *)((longlong)param_3 + 0x2c) = 0x16;
    FUN_1400a1080((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_3);
    uVar1 = 0xffff;
  }
  else {
    FUN_14008ea30((longlong)param_2);
    uVar1 = FUN_1400989d4(param_1,param_2,param_3);
    FUN_14008ea3c((longlong)param_2);
  }
  return uVar1;
}

