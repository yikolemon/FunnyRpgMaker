/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101fd9af */

void __fastcall FUN_101fd9af(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  FUN_101fda81();
  *(undefined1 *)(param_1 + 0x20) = 1;
  if ((*(uint *)(iVar1 + 4) <= (uint)*(ushort *)(iVar1 + 0x3a) + (uint)*(ushort *)(iVar1 + 0x16)) ||
     (*(uint *)(iVar1 + 8) <= (uint)*(ushort *)(iVar1 + 0x38) + (uint)*(ushort *)(iVar1 + 0x14))) {
    iVar1 = FUN_101c01a9(iVar1,1,1);
    if (iVar1 != 0) {
      return;
    }
  }
  FUN_101fd95c();
  return;
}

