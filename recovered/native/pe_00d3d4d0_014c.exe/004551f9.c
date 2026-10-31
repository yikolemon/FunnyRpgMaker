/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004551f9 */

void __fastcall FUN_004551f9(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    iVar1 = *(int *)(param_1 + 0x1c);
    uVar5 = (uint)*(ushort *)(iVar1 + 0x3a);
    iVar6 = uVar5 - 1;
    uVar4 = (uint)*(ushort *)(iVar1 + 0x38);
    if (uVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uint)*(ushort *)(*(int *)(iVar1 + 0x44) + -2 + uVar4 * 2);
    }
    if ((((int)uVar3 < iVar6) &&
        (iVar2 = *(int *)(iVar1 + 0x3c),
        *(int *)(iVar2 + uVar3 * 8) == *(int *)(iVar2 + -8 + uVar5 * 8))) &&
       (*(int *)(iVar2 + 4 + uVar3 * 8) == *(int *)(iVar2 + -4 + uVar5 * 8))) {
      *(ushort *)(iVar1 + 0x3a) = *(ushort *)(iVar1 + 0x3a) - 1;
      iVar6 = uVar5 - 2;
    }
    if ((int)uVar3 <= iVar6) {
      *(ushort *)(iVar1 + 0x38) = *(ushort *)(iVar1 + 0x38) + 1;
      *(short *)(*(int *)(iVar1 + 0x44) + uVar4 * 2) = (short)iVar6;
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}

