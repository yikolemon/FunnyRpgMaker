/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007e42f */

undefined8 FUN_14007e42f(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    uVar4 = 6;
  }
  else {
    iVar3 = *(int *)((longlong)param_1 + 0xc);
    if (0 < iVar3) {
      uVar6 = *(uint *)(param_1 + 1);
      iVar7 = 0;
      do {
        if (0 < (int)uVar6) {
          lVar8 = 0;
          do {
            iVar3 = *(int *)((longlong)param_1 + 0xc);
            lVar9 = ((int)(iVar7 * uVar6) + lVar8) * 0x10;
            bVar2 = FUN_14007e606(*param_1 + lVar9,(int)lVar8,iVar7,uVar6,iVar3);
            puVar10 = (undefined8 *)(lVar9 + lVar1);
            if (bVar2) {
              uVar4 = FUN_14007e7b2((longlong)puVar10,(int)lVar8,iVar7,uVar6,iVar3);
              *(undefined8 *)((longlong)puVar10 + 4) = uVar4;
              uVar5 = FUN_1400217bb((ulonglong *)((longlong)puVar10 + 4));
              *(int *)puVar10 = (int)uVar5;
            }
            else {
              *puVar10 = 0xc8000001900000;
              *(undefined4 *)(puVar10 + 1) = 0xc80000;
            }
            uVar6 = *(uint *)(param_1 + 1);
            lVar8 = lVar8 + 1;
          } while ((int)lVar8 < (int)uVar6);
          iVar3 = *(int *)((longlong)param_1 + 0xc);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar3);
    }
    uVar4 = 0;
  }
  return uVar4;
}

