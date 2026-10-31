/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002f68a */

int FUN_1002f68a(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int local_44;
  uint *local_3c;
  
  iVar1 = param_2[0x25];
  iVar12 = param_2[1] + iVar1;
  iVar2 = param_1[0x25];
  iVar10 = param_1[1] + iVar2;
  iVar4 = iVar12;
  if (iVar12 < iVar10) {
    iVar4 = iVar10;
  }
  iVar3 = param_3[0x25];
  iVar7 = iVar3 + param_3[1];
  local_44 = -1;
  if (iVar7 <= iVar4 + 1) {
    if (iVar7 < iVar4) {
      local_44 = 1;
    }
    else {
      iVar4 = iVar1;
      if (iVar2 < iVar1) {
        iVar4 = iVar2;
      }
      if (iVar3 <= iVar4) {
        iVar4 = iVar3;
      }
      local_44 = 0;
      if (iVar4 < iVar7) {
        local_3c = (uint *)(*param_3 + -4 + param_3[1] * 4);
        iVar9 = iVar7;
        uVar8 = 0;
        do {
          uVar13 = uVar8;
          uVar8 = 0;
          if (iVar9 <= iVar10 && iVar2 < iVar9) {
            uVar8 = *(uint *)(*param_1 + iVar2 * -4 + -4 + iVar9 * 4);
          }
          uVar14 = 0;
          uVar5 = 0;
          if (iVar9 <= iVar12 && iVar1 < iVar9) {
            uVar5 = *(uint *)(*param_2 + iVar1 * -4 + -4 + iVar9 * 4);
          }
          uVar6 = uVar5 + uVar8;
          if (iVar9 <= iVar7 && iVar3 < iVar9) {
            uVar14 = *local_3c;
          }
          uVar5 = (uint)CARRY4(uVar5,uVar8);
          if (uVar13 < uVar5 || uVar13 - uVar5 < (uint)(uVar14 < uVar6)) {
            return 1;
          }
          iVar11 = (uVar13 - uVar5) - (uint)(uVar14 < uVar6);
          if (iVar11 != 0 || (uint)-iVar11 < (uint)(1 < uVar14 - uVar6)) {
            return -1;
          }
          iVar9 = iVar9 + -1;
          local_3c = local_3c + -1;
          uVar8 = uVar14 - uVar6;
        } while (iVar4 < iVar9);
        local_44 = -(uint)(uVar13 != uVar5 || uVar14 != uVar6);
      }
    }
  }
  return local_44;
}

