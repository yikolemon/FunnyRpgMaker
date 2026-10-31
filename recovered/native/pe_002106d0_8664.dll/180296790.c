/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180296790 */

undefined8 FUN_180296790(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_4 + 0x38);
  FUN_1802464d0(param_2,param_4,lVar1 + 4);
  if ((*(uint *)(lVar1 + 4) & ((*(byte *)(param_1 + 4) & 0x66) != 0) + 1) != 0) {
    uVar2 = FUN_18026e6a0(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  return 1;
}

