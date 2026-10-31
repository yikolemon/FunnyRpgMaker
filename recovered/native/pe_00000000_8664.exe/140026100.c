/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140026100 */

void FUN_140026100(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar2 = 0;
    uVar4 = 0;
    do {
      uVar3 = uVar4 + (ulonglong)*(uint *)(*param_1 + lVar2 * 4) * (param_2 & 0xffffffff);
      *(int *)(*param_1 + lVar2 * 4) = (int)uVar3;
      uVar4 = uVar3 >> 0x20;
      lVar2 = lVar2 + 1;
    } while (lVar1 != lVar2);
    if (uVar4 != 0) {
      lVar1 = param_1[1];
      uVar4 = lVar1 + 1;
      if ((ulonglong)param_1[2] < uVar4) {
        (*(code *)param_1[3])(param_1);
        lVar1 = param_1[1];
        uVar4 = lVar1 + 1;
      }
      param_1[1] = uVar4;
      *(int *)(*param_1 + lVar1 * 4) = (int)(uVar3 >> 0x20);
    }
  }
  return;
}

