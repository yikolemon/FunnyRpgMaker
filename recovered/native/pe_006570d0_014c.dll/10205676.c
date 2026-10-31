/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10205676 */

void FUN_10205676(int param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (*(char *)(param_1 + 0x44) != '\0') {
    uVar5 = (uint)*(ushort *)(iVar1 + 2);
    iVar2 = *(int *)(iVar1 + 4);
    iVar3 = *(int *)(iVar1 + 8);
    iVar4 = FUN_101c5299(param_2);
    *(int *)(iVar2 + uVar5 * 8) = iVar4 >> 0x10;
    iVar4 = FUN_101c5299(param_3);
    *(int *)(iVar2 + 4 + uVar5 * 8) = iVar4 >> 0x10;
    *(char *)(iVar3 + uVar5) = (param_4 == '\0') + '\x01';
  }
  *(short *)(iVar1 + 2) = *(short *)(iVar1 + 2) + 1;
  return;
}

