/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401bf4d0 */

undefined8 FUN_1401bf4d0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  
  puVar2 = *(uint **)(param_4 + 0x38);
  uVar1 = *puVar2;
  FUN_14018e600(param_2,param_4,puVar2 + (ulonglong)uVar1 * 4 + 1);
  if ((puVar2[(ulonglong)uVar1 * 4 + 1] & ((*(byte *)(param_1 + 4) & 0x66) != 0) + 1) != 0) {
    uVar3 = FUN_14018f150(param_1,param_2,param_3,param_4);
    return uVar3;
  }
  return 1;
}

