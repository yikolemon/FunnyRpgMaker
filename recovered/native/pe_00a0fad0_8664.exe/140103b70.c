/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140103b70 */

undefined8 FUN_140103b70(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_4 + 0x38);
  FUN_140103970(param_2,param_4,lVar1 + 4);
  if ((*(uint *)(lVar1 + 4) & ((*(byte *)(param_1 + 4) & 0x66) != 0) + 1) != 0) {
    uVar2 = FUN_140107260(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  return 1;
}

