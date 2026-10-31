/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140114a78 */

ulonglong FUN_140114a78(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  if (param_1 == 0) {
    *(undefined1 *)(param_2 + 0x30) = 1;
    *(undefined4 *)(param_2 + 0x2c) = 0x16;
    FUN_1401210c8(0,0,0,0,0,param_2);
    uVar1 = 0xffffffff;
  }
  else {
    FUN_14010b32c();
    uVar1 = FUN_140114928(param_1,param_2);
    if (0x7fffffff < (longlong)uVar1) {
      *(undefined1 *)(param_2 + 0x30) = 1;
      *(undefined4 *)(param_2 + 0x2c) = 0x16;
      uVar1 = 0xffffffff;
    }
    FUN_14010b338(param_1);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}

