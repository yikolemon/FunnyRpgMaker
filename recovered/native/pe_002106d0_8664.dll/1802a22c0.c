/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802a22c0 */

undefined8 FUN_1802a22c0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  
  puVar2 = *(uint **)(param_4 + 0x38);
  uVar1 = *puVar2;
  FUN_1802464d0(param_2,param_4,puVar2 + (ulonglong)uVar1 * 4 + 1);
  if ((puVar2[(ulonglong)uVar1 * 4 + 1] & ((*(byte *)(param_1 + 4) & 0x66) != 0) + 1) != 0) {
    uVar3 = FUN_18026d7e0(param_1,param_2,param_3,param_4);
    return uVar3;
  }
  return 1;
}

