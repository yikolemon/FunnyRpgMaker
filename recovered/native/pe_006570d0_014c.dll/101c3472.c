/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c3472 */

undefined4 FUN_101c3472(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int local_1c;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar6 = 0x21;
  }
  else {
    uVar6 = 0;
    piVar1 = param_1 + 0x33;
    iVar7 = *piVar1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0 || SBORROW4(iVar7,1) != *piVar1 < 0) {
      uVar6 = *param_1;
      uVar8 = param_1[4];
      local_1c = 0;
      bVar9 = false;
      uVar10 = uVar8;
      bVar5 = true;
      do {
        bVar4 = bVar5;
        if (uVar8 == 0) {
          uVar8 = 0;
        }
        else {
          uVar11 = 0;
          uVar8 = uVar10;
          do {
            puVar2 = (undefined4 *)param_1[uVar11 + 5];
            pbVar3 = (byte *)*puVar2;
            if ((((bVar9) ||
                 (iVar7 = _strcmp(*(char **)(pbVar3 + 8),(&PTR_s_type42_10302d78)[local_1c]),
                 iVar7 == 0)) && ((*pbVar3 & 1) != 0)) && (iVar7 = puVar2[4], iVar7 != 0)) {
              do {
                FUN_101c1f3e(*(undefined4 *)(iVar7 + 8));
                iVar7 = puVar2[4];
              } while (iVar7 != 0);
              uVar8 = param_1[4];
            }
            uVar11 = uVar11 + 1;
            uVar10 = uVar8;
          } while (uVar11 < uVar8);
        }
        bVar9 = true;
        local_1c = 1;
        bVar5 = false;
      } while (bVar4);
      while (uVar10 != 0) {
        FUN_101c3163(param_1,param_1[uVar10 + 4]);
        uVar10 = param_1[4];
      }
      FUN_101c0017(uVar6,param_1);
      uVar6 = 0;
    }
  }
  return uVar6;
}

