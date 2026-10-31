/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140026168 */

void FUN_140026168(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  iVar1 = (int)param_1[0x15];
  uVar2 = *(uint *)(param_2 + 0xa8);
  iVar5 = iVar1 - uVar2;
  if (iVar5 != 0 && (int)uVar2 <= iVar1) {
    iVar3 = (int)param_1[1];
    uVar6 = (ulonglong)(uint)(iVar5 + iVar3);
    uVar7 = param_1[2];
    if (uVar7 < uVar6) {
      (*(code *)param_1[3])(param_1,uVar6);
      uVar7 = param_1[2];
    }
    if (uVar6 < uVar7) {
      uVar7 = uVar6;
    }
    param_1[1] = uVar7;
    if (0 < iVar3) {
      uVar7 = (ulonglong)(iVar3 - 1);
      lVar4 = (longlong)(iVar3 + iVar5 + -1);
      do {
        *(undefined4 *)(*param_1 + lVar4 * 4) = *(undefined4 *)(*param_1 + uVar7 * 4);
        lVar4 = lVar4 + -1;
        bVar8 = uVar7 != 0;
        uVar7 = uVar7 - 1;
      } while (bVar8);
    }
    FUN_1401c5830(*param_1,0,(ulonglong)(iVar1 + ~uVar2) * 4 + 4);
    *(int *)(param_1 + 0x15) = (int)param_1[0x15] - iVar5;
  }
  return;
}

