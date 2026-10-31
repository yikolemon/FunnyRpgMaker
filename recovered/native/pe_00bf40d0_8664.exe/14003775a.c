/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003775a */

void FUN_14003775a(longlong param_1,int param_2)

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

