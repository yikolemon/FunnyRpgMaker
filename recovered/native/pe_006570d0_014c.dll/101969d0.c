/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101969d0 */

undefined4 __thiscall FUN_101969d0(undefined4 *param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = FUN_101c1eb0(param_2,*(undefined4 *)(param_3 + 0x28),*(undefined4 *)(param_3 + 0x2c),
                       *(undefined4 *)(param_3 + 0x58),param_1);
  if ((iVar1 != 0) || (iVar1 = FUN_101c29e3(*param_1,0x756e6963), iVar1 != 0)) {
    return 0;
  }
  param_4 = param_4 | *(uint *)(param_3 + 0x5c);
  param_1[1] = param_4;
  uVar4 = ((param_4 & 2) << 0xe | (param_4 >> 6 & 8) + (param_4 & 1) * 2) + (param_4 & 4) * 8 ^ 8;
  param_1[2] = uVar4;
  uVar2 = 0x10000;
  if (((param_4 & 8) != 0) || (uVar2 = 0x20000, (param_4 & 0x10) != 0)) {
    uVar4 = uVar4 | uVar2;
    param_1[2] = uVar4;
  }
  uVar3 = CONCAT31((int3)(uVar2 >> 8),1);
  if ((param_4 >> 8 & 1) == 0) {
    return uVar3;
  }
  param_1[2] = uVar4 | 0x100000;
  return uVar3;
}

