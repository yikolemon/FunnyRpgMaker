/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041d39b */

int * __cdecl FUN_0041d39b(int param_1,byte *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if ((param_2 != (byte *)0x0 && param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x10), iVar1 != 0)) {
    puVar4 = (undefined4 *)(param_1 + 0x14);
    do {
      piVar2 = (int *)*puVar4;
      uVar3 = FUN_00493010(*(byte **)(*piVar2 + 8),param_2);
      if (uVar3 == 0) {
        return piVar2;
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 < (undefined4 *)(param_1 + iVar1 * 4 + 0x14));
  }
  return (int *)0x0;
}

