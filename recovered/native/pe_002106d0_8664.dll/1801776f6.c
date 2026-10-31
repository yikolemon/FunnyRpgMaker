/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801776f6 */

undefined8
FUN_1801776f6(undefined8 *param_1,longlong param_2,int param_3,undefined8 param_4,int param_5,
             undefined4 param_6,int param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 uVar18;
  uint uVar19;
  longlong lVar20;
  int iVar21;
  longlong lVar22;
  int local_94;
  
  iVar21 = (int)param_4 << (param_5 == 0x10);
  uVar1 = *(undefined4 *)*param_1;
  uVar2 = ((undefined4 *)*param_1)[1];
  if (param_7 == 0) {
    uVar18 = FUN_1801787e1(param_1,param_2,param_3,param_4,uVar1,uVar2,param_5,param_6);
  }
  else {
    uVar18 = 0;
    lVar12 = FUN_180178ee1(uVar1,uVar2,iVar21,0);
    if (lVar12 == 0) {
      FUN_1801765d0("outofmem");
    }
    else {
      lVar20 = (longlong)iVar21;
      lVar17 = 0;
      do {
        piVar8 = (int *)*param_1;
        uVar3 = (&DAT_1802e0c10)[lVar17];
        uVar4 = (&DAT_1802e0c50)[lVar17];
        uVar19 = ~uVar3 + *piVar8 + uVar4;
        uVar10 = uVar19 / uVar4;
        uVar5 = (&DAT_1802e0c30)[lVar17];
        uVar6 = (&DAT_1802e0c70)[lVar17];
        uVar13 = ~uVar5 + piVar8[1] + uVar6;
        uVar14 = uVar13 / uVar6;
        if ((uVar4 <= uVar19) && (uVar6 <= uVar13)) {
          iVar7 = piVar8[2];
          iVar11 = FUN_1801787e1(param_1,param_2,param_3,(int)param_4,uVar10,uVar14,param_5,param_6)
          ;
          if (iVar11 == 0) {
            thunk_FUN_180290e40(lVar12);
            return 0;
          }
          if (0 < (int)uVar14) {
            local_94 = uVar5 * iVar21;
            uVar15 = 0;
            do {
              if (0 < (int)uVar10) {
                lVar9 = param_1[3];
                lVar16 = (ulonglong)(uint)(*(int *)*param_1 * local_94) +
                         (int)uVar3 * lVar20 + lVar12;
                lVar22 = 0;
                do {
                  FUN_1802a82f0(lVar16,(lVar22 + uVar15 * (longlong)(int)uVar10) * lVar20 + lVar9,
                                lVar20);
                  lVar22 = lVar22 + 1;
                  lVar16 = lVar16 + (int)uVar4 * lVar20;
                } while (lVar22 < (int)uVar10);
              }
              uVar15 = uVar15 + 1;
              local_94 = local_94 + uVar6 * iVar21;
            } while (uVar15 < uVar14);
          }
          uVar14 = (((int)(uVar10 * param_5 * iVar7 + 7) >> 3) + 1) * uVar14;
          thunk_FUN_180290e40(param_1[3]);
          param_2 = param_2 + (ulonglong)uVar14;
          param_3 = param_3 - uVar14;
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 != 7);
      param_1[3] = lVar12;
      uVar18 = 1;
    }
  }
  return uVar18;
}

