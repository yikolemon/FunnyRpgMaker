/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403ae975 */

undefined8 FUN_1403ae975(longlong param_1,ushort param_2)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)(param_1 + 0x48);
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

