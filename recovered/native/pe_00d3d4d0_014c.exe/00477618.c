/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00477618 */

undefined4 __fastcall FUN_00477618(int *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  undefined8 uVar10;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    uVar5 = 6;
  }
  else {
    iVar9 = param_1[2];
    if (0 < iVar9) {
      uVar4 = param_1[1];
      iVar6 = 0;
      do {
        if (0 < (int)uVar4) {
          iVar9 = 0;
          do {
            iVar2 = param_1[2];
            iVar7 = (iVar6 * uVar4 + iVar9) * 0x10;
            bVar3 = FUN_004777cd(*param_1 + iVar7,iVar9,iVar6,uVar4,iVar2);
            puVar8 = (uint *)(iVar7 + iVar1);
            if (bVar3) {
              uVar10 = FUN_00477967((int)puVar8,iVar9,iVar6,uVar4,iVar2);
              *(undefined8 *)(puVar8 + 1) = uVar10;
              uVar4 = FUN_00421279(puVar8 + 1);
              *puVar8 = uVar4;
            }
            else {
              *puVar8 = 0x1900000;
              puVar8[1] = 0xc80000;
              puVar8[2] = 0xc80000;
            }
            iVar9 = iVar9 + 1;
            uVar4 = param_1[1];
          } while (iVar9 < (int)uVar4);
          iVar9 = param_1[2];
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar9);
    }
    uVar5 = 0;
  }
  return uVar5;
}

