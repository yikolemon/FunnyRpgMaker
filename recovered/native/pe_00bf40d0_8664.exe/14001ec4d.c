/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001ec4d */

void FUN_14001ec4d(longlong param_1,ulonglong param_2)

{
  short *psVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  lVar3 = *(longlong *)(param_1 + 0x80);
  lVar5 = (param_2 & 0xffffffff) * 0x10;
  psVar1 = (short *)(lVar2 + lVar5);
  *(short *)(lVar3 + 0x18) = (short)(*(int *)(lVar2 + 8 + lVar5) + 0x20U >> 6);
  *(short *)(lVar3 + 0x1a) = (short)(*(int *)(lVar2 + 0xc + lVar5) + 0x20U >> 6);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(undefined8 *)(lVar3 + 0x1c) = 0x1000000010000;
    *(undefined4 *)(lVar3 + 0x24) = *(undefined4 *)(psVar1 + 6);
    *(undefined4 *)(lVar3 + 0x28) = 0;
    *(int *)(lVar3 + 0x2c) = (int)*psVar1 << 6;
    *(undefined4 *)(lVar3 + 0x30) = *(undefined4 *)(psVar1 + 4);
    return;
  }
  iVar4 = FUN_14001ecff(*(uint *)(psVar1 + 4),(uint)*(ushort *)(param_1 + 0x68));
  *(int *)(lVar3 + 0x1c) = iVar4;
  iVar4 = FUN_14001ecff(*(uint *)(psVar1 + 6),(uint)*(ushort *)(param_1 + 0x68));
  *(int *)(lVar3 + 0x20) = iVar4;
  FUN_14001ed60(param_1,lVar3 + 0x18);
  return;
}

