/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14011281c */

void FUN_14011281c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  lVar2 = (longlong)*(int *)(param_1 + 0x74) * 0x74 + *(longlong *)(param_1 + 0x18);
  lVar1 = *(longlong *)(param_1 + 0x188);
  if (*(char *)(lVar1 + 0x199) == '\x01') {
    FUN_14008f4b1();
  }
  lVar3 = 0x4c;
  if ((*(byte *)(param_1 + 0x94) & 1) == 0) {
    lVar3 = (ulonglong)*(byte *)(param_1 + 0x245) * 4 + 0x44;
  }
  uVar4 = FUN_14007b71f(*(undefined4 *)(lVar2 + lVar3),*(undefined4 *)(lVar1 + 0x170));
  *(undefined4 *)(lVar2 + lVar3) = uVar4;
  if (*(char *)(lVar2 + 0x66) == '\x01') {
    uVar4 = FUN_14007b71f(*(undefined4 *)(param_1 + 0x80),
                          *(float *)(lVar1 + 0x174) + *(float *)(param_1 + 0x88));
    *(undefined4 *)(param_1 + 0x80) = uVar4;
  }
  *(undefined4 *)(lVar2 + 0x40) = *(undefined4 *)(lVar1 + 0x23c);
  uVar4 = FUN_14007b71f(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(lVar1 + 0x194));
  *(undefined4 *)(param_1 + 0x8c) = uVar4;
  return;
}

