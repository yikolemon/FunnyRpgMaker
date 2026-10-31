/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400beffb */

void FUN_1400beffb(longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = param_3 - 1;
  lVar3 = lVar1 >> 1;
  lVar5 = param_2;
  while (lVar5 < lVar3) {
    if (*(ulonglong *)(param_1 + 0x70 + lVar5 * 0x50) <
        *(ulonglong *)(param_1 + 0x48 + lVar5 * 0x50)) {
      lVar4 = lVar5 * 2 + 1;
    }
    else {
      lVar4 = lVar5 * 2 + 2;
    }
    lVar2 = param_1 + lVar4 * 0x28;
    lVar5 = param_1 + lVar5 * 0x28;
    FUN_14000ff1e(lVar5,lVar2);
    *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
    lVar5 = lVar4;
  }
  if (((param_3 & 1) == 0) && (lVar5 == lVar3)) {
    lVar5 = param_1 + lVar1 * 0x28;
    lVar3 = param_1 + lVar3 * 0x28;
    FUN_14000ff1e(lVar3,lVar5);
    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar5 + 0x20);
    lVar5 = lVar1;
  }
  FUN_1400bf0d9(param_1,lVar5,param_2,param_4);
  return;
}

