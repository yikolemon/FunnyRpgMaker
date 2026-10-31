/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408be8e3 */

ulonglong FUN_1408be8e3(longlong param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 != 0) && (uVar1 <= *(uint *)(param_1 + 4))) {
    return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
  }
  puVar2 = (undefined4 *)FUN_1408c0ecd();
  *puVar2 = 0x16;
  uVar3 = FUN_1408cbd78();
  return uVar3 & 0xffffffffffffff00;
}

