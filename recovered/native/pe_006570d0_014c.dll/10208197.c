/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10208197 */

void __fastcall FUN_10208197(int param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (*(char *)(param_1 + 0x2d) != '\0') {
    uVar4 = (uint)*(ushort *)(iVar1 + 2);
    iVar2 = *(int *)(iVar1 + 4);
    iVar3 = *(int *)(iVar1 + 8);
    *(int *)(iVar2 + uVar4 * 8) = param_2 >> 10;
    *(int *)(iVar2 + 4 + uVar4 * 8) = param_3 >> 10;
    *(char *)(iVar3 + uVar4) = (param_4 == '\0') + '\x01';
  }
  *(short *)(iVar1 + 2) = *(short *)(iVar1 + 2) + 1;
  return;
}

