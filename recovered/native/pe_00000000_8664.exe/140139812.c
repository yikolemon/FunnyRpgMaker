/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140139812 */

void FUN_140139812(longlong param_1,int param_2)

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

