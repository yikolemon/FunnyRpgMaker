/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14022de8a */

longlong FUN_14022de8a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  lVar1 = param_1 + 0x38;
  uVar2 = FUN_14022e38c(lVar1,0);
  FUN_14022e416(param_1);
  FUN_14022e4b0(lVar1,uVar2);
  lVar3 = FUN_14022e558(lVar1);
  *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(param_1 + 0x68);
  *(int *)(lVar3 + 0x28) = *(int *)(param_1 + 0x10) + 1;
  FUN_14022e574(param_1,lVar3,0,0,1,lVar1,uVar4);
  return lVar3;
}

