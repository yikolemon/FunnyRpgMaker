/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00436b5e */

void __fastcall FUN_00436b5e(int param_1,int param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  
  puVar1 = *(ushort **)(*(int *)(param_1 + 0x28) + param_2 * 4);
  puVar2 = puVar1;
  do {
    puVar2 = *(ushort **)(puVar2 + 0x10);
    *puVar2 = (ushort)((*puVar2 & 3) == 0) << 3 | *puVar2 | 0x40;
  } while (puVar2 != puVar1);
  return;
}

