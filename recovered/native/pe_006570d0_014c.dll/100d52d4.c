/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d52d4 */

byte FUN_100d52d4(void)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = FUN_100ccdc7(&DAT_1032f3fa,&DAT_10388e0c);
  bVar2 = FUN_100ccdc7(&DAT_1032f1e8,&DAT_10388e10);
  return bVar2 | bVar1;
}

