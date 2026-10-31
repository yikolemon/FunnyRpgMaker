/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003067e */

void FUN_18003067e(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  FUN_18002ff83();
  lVar2 = param_2[1];
  if (lVar2 != 0) {
    lVar3 = (longlong)((int)param_2[0x15] - (int)param_1[0x15]);
    lVar4 = lVar3 << 0x20;
    uVar7 = 0;
    lVar5 = 0;
    do {
      lVar4 = lVar4 + 0x100000000;
      lVar6 = *param_1 + lVar3 * 4;
      uVar8 = (ulonglong)*(uint *)(lVar6 + lVar5 * 4) - (*(uint *)(*param_2 + lVar5 * 4) + uVar7);
      *(int *)(lVar6 + lVar5 * 4) = (int)uVar8;
      uVar7 = uVar8 >> 0x3f;
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    if ((longlong)uVar8 < 0) {
      piVar1 = (int *)(*param_1 + (lVar4 >> 0x1e));
      *piVar1 = *piVar1 + -1;
    }
  }
  FUN_18003033c(param_1);
  return;
}

