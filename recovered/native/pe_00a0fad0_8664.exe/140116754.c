/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140116754 */

undefined2 FUN_140116754(undefined2 param_1,longlong param_2,longlong param_3)

{
  undefined2 uVar1;
  
  if (param_2 == 0) {
    *(undefined1 *)(param_3 + 0x30) = 1;
    *(undefined4 *)(param_3 + 0x2c) = 0x16;
    FUN_1401210c8(0,0,0,0,0,param_3);
    uVar1 = 0xffff;
  }
  else {
    FUN_14010b32c(param_2);
    uVar1 = FUN_1401165c0(param_1,param_2,param_3);
    FUN_14010b338(param_2);
  }
  return uVar1;
}

