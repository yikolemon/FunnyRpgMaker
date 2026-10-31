/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14048fb60 */

undefined * FUN_14048fb60(void)

{
  longlong lVar1;
  undefined *puVar2;
  
  lVar1 = FUN_1404a2608();
  puVar2 = (undefined *)(lVar1 + 0x24);
  if (lVar1 == 0) {
    puVar2 = &DAT_14062728c;
  }
  return puVar2;
}

