/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045517a */

int __fastcall FUN_0045517a(int param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    return 8;
  }
  piVar1 = *(int **)(param_1 + 0x1c);
  uVar3 = (uint)*(ushort *)((int)piVar1 + 0x3a);
  if ((uint)piVar1[1] < *(ushort *)((int)piVar1 + 0x16) + uVar3 + 3) {
    iVar4 = FUN_0041c799(piVar1,3,0);
    if (iVar4 != 0) {
      return iVar4;
    }
    uVar3 = (uint)*(ushort *)((int)piVar1 + 0x3a);
  }
  iVar4 = piVar1[0xf];
  iVar2 = piVar1[0x10];
  *(undefined8 *)(iVar4 + uVar3 * 8) = *param_2;
  *(undefined8 *)(iVar4 + 8 + uVar3 * 8) = *param_3;
  *(undefined8 *)(iVar4 + 0x10 + uVar3 * 8) = *param_4;
  *(undefined2 *)(iVar2 + uVar3) = 0x202;
  *(undefined1 *)(iVar2 + 2 + uVar3) = 1;
  *(short *)((int)piVar1 + 0x3a) = *(short *)((int)piVar1 + 0x3a) + 3;
  return 0;
}

