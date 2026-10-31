/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c014c */

void __fastcall FUN_101c014c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar2 = *(int *)(param_1 + 0x18) + (uint)*(ushort *)(param_1 + 0x16) * 8;
  }
  *(int *)(param_1 + 0x3c) = iVar2;
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar1 = *(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x16);
  }
  *(int *)(param_1 + 0x40) = iVar1;
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x20) + (uint)*(ushort *)(param_1 + 0x14) * 2;
  }
  *(int *)(param_1 + 0x44) = iVar2;
  if (*(char *)(param_1 + 0x10) != '\0') {
    iVar2 = (uint)*(ushort *)(param_1 + 0x16) * 8;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x28) + iVar2;
    *(int *)(param_1 + 0x50) = iVar2 + *(int *)(param_1 + 0x2c);
  }
  return;
}

