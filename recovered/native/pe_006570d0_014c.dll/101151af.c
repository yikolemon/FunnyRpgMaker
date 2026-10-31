/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101151af */

void FUN_101151af(float param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_1039d74c;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar1 = *(int *)(iVar2 + 0x14cc);
  if ((param_1 == 0.0) && (!NAN(param_1))) {
    param_1 = *(float *)(iVar2 + 0xd3c);
  }
  param_1 = *(float *)(iVar1 + 0x188) - param_1;
  *(float *)(iVar1 + 0x188) = param_1;
  *(float *)(iVar1 + 0x144) = param_1 + *(float *)(iVar1 + 0x50) + *(float *)(iVar1 + 0x18c);
  return;
}

