/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180093ee8 */

longlong FUN_180093ee8(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  lVar1 = param_1 + 0x38;
  uVar2 = FUN_18001cebc(lVar1,0);
  FUN_180094188(param_1);
  FUN_180094222(lVar1,uVar2);
  lVar3 = FUN_18001d088(lVar1);
  *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(param_1 + 0x68);
  *(int *)(lVar3 + 0x28) = *(int *)(param_1 + 0x10) + 1;
  FUN_18001d0a4(param_1,lVar3,0,0,1,lVar1,uVar4);
  return lVar3;
}

