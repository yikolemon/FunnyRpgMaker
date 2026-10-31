/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10167bbb */

undefined4 * FUN_10167bbb(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x38);
  puVar2 = (undefined4 *)0x0;
  if ((iVar1 != -1) &&
     (puVar2 = (undefined4 *)(*(int *)(DAT_1039d74c + 0x26fc) + iVar1),
     (int)*(short *)(*(int *)(DAT_1039d74c + 0x26fc) + 0xe + iVar1) < *(int *)(param_1 + 0x40))) {
    *puVar2 = 0;
    puVar2 = (undefined4 *)0x0;
  }
  return puVar2;
}

