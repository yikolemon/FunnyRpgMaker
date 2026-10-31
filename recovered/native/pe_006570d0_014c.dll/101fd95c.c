/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101fd95c */

int __fastcall FUN_101fd95c(int param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    return 8;
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  uVar2 = (uint)*(ushort *)(iVar1 + 0x3a);
  if (*(uint *)(iVar1 + 4) <= *(ushort *)(iVar1 + 0x16) + uVar2) {
    iVar3 = FUN_101c01a9(iVar1,1,0);
    if (iVar3 != 0) {
      return iVar3;
    }
    uVar2 = (uint)*(ushort *)(iVar1 + 0x3a);
  }
  *(undefined8 *)(*(int *)(iVar1 + 0x3c) + uVar2 * 8) = *param_2;
  *(undefined1 *)(*(int *)(iVar1 + 0x40) + uVar2) = 1;
  *(short *)(iVar1 + 0x3a) = *(short *)(iVar1 + 0x3a) + 1;
  return 0;
}

