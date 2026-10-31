/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ea126 */

void FUN_1801ea126(longlong param_1,int param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  
  puVar1 = *(ushort **)(*(longlong *)(param_1 + 0x30) + (longlong)param_2 * 8);
  puVar2 = puVar1;
  do {
    puVar2 = *(ushort **)(puVar2 + 0x10);
    *puVar2 = (ushort)((*puVar2 & 3) == 0) << 3 | *puVar2 | 0x40;
  } while (puVar2 != puVar1);
  return;
}

