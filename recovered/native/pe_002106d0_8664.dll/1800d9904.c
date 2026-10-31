/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d9904 */

byte FUN_1800d9904(void)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = FUN_1800d0511(&DAT_18035f516,&DAT_1804027c8);
  bVar2 = FUN_1800d0511(&DAT_18035f304,&DAT_1804027cc);
  return bVar2 | bVar1;
}

