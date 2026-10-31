/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c03c2 */

void FUN_1801c03c2(longlong param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  
  lVar6 = (longlong)param_2 * 0x10;
  puVar1 = (undefined8 *)(param_1 + lVar6);
  lVar8 = *(longlong *)(param_1 + 8 + lVar6);
  iVar3 = *(int *)(param_1 + lVar6);
  lVar6 = (longlong)param_3;
  if ((longlong)iVar3 != 0) {
    piVar2 = (int *)(param_1 + lVar6 * 0x10);
    iVar10 = *(int *)(param_1 + lVar6 * 0x10);
    lVar11 = 0;
    do {
      uVar4 = *(undefined4 *)(lVar8 + lVar11);
      if (iVar10 == piVar2[1]) {
        if (iVar10 == 0) {
          iVar5 = 8;
        }
        else {
          iVar5 = iVar10 / 2 + iVar10;
        }
        iVar9 = iVar10 + 1;
        if (iVar10 + 1 < iVar5) {
          iVar9 = iVar5;
        }
        lVar7 = FUN_1800fe7f8((longlong)iVar9 << 2);
        if (*(longlong *)(piVar2 + 2) != 0) {
          FUN_1802a82f0(lVar7,*(longlong *)(piVar2 + 2),(longlong)*piVar2 << 2);
          FUN_1800fe8d4(*(undefined8 *)(piVar2 + 2));
        }
        *(longlong *)(piVar2 + 2) = lVar7;
        piVar2[1] = iVar9;
        iVar10 = *piVar2;
      }
      else {
        lVar7 = *(longlong *)(piVar2 + 2);
      }
      *(undefined4 *)(lVar7 + (longlong)iVar10 * 4) = uVar4;
      iVar10 = *piVar2 + 1;
      *piVar2 = iVar10;
      lVar11 = lVar11 + 4;
    } while ((longlong)iVar3 * 4 != lVar11);
    lVar8 = puVar1[1];
  }
  if (lVar8 != 0) {
    *puVar1 = 0;
    FUN_1800fe8d4(lVar8);
    puVar1[1] = 0;
  }
  FUN_180289570(*(undefined8 *)(param_1 + 8 + lVar6 * 0x10),
                (longlong)*(int *)(param_1 + lVar6 * 0x10),4,&LAB_1801c06e8);
  lVar8 = param_1 + (longlong)param_2 * 0x30 + 0x20;
  FUN_18014f638(lVar8,param_1 + lVar6 * 0x30 + 0x20);
  FUN_18014f5d6(lVar8);
  return;
}

