/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400078ae */

longlong FUN_1400078ae(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1400d3e80(*(undefined8 *)(param_2 + 8));
  *(undefined8 *)(param_1 + 8) = uVar1;
  if (param_3 != 0) {
    uVar2 = FUN_14000795c(&DAT_1401cc4c0);
    FUN_1400d4490(uVar1,param_3,uVar2);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x20) = 0;
    FUN_1400079d6(*(longlong *)(param_1 + 8) + 0x28,&DAT_140171495);
  }
  return param_1;
}

