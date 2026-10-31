/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10171cdd */

undefined4 __thiscall
FUN_10171cdd(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int local_34;
  int local_2c;
  
  iVar9 = param_3 << (param_4 == 0x10);
  if (param_6 == 0) {
    uVar6 = FUN_10172b60(param_2,param_3,*(undefined4 *)*param_1,((undefined4 *)*param_1)[1],param_4
                         ,param_5);
  }
  else {
    local_2c = param_2;
    iVar2 = FUN_10173127(iVar9,0);
    if (iVar2 == 0) {
      FUN_10170e07();
LAB_10171f08:
      uVar6 = 0;
    }
    else {
      iVar12 = 0;
      piVar16 = param_1;
      do {
        piVar15 = piVar16;
        param_1 = (int *)*param_1;
        uVar20 = (&DAT_102baf34)[iVar12];
        uVar17 = (&DAT_102baf6c)[iVar12];
        uVar10 = ~uVar20 + *param_1 + uVar17;
        uVar3 = uVar10 / uVar17;
        uVar19 = (&DAT_102baf50)[iVar12];
        uVar21 = (&DAT_102baf88)[iVar12];
        uVar7 = ~uVar19 + param_1[1] + uVar21;
        uVar4 = uVar7 / uVar21;
        piVar16 = piVar15;
        if ((uVar17 <= uVar10) && (uVar21 <= uVar7)) {
          iVar1 = param_1[2];
          iVar5 = FUN_10172b60(local_2c,param_3,uVar3,uVar4,param_4,param_5,piVar15,uVar17,uVar19,
                               iVar2,uVar20,uVar21);
          if (iVar5 == 0) {
            thunk_FUN_10274120(iVar2);
            goto LAB_10171f08;
          }
          if (0 < (int)uVar4) {
            iVar8 = uVar20 * iVar9 + iVar2;
            iVar5 = uVar19 * iVar9;
            iVar13 = uVar21 * iVar9;
            local_34 = 0;
            do {
              if (0 < (int)uVar3) {
                iVar18 = piVar15[3];
                iVar11 = *(int *)*piVar15 * iVar5 + iVar8;
                iVar14 = 0;
                do {
                  FUN_1025b2d0(iVar11,(local_34 * uVar3 + iVar14) * iVar9 + iVar18,iVar9);
                  iVar14 = iVar14 + 1;
                  iVar11 = iVar11 + uVar17 * iVar9;
                } while (iVar14 < (int)uVar3);
              }
              local_34 = local_34 + 1;
              iVar5 = iVar5 + iVar13;
            } while (local_34 < (int)uVar4);
          }
          piVar16 = piVar15;
          thunk_FUN_10274120(piVar15[3]);
          local_2c = local_2c - (((int)(uVar3 * param_4 * iVar1 + 7) >> 3) + 1) * uVar4;
        }
        iVar12 = iVar12 + 1;
        param_1 = piVar15;
      } while (iVar12 != 7);
      piVar15[3] = iVar2;
      uVar6 = 1;
    }
  }
  return uVar6;
}

