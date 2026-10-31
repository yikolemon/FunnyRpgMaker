/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101276a0 */

void __fastcall FUN_101276a0(int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  while ((*(int *)(iVar1 + 0x3a8) != iVar1 && ((*(byte *)(iVar1 + 0xf) & 0x14) == 0))) {
    iVar1 = *(int *)(iVar1 + 0x3a0);
    if (iVar1 == 0) {
      return;
    }
  }
  if (iVar1 == param_1) {
    return;
  }
  *(int *)(iVar1 + 0x3c0) = param_1;
  return;
}

