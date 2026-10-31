/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102056fb */

int FUN_102056fb(int param_1)

{
  ushort *puVar1;
  short sVar2;
  int iVar3;
  
  puVar1 = *(ushort **)(param_1 + 0x14);
  if (puVar1 == (ushort *)0x0) {
    return 3;
  }
  if (*(char *)(param_1 + 0x44) != '\0') {
    iVar3 = *(int *)(param_1 + 0xc);
    if ((*(uint *)(iVar3 + 8) <= (uint)*(ushort *)(iVar3 + 0x38) + (uint)*(ushort *)(iVar3 + 0x14))
       && (iVar3 = FUN_101c01a9(iVar3,0,1), iVar3 != 0)) {
      return iVar3;
    }
    if (*puVar1 == 0) {
      sVar2 = 0;
      goto LAB_10205751;
    }
    *(ushort *)(*(int *)(puVar1 + 6) + -2 + (uint)*puVar1 * 2) = puVar1[1] - 1;
  }
  sVar2 = (short)*(undefined4 *)puVar1;
LAB_10205751:
  *puVar1 = sVar2 + 1;
  return 0;
}

