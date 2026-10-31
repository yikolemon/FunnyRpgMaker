/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14033d1be */

void FUN_14033d1be(int *param_1,int param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (1 < *param_1 - param_2) {
    lVar9 = (longlong)param_2;
    uVar7 = (ulonglong)(uint)(*param_1 - param_2);
    do {
      lVar6 = lVar9;
      lVar8 = lVar9 * 0xc;
      do {
        lVar1 = *(longlong *)(param_1 + 2);
        if (*(int *)(lVar1 + 0xc + lVar8) < *(int *)(lVar1 + lVar8)) {
          FUN_14033d2e9(lVar1 + lVar8,lVar1 + lVar8 + 0xc);
        }
        lVar6 = lVar6 + 1;
        lVar8 = lVar8 + 0xc;
      } while (lVar6 < (longlong)(uVar7 + lVar9 + -1));
      bVar2 = 2 < (longlong)uVar7;
      uVar7 = uVar7 - 1;
    } while (bVar2);
    iVar5 = *param_1;
    while (iVar3 = param_2, param_2 = iVar3 + 1, param_2 < iVar5) {
      lVar9 = *(longlong *)(param_1 + 2);
      lVar6 = (longlong)iVar3;
      uVar7 = (ulonglong)param_2;
      if (*(int *)(lVar9 + uVar7 * 0xc) <= *(int *)(lVar9 + 4 + lVar6 * 0xc)) {
        uVar4 = FUN_1403101d0(*(undefined4 *)(lVar9 + lVar6 * 0xc));
        lVar6 = lVar6 * 0xc;
        *(undefined4 *)(*(longlong *)(param_1 + 2) + lVar6) = uVar4;
        lVar9 = uVar7 * 0xc;
        uVar4 = FUN_1403118b9(*(undefined4 *)(*(longlong *)(param_1 + 2) + 4 + lVar6),
                              *(undefined4 *)(*(longlong *)(param_1 + 2) + 4 + lVar9));
        *(undefined4 *)(*(longlong *)(param_1 + 2) + 4 + lVar6) = uVar4;
        FUN_1404b97c0(*(longlong *)(param_1 + 2) + lVar9,*(longlong *)(param_1 + 2) + lVar9 + 0xc,
                      (~uVar7 + (longlong)*param_1) * 0xc);
        iVar5 = *param_1 + -1;
        *param_1 = iVar5;
        param_2 = iVar3;
      }
    }
  }
  return;
}

