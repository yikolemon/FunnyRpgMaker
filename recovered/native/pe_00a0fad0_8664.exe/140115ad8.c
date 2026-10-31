/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140115ad8 */

undefined4 FUN_140115ad8(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    *(undefined1 *)(param_2 + 0x30) = 1;
    *(undefined4 *)(param_2 + 0x2c) = 0x16;
    FUN_1401210c8(0,0,0,0,0,param_2);
  }
  else {
    if ((*(uint *)(param_1 + 0x14) >> 0xc & 1) == 0) {
      FUN_14010b32c();
      uVar1 = FUN_140115a30(param_1,param_2);
      FUN_14010b338(param_1);
      return uVar1;
    }
    __acrt_stdio_free_stream();
  }
  return 0xffffffff;
}

