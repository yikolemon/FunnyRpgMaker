/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016905b */

float10 FUN_1016905b(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)(*(int *)(DAT_1039d74c + 0x14cc) + 0x1e8);
  if (iVar1 != 0) {
    if (param_1 < 0) {
      param_1 = *(int *)(iVar1 + 0xc);
    }
    fVar2 = (float10)FUN_100ea365(*(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(iVar1 + 0x18),
                                  *(undefined4 *)(*(int *)(iVar1 + 100) + param_1 * 0x1c));
    return fVar2;
  }
  return (float10)0;
}

