/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10266a13 */

uint __fastcall FUN_10266a13(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((uVar2 != 0) && (uVar2 <= *(uint *)(param_1 + 4))) {
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  puVar1 = (undefined4 *)FUN_10268ffd();
  *puVar1 = 0x16;
  uVar2 = FUN_10273ea8();
  return uVar2 & 0xffffff00;
}

