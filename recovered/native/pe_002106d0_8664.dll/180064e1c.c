/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180064e1c */

void FUN_180064e1c(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  longlong lVar12;
  
  if ((param_1 != param_2) && (param_1 + 3 != param_2)) {
    lVar8 = 0x18;
    puVar9 = param_1;
    puVar11 = param_1 + 3;
    do {
      uVar2 = puVar9[3];
      uVar3 = puVar9[4];
      uVar5 = puVar9[4];
      uVar6 = puVar9[5];
      lVar12 = lVar8;
      do {
        uVar4 = *(ulonglong *)((longlong)param_1 + lVar12 + -0x18);
        uVar10 = *(longlong *)((longlong)param_1 + lVar12 + -0x10) - uVar4;
        puVar9 = (ulonglong *)((longlong)param_1 + lVar12);
        bVar7 = uVar10 < uVar3 - uVar2;
        if (uVar3 - uVar2 == uVar10) {
          bVar7 = uVar2 < uVar4;
        }
        if (!bVar7) break;
        puVar9[2] = *(ulonglong *)((longlong)param_1 + lVar12 + -8);
        *puVar9 = *(ulonglong *)((longlong)param_1 + lVar12 + -0x18);
        puVar9[1] = *(ulonglong *)((longlong)param_1 + lVar12 + -0x10);
        lVar12 = lVar12 + -0x18;
        puVar9 = param_1;
      } while (lVar12 != 0);
      *puVar9 = uVar2;
      puVar9[1] = uVar5;
      puVar9[2] = uVar6;
      puVar1 = puVar11 + 3;
      lVar8 = lVar8 + 0x18;
      puVar9 = puVar11;
      puVar11 = puVar1;
    } while (puVar1 != param_2);
  }
  return;
}

