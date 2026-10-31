/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c2486 */

void FUN_101c2486(int param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x58);
  param_2 = param_2 * 0x10;
  psVar1 = (short *)(iVar2 + param_2);
  *(short *)(iVar3 + 0xc) = (short)(*(int *)(iVar2 + 8 + param_2) + 0x20U >> 6);
  *(short *)(iVar3 + 0xe) = (short)(*(int *)(iVar2 + 0xc + param_2) + 0x20U >> 6);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(undefined4 *)(iVar3 + 0x10) = 0x10000;
    *(undefined4 *)(iVar3 + 0x14) = 0x10000;
    *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(psVar1 + 6);
    *(undefined4 *)(iVar3 + 0x1c) = 0;
    *(int *)(iVar3 + 0x20) = (int)*psVar1 << 6;
    *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(psVar1 + 4);
    return;
  }
  uVar4 = FUN_101c2523(*(undefined4 *)(psVar1 + 4),*(undefined2 *)(param_1 + 0x44));
  *(undefined4 *)(iVar3 + 0x10) = uVar4;
  uVar4 = FUN_101c2523(*(undefined4 *)(psVar1 + 6),*(undefined2 *)(param_1 + 0x44));
  *(undefined4 *)(iVar3 + 0x14) = uVar4;
  FUN_101c25a7();
  return;
}

