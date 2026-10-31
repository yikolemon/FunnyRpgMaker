/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14012f920 */

undefined8 FUN_14012f920(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  
  puVar2 = *(uint **)(param_4 + 0x38);
  uVar1 = *puVar2;
  FUN_140103970(param_2,param_4,puVar2 + (ulonglong)uVar1 * 4 + 1);
  if ((puVar2[(ulonglong)uVar1 * 4 + 1] & ((*(byte *)(param_1 + 4) & 0x66) != 0) + 1) != 0) {
    uVar3 = FUN_140106320(param_1,param_2,param_3,param_4);
    return uVar3;
  }
  return 1;
}

