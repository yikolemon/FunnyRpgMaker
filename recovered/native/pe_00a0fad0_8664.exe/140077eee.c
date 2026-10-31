/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140077eee */

undefined8 FUN_140077eee(undefined4 *param_1)

{
  short sVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  sVar1 = FUN_140077c12();
  if (sVar1 != 0) {
    uVar3 = (DAT_1401cc260 - DAT_1401cc258 >> 4) * -0x3333333333333333;
    if (DAT_1401cc260 != DAT_1401cc258) {
      uVar2 = 0;
      do {
        if (*(short *)(DAT_1401cc258 + 0x20 + uVar2 * 0x50) == sVar1) goto LAB_140077f89;
        uVar2 = (ulonglong)((int)uVar2 + 1);
      } while (uVar2 <= uVar3 && uVar3 - uVar2 != 0);
    }
    lVar5 = *(longlong *)(param_1 + 4) - *(longlong *)(param_1 + 2);
    if (lVar5 != 0) {
      uVar6 = (lVar5 >> 4) * -0x3333333333333333;
      uVar4 = 1;
      uVar7 = 0;
      uVar2 = uVar3 & 0xffffffff;
      do {
        if (*(short *)(*(longlong *)(param_1 + 2) + 0x20 + uVar7 * 0x50) == sVar1) {
LAB_140077f89:
          *param_1 = (int)uVar2;
          return 1;
        }
        uVar7 = (ulonglong)uVar4;
        uVar2 = (ulonglong)((int)uVar2 + 1);
        uVar4 = uVar4 + 1;
      } while (uVar7 <= uVar6 && uVar6 - uVar7 != 0);
    }
  }
  return 0;
}

