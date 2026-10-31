/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401804db */

undefined8 FUN_1401804db(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    uVar5 = 6;
  }
  else {
    iVar3 = *(int *)((longlong)param_1 + 0xc);
    if (0 < iVar3) {
      iVar6 = (int)param_1[1];
      iVar7 = 0;
      do {
        if (0 < iVar6) {
          uVar8 = 0;
          do {
            uVar4 = *(undefined4 *)((longlong)param_1 + 0xc);
            lVar9 = ((longlong)(iVar7 * iVar6) + uVar8) * 0x10;
            cVar2 = FUN_1401806b2(*param_1 + lVar9,uVar8 & 0xffffffff,iVar7,iVar6,uVar4);
            puVar10 = (undefined8 *)(lVar9 + lVar1);
            if (cVar2 == '\0') {
              *puVar10 = 0xc8000001900000;
              *(undefined4 *)(puVar10 + 1) = 0xc80000;
            }
            else {
              uVar5 = FUN_14018085e(puVar10,uVar8 & 0xffffffff,iVar7,iVar6,uVar4);
              *(undefined8 *)((longlong)puVar10 + 4) = uVar5;
              uVar4 = FUN_14012e38c((longlong)puVar10 + 4);
              *(undefined4 *)puVar10 = uVar4;
            }
            iVar6 = (int)param_1[1];
            uVar8 = uVar8 + 1;
          } while ((int)uVar8 < iVar6);
          iVar3 = *(int *)((longlong)param_1 + 0xc);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar3);
    }
    uVar5 = 0;
  }
  return uVar5;
}

