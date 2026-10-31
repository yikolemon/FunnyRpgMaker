/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012c433 */

undefined8 FUN_14012c433(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  bool bVar13;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar8 = 0x21;
  }
  else {
    uVar8 = 0;
    piVar1 = (int *)(param_1 + 0x2e);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0 || SBORROW4(iVar6,1) != *piVar1 < 0) {
      uVar8 = *param_1;
      uVar10 = *(uint *)((longlong)param_1 + 0x14);
      bVar13 = false;
      lVar11 = 0;
      uVar5 = uVar10;
      bVar4 = true;
      do {
        bVar9 = bVar4;
        if (uVar5 == 0) {
          uVar5 = 0;
        }
        else {
          uVar12 = 0;
          do {
            puVar2 = (undefined8 *)param_1[uVar12 + 3];
            pbVar3 = (byte *)*puVar2;
            if ((((bVar13) ||
                 (iVar6 = strcmp(*(char **)(pbVar3 + 8),(&PTR_s_type42_140e94de0)[lVar11]),
                 iVar6 == 0)) && ((*pbVar3 & 1) != 0)) && (lVar7 = puVar2[4], lVar7 != 0)) {
              do {
                FUN_14012acb4(*(undefined8 *)(lVar7 + 0x10));
                lVar7 = puVar2[4];
              } while (lVar7 != 0);
              uVar10 = *(uint *)((longlong)param_1 + 0x14);
            }
            uVar12 = uVar12 + 1;
            uVar5 = uVar10;
          } while (uVar12 < uVar10);
        }
        lVar11 = 1;
        bVar13 = true;
        bVar4 = false;
      } while (bVar9);
      while (uVar10 != 0) {
        FUN_14012c0dd(param_1,param_1[(ulonglong)(uVar10 - 1) + 3]);
        uVar10 = *(uint *)((longlong)param_1 + 0x14);
      }
      FUN_140128b39(uVar8,param_1);
      uVar8 = 0;
    }
  }
  return uVar8;
}

