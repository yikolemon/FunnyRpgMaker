/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a0d1e */

uint __fastcall FUN_100a0d1e(int param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  
  puVar2 = (ushort *)**(int **)(param_1 + 0x1c);
  if (puVar2 != (ushort *)0x0) {
    if (0 < **(int **)(param_1 + 0x2c)) {
LAB_100a0d32:
      return (uint)*puVar2;
    }
    puVar1 = (ushort *)**(undefined4 **)(param_1 + 0x20);
    if ((puVar1 != (ushort *)0x0) && ((*(byte *)(param_1 + 0x3c) & 4) == 0)) {
      puVar3 = *(ushort **)(param_1 + 0x38);
      if (*(ushort **)(param_1 + 0x38) < puVar1) {
        puVar3 = puVar1;
      }
      if (puVar2 < puVar3) {
        *(ushort **)(param_1 + 0x38) = puVar3;
        **(int **)(param_1 + 0x2c) = (int)puVar3 - **(int **)(param_1 + 0x1c) >> 1;
        puVar2 = (ushort *)**(undefined4 **)(param_1 + 0x1c);
        goto LAB_100a0d32;
      }
    }
  }
  return 0xffffffff;
}

