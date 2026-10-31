/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408b6b20 */

void FUN_1408b6b20(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_1408b6ac0();
  *(int *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) - 4) = (int)lVar2;
  *(undefined4 *)(ulonglong)(param_1 + 0xc) = *(undefined4 *)(lVar2 + 0x4c);
  *(undefined4 *)(ulonglong)(param_1 + 0x10) = *(undefined4 *)(lVar2 + 0x48);
  FUN_1408cc847();
  uVar3 = (ulonglong)*(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) - 4);
  FUN_1408cc878();
  uVar1 = *(uint *)(uVar3 + 0x350);
  if ((uVar1 & 2) == 0) {
    *(uint *)(uVar3 + 0x350) = uVar1 | 2;
    *(undefined1 *)((ulonglong)param_1 + 0x14) = 2;
  }
  return;
}

