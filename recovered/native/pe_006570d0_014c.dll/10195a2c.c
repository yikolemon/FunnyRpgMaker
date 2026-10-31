/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10195a2c */

undefined4 __fastcall FUN_10195a2c(int param_1,ushort param_2)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)(param_1 + 0x40);
  if (puVar2 != (ushort *)0x0) {
    uVar1 = *puVar2;
    while (uVar1 != 0) {
      if ((uVar1 <= param_2) && (param_2 <= puVar2[1])) {
        return 0;
      }
      uVar1 = puVar2[2];
      puVar2 = puVar2 + 2;
    }
  }
  return 1;
}

