/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140093b94 */

longlong FUN_140093b94(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  lVar1 = param_1 + 0x38;
  uVar2 = FUN_140093f90(lVar1,0);
  FUN_14009401a(param_1);
  FUN_1400940b4(lVar1,uVar2);
  lVar3 = FUN_14009415c(lVar1);
  *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(param_1 + 0x68);
  *(int *)(lVar3 + 0x28) = *(int *)(param_1 + 0x10) + 1;
  FUN_140094178(param_1,lVar3,0,0,1,lVar1,uVar4);
  return lVar3;
}

