/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140114264 */

undefined4 FUN_140114264(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (2 < param_3)) {
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 0x16;
    FUN_1401210c8(0,0,0,0,0,param_4);
    uVar1 = 0xffffffff;
  }
  else {
    FUN_14010b32c();
    uVar1 = FUN_140114178(param_1,param_2,param_3,param_4);
    FUN_14010b338(param_1);
  }
  return uVar1;
}

