/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10131ed3 */

void FUN_10131ed3(void)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = DAT_1039d74c;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar1 = *(int *)(iVar2 + 0x14cc);
  if (*(char *)(iVar1 + 0xfe) == '\0') {
    fVar3 = (float10)FUN_100fdbca(*(undefined4 *)(iVar1 + 0x170),
                                  *(float *)(iVar2 + 0xd10) + *(float *)(iVar2 + 0xd10) +
                                  *(float *)(iVar2 + 0x1228));
    *(float *)(iVar1 + 0x170) = (float)fVar3;
    fVar3 = (float10)FUN_100fdbca(*(undefined4 *)(iVar1 + 0x17c),*(undefined4 *)(iVar2 + 0xd10));
    *(float *)(iVar1 + 0x17c) = (float)fVar3;
  }
  return;
}

