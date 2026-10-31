/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010d498 */

void FUN_1010d498(int param_1,uint param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x3a0) = param_3;
  *(int *)(param_1 + 0x3b8) = param_1;
  *(int *)(param_1 + 0x3a8) = param_1;
  *(int *)(param_1 + 0x3ac) = param_1;
  *(int *)(param_1 + 0x3b0) = param_1;
  *(int *)(param_1 + 0x3b4) = param_1;
  if ((((param_2 & 0x3000000) == 0x1000000 && param_3 != 0) &&
      (*(undefined4 *)(param_1 + 0x3b0) = *(undefined4 *)(param_3 + 0x3b0),
      (*(byte *)(param_1 + 0x409) & 1) == 0)) && ((*(byte *)(param_3 + 0xe) & 0x80) == 0)) {
    *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_3 + 0x3a8);
  }
  if ((param_3 != 0) && ((param_2 & 0x4000000) != 0)) {
    *(undefined4 *)(param_1 + 0x3ac) = *(undefined4 *)(param_3 + 0x3ac);
  }
  if (((param_3 != 0) && ((param_2 & 0x8000000) == 0)) && ((param_2 & 0x7000000) != 0)) {
    *(undefined4 *)(param_1 + 0x3b4) = *(undefined4 *)(param_3 + 0x3b4);
  }
  bVar1 = *(byte *)(param_1 + 0x15);
  iVar2 = param_1;
  while ((bVar1 & 1) != 0) {
    iVar2 = *(int *)(iVar2 + 0x3a0);
    *(int *)(param_1 + 0x3b8) = iVar2;
    bVar1 = *(byte *)(iVar2 + 0x15);
  }
  return;
}

