/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001e0c6 */

undefined4 __thiscall FUN_1001e0c6(int param_1,char param_2)

{
  undefined4 uVar1;
  byte bVar2;
  
  bVar2 = (byte)(param_2 + 0x9aU) >> 1 | param_2 << 7;
  if ((bVar2 < 9) && ((0x1d1U >> (bVar2 & 0x1f) & 1) != 0)) {
    uVar1 = *(undefined4 *)(&DAT_1028f4a4 + (uint)bVar2 * 4);
    *(undefined4 *)(param_1 + 0x44) = uVar1;
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return 0;
}

