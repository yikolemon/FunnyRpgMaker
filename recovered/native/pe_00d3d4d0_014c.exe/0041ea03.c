/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041ea03 */

void __cdecl FUN_0041ea03(int param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x58);
  iVar3 = param_2 * 0x10;
  psVar1 = (short *)(iVar4 + iVar3);
  *(short *)(iVar2 + 0xc) = (short)(*(int *)(iVar4 + 8 + iVar3) + 0x20U >> 6);
  *(short *)(iVar2 + 0xe) = (short)(*(int *)(iVar4 + 0xc + iVar3) + 0x20U >> 6);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(undefined4 *)(iVar2 + 0x10) = 0x10000;
    *(undefined4 *)(iVar2 + 0x14) = 0x10000;
    *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(psVar1 + 6);
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(int *)(iVar2 + 0x20) = (int)*psVar1 << 6;
    *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(psVar1 + 4);
    return;
  }
  iVar4 = FUN_0041eaa0(*(uint *)(psVar1 + 4),(uint)*(ushort *)(param_1 + 0x44));
  *(int *)(iVar2 + 0x10) = iVar4;
  iVar4 = FUN_0041eaa0(*(uint *)(psVar1 + 6),(uint)*(ushort *)(param_1 + 0x44));
  *(int *)(iVar2 + 0x14) = iVar4;
  FUN_0041eb24(param_1,iVar2 + 0xc);
  return;
}

