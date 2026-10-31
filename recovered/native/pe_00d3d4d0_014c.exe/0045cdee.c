/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045cdee */

void __cdecl FUN_0045cdee(int param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (*(char *)(param_1 + 0x44) != '\0') {
    uVar5 = (uint)*(ushort *)(iVar1 + 2);
    iVar2 = *(int *)(iVar1 + 4);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = FUN_00421311(param_2);
    *(int *)(iVar2 + uVar5 * 8) = (int)uVar4 >> 0x10;
    uVar4 = FUN_00421311(param_3);
    *(int *)(iVar2 + 4 + uVar5 * 8) = (int)uVar4 >> 0x10;
    *(char *)(iVar3 + uVar5) = (param_4 == '\0') + '\x01';
  }
  *(short *)(iVar1 + 2) = *(short *)(iVar1 + 2) + 1;
  return;
}

