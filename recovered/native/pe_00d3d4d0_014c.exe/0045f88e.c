/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045f88e */

int __fastcall FUN_0045f88e(int param_1)

{
  ushort *puVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  
  puVar1 = *(ushort **)(param_1 + 0x14);
  if (puVar1 == (ushort *)0x0) {
    return 3;
  }
  if (*(char *)(param_1 + 0x2d) != '\0') {
    piVar2 = *(int **)(param_1 + 0xc);
    if (((uint)piVar2[2] <= (uint)*(ushort *)(piVar2 + 0xe) + (uint)*(ushort *)(piVar2 + 5)) &&
       (iVar4 = FUN_0041c799(piVar2,0,1), iVar4 != 0)) {
      return iVar4;
    }
    if (*puVar1 == 0) {
      sVar3 = 0;
      goto LAB_0045f8e0;
    }
    *(ushort *)(*(int *)(puVar1 + 6) + -2 + (uint)*puVar1 * 2) = puVar1[1] - 1;
  }
  sVar3 = (short)*(undefined4 *)puVar1;
LAB_0045f8e0:
  *puVar1 = sVar3 + 1;
  return 0;
}

