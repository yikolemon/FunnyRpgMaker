/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cc2f2 */

void FUN_1801cc2f2(longlong param_1,ulonglong param_2)

{
  short *psVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
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
  uVar4 = FUN_1801cc3a4(*(undefined4 *)(psVar1 + 4),*(undefined2 *)(param_1 + 0x68));
  *(undefined4 *)(lVar3 + 0x1c) = uVar4;
  uVar4 = FUN_1801cc3a4(*(undefined4 *)(psVar1 + 6),*(undefined2 *)(param_1 + 0x68));
  *(undefined4 *)(lVar3 + 0x20) = uVar4;
  FUN_1801cc405(param_1,lVar3 + 0x18);
  return;
}

