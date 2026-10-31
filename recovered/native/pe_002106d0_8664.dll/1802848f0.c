/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802848f0 */

undefined4 FUN_1802848f0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    *(undefined1 *)(param_2 + 0x30) = 1;
    *(undefined4 *)(param_2 + 0x2c) = 0x16;
    FUN_180290c30(0,0,0,0,0,param_2);
  }
  else {
    if ((*(uint *)(param_1 + 0x14) >> 0xc & 1) == 0) {
      FUN_180272400();
      uVar1 = FUN_180284848(param_1,param_2);
      FUN_18027240c(param_1);
      return uVar1;
    }
    __acrt_stdio_free_stream();
  }
  return 0xffffffff;
}

