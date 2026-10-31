/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004550d4 */

int __fastcall FUN_004550d4(int param_1,undefined8 *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    return 8;
  }
  piVar1 = *(int **)(param_1 + 0x1c);
  uVar2 = (uint)*(ushort *)((int)piVar1 + 0x3a);
  if ((uint)piVar1[1] <= *(ushort *)((int)piVar1 + 0x16) + uVar2) {
    iVar3 = FUN_0041c799(piVar1,1,0);
    if (iVar3 != 0) {
      return iVar3;
    }
    uVar2 = (uint)*(ushort *)((int)piVar1 + 0x3a);
  }
  *(undefined8 *)(piVar1[0xf] + uVar2 * 8) = *param_2;
  *(undefined1 *)(piVar1[0x10] + uVar2) = 1;
  *(short *)((int)piVar1 + 0x3a) = *(short *)((int)piVar1 + 0x3a) + 1;
  return 0;
}

