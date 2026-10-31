/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140146127 */

void FUN_140146127(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x180) == 0) {
    if ((longlong)*(short *)(param_1 + 0x19e) == 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x178);
    }
    else if ((longlong)*(short *)(param_1 + 0x19c) == 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x17c);
    }
    else {
      lVar2 = (longlong)*(int *)(param_1 + 0x178) * (longlong)*(short *)(param_1 + 0x19c);
      lVar3 = (longlong)*(int *)(param_1 + 0x17c) * (longlong)*(short *)(param_1 + 0x19e);
      uVar1 = FUN_14012e44a((ulonglong)(lVar2 + 0x2000 + (lVar2 >> 0x3f)) >> 0xe,
                            (ulonglong)(lVar3 + 0x2000 + (lVar3 >> 0x3f)) >> 0xe);
    }
    *(undefined4 *)(param_1 + 0x180) = uVar1;
  }
  return;
}

