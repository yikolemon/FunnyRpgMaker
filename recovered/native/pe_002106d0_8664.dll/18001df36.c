/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001df36 */

undefined8 FUN_18001df36(longlong param_1,char param_2)

{
  undefined4 uVar1;
  byte bVar2;
  
  bVar2 = (byte)(param_2 + 0x9aU) >> 1 | param_2 << 7;
  if ((bVar2 < 9) && ((0x1d1U >> (bVar2 & 0x1f) & 1) != 0)) {
    uVar1 = *(undefined4 *)(&DAT_1802b0bc8 + (ulonglong)bVar2 * 4);
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
    return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
  }
  return 0;
}

