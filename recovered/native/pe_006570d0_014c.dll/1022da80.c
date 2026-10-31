/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022da80 */

void FUN_1022da80(int param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_1022bea0(2);
  uVar2 = 1;
  *(undefined4 *)(param_1 + 8) = 1;
  do {
    iVar1 = *(int *)(uVar2 * 4 + 0x1039d5bc);
    if ((iVar1 == 0) || (iVar1 == param_1)) break;
    uVar2 = uVar2 + 1;
    *(uint *)(param_1 + 8) = uVar2;
  } while (uVar2 < 8);
  (&DAT_1039d5e4)[uVar2] = (&DAT_1039d5e4)[uVar2] + '\x01';
  *(int *)(uVar2 * 4 + 0x1039d5bc) = param_1;
  FUN_1022bee0();
  return;
}

