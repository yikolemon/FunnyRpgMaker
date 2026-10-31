/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140040c0c */

longlong FUN_140040c0c(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  *(undefined1 *)(param_1 + 0x268) = 0;
  lVar1 = param_2[1];
  for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
    FUN_14003a478(param_1,lVar2,param_1 + 0x238,param_4,param_2,uVar3);
  }
  FUN_14000eeca(param_2);
  return param_1;
}

