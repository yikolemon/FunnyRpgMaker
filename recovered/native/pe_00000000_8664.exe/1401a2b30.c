/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401a2b30 */

undefined4 FUN_1401a2b30(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    *(undefined1 *)(param_2 + 0x30) = 1;
    *(undefined4 *)(param_2 + 0x2c) = 0x16;
    FUN_1401ae820(0,0,0,0,0,param_2);
  }
  else {
    if ((*(uint *)(param_1 + 0x14) >> 0xc & 1) == 0) {
      FUN_140193154();
      uVar1 = FUN_1401a2a88(param_1,param_2);
      FUN_140193160(param_1);
      return uVar1;
    }
    __acrt_stdio_free_stream();
  }
  return 0xffffffff;
}

