/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140035788 */

undefined8 FUN_140035788(int *param_1,ushort *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  
  puVar1 = *(ushort **)(param_1 + 2);
  if (puVar1 < *(ushort **)(param_1 + 4)) {
    if (*param_1 == 1) {
      *(ushort **)(param_1 + 2) = puVar1 + 1;
      uVar2 = *puVar1 << 8 | *puVar1 >> 8;
    }
    else {
      uVar2 = *(ushort *)(param_1 + 6);
      if (*(ushort *)((longlong)param_1 + 0x1a) < uVar2) {
        *(ushort **)(param_1 + 2) = puVar1 + 1;
        uVar2 = *puVar1 << 8 | *puVar1 >> 8;
        *(ushort *)(param_1 + 6) = uVar2;
        *(ushort **)(param_1 + 2) = puVar1 + 2;
        *(ushort *)((longlong)param_1 + 0x1a) = puVar1[1] << 8 | puVar1[1] >> 8;
        *(ushort **)(param_1 + 2) = puVar1 + 3;
      }
      *(ushort *)(param_1 + 6) = uVar2 + 1;
    }
    *param_2 = uVar2;
    return CONCAT71((uint7)(byte)(uVar2 >> 8),1);
  }
  return 0;
}

