/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101902dc */

int __thiscall FUN_101902dc(int param_1,ushort param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (((uint)param_2 < *(uint *)(param_1 + 0x18)) &&
     (uVar1 = (uint)*(ushort *)(*(int *)(param_1 + 0x20) + (uint)param_2 * 2), uVar1 != 0xffff)) {
    if (uVar1 == 0xfffe) {
      uVar1 = *(uint *)(param_1 + 0x30);
    }
    iVar3 = uVar1 * 0x2c + *(int *)(param_1 + 0x2c);
  }
  else {
    iVar2 = FUN_10192d39(0);
    iVar3 = *(int *)(param_1 + 0x30) * 0x2c + *(int *)(param_1 + 0x2c);
    if (iVar2 != 0) {
      iVar3 = iVar2;
    }
  }
  return iVar3;
}

