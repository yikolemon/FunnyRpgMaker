/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021fe98 */

undefined4 __fastcall FUN_1021fe98(int *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    uVar4 = 6;
  }
  else {
    iVar8 = param_1[2];
    if (0 < iVar8) {
      iVar7 = param_1[1];
      iVar5 = 0;
      do {
        if (0 < iVar7) {
          iVar8 = 0;
          do {
            iVar2 = param_1[2];
            cVar3 = FUN_1022004d(iVar5,iVar7,iVar2);
            puVar6 = (undefined4 *)((iVar5 * iVar7 + iVar8) * 0x10 + iVar1);
            if (cVar3 == '\0') {
              *puVar6 = 0x1900000;
              puVar6[1] = 0xc80000;
              puVar6[2] = 0xc80000;
            }
            else {
              uVar9 = FUN_102201e7(iVar5,iVar7,iVar2);
              *(undefined8 *)(puVar6 + 1) = uVar9;
              uVar4 = FUN_101c5201(puVar6 + 1);
              *puVar6 = uVar4;
            }
            iVar8 = iVar8 + 1;
            iVar7 = param_1[1];
          } while (iVar8 < iVar7);
          iVar8 = param_1[2];
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar8);
    }
    uVar4 = 0;
  }
  return uVar4;
}

