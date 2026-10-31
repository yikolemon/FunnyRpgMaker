/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10192f56 */

int __thiscall FUN_10192f56(int param_1,ushort param_2)

{
  uint uVar1;
  int iVar2;
  
  if ((uint)param_2 < *(uint *)(param_1 + 0x18)) {
    uVar1 = (uint)*(ushort *)(*(int *)(param_1 + 0x20) + (uint)param_2 * 2);
    if (uVar1 == 0xfffe) {
      return 0;
    }
    if (uVar1 != 0xffff) {
      return uVar1 * 0x2c + *(int *)(param_1 + 0x2c);
    }
  }
  *(byte *)(param_1 + 0x3f) = *(byte *)(param_1 + 0x3f) | 8;
  iVar2 = FUN_10192d39(0);
  *(byte *)(param_1 + 0x3f) = *(byte *)(param_1 + 0x3f) & 0xf7;
  return iVar2;
}

