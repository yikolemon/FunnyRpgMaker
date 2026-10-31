/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005d25c */

longlong FUN_14005d25c(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  lVar1 = param_1 + 0x38;
  uVar2 = FUN_14005d5f0(lVar1,0);
  FUN_14005d67a(param_1);
  FUN_14005d714(lVar1,uVar2);
  lVar3 = FUN_14005d7bc(lVar1);
  *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(param_1 + 0x68);
  *(int *)(lVar3 + 0x28) = *(int *)(param_1 + 0x10) + 1;
  FUN_14005d7d8(param_1,lVar3,0,0,1,lVar1,uVar4);
  return lVar3;
}

