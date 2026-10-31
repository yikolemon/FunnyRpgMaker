/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006bcb6 */

longlong FUN_18006bcb6(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  FUN_180002d2c();
  *(undefined8 *)(param_1 + 0x20) = 0xffffffffffffffff;
  iVar1 = FUN_18006bed4(param_1,param_3,param_1 + 0x20,param_1 + 0x28,param_1 + 0x20,param_1,uVar3);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else if (iVar1 == 0x12) {
    uVar2 = 0;
    iVar1 = 0;
  }
  else {
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + 0x278) = uVar2;
  *(int *)(param_1 + 0x27c) = iVar1;
  return param_1;
}

