/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c11b9 */

int FUN_101c11b9(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (*(int *)(param_1 + 0x58) == 0) {
    return 0x23;
  }
  iVar1 = *(int *)(param_1 + 0x54);
  if (iVar1 == 0) {
    return 0x23;
  }
  FUN_101c1544();
  piVar2 = *(int **)(param_1 + 0x60);
  piVar3 = *(int **)(piVar2[1] + 0xa0);
  if ((*(short *)(*(int *)(param_1 + 0x58) + 0xc) == 0) ||
     (*(short *)(*(int *)(param_1 + 0x58) + 0xe) == 0)) {
    param_3 = param_3 | 1;
  }
  uVar4 = param_3 | 0x801;
  if ((param_3 >> 10 & 1) == 0) {
    uVar4 = param_3;
  }
  uVar10 = uVar4 & 0xfffffff1 | 10;
  if ((uVar4 & 1) == 0) {
    uVar10 = uVar4;
  }
  uVar4 = uVar10 & 0xfffffffb;
  if ((uVar10 >> 0x16 & 1) == 0) {
    uVar4 = uVar10;
  }
  if ((((piVar3 == (int *)0x0) || ((uVar4 & 0x8002) != 0)) ||
      ((*(uint *)(param_1 + 8) & 0x2001) != 1)) ||
     (((uVar4 >> 0xb & 1) == 0 &&
      (((*(int **)(param_1 + 0x80))[2] == 0) == (**(int **)(param_1 + 0x80) == 0))))) {
LAB_101c13ba:
    iVar5 = (**(code **)(piVar2[3] + 0x48))(iVar1,*(undefined4 *)(param_1 + 0x58),param_2,uVar4);
    if (iVar5 != 0) {
      return iVar5;
    }
    iVar5 = 0;
    if (*(int *)(iVar1 + 0x48) == 0x6f75746c) {
      iVar6 = FUN_101c15dc(iVar1 + 0x6c);
      if (iVar6 != 0) {
        return iVar6;
      }
      if ((uVar4 & 2) == 0) {
        FUN_101c1631();
      }
    }
  }
  else {
    if (((uVar4 & 0x20) == 0) && ((*(byte *)(*piVar2 + 1) & 4) != 0)) {
      uVar8 = FUN_101bfea1(param_1);
      iVar5 = FUN_1025bc20(uVar8,"Type 1");
      if (iVar5 == 0) {
        bVar12 = false;
      }
      else {
        bVar12 = piVar2[7] == 1;
      }
      if ((((uVar4 & 0xf0000) != 0x10000) || ((*(byte *)(*piVar2 + 1) >> 3 & 1) != 0 || bVar12)) &&
         (((*(byte *)(param_1 + 8) & 8) == 0 ||
          (((*(int *)(param_1 + 0x300) == 0 || (*(int *)(param_1 + 0x2b0) != 0)) ||
           (7 < *(uint *)(param_1 + 0x2b8))))))) goto LAB_101c13ba;
    }
    if (((((uVar4 >> 0x18 & 1) == 0) && ((*(byte *)(param_1 + 10) & 1) != 0)) &&
        ((iVar5 = (**(code **)(piVar2[3] + 0x48))
                            (iVar1,*(undefined4 *)(param_1 + 0x58),param_2,uVar4 | 0x800000),
         iVar5 == 0 && (*(int *)(iVar1 + 0x48) == 0x53564720)))) ||
       (((((*(byte *)(param_1 + 8) & 2) != 0 && ((uVar4 & 8) == 0)) &&
         (iVar5 = (**(code **)(piVar2[3] + 0x48))
                            (iVar1,*(undefined4 *)(param_1 + 0x58),param_2,uVar4 | 0x4000),
         iVar5 == 0)) && (*(int *)(iVar1 + 0x48) == 0x62697473)))) {
      iVar5 = 0;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x80);
      uVar8 = *(undefined4 *)(iVar6 + 0x18);
      *(undefined4 *)(iVar6 + 0x18) = 0;
      iVar5 = (**(code **)(*(int *)(*piVar3 + 0x14) + 0xc))
                        (piVar3,iVar1,*(undefined4 *)(param_1 + 0x58),param_2,uVar4);
      *(undefined4 *)(iVar6 + 0x18) = uVar8;
    }
  }
  if ((uVar4 & 0x10) == 0) {
    uVar8 = *(undefined4 *)(iVar1 + 0x28);
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined4 *)(iVar1 + 0x34);
    uVar8 = 0;
  }
  *(undefined4 *)(iVar1 + 0x40) = uVar8;
  *(undefined4 *)(iVar1 + 0x44) = uVar7;
  if (((uVar4 >> 0xd & 1) == 0) && ((*(byte *)(param_1 + 8) & 1) != 0)) {
    iVar6 = *(int *)(param_1 + 0x58);
    uVar8 = FUN_101c16ea(*(undefined4 *)(iVar1 + 0x38),*(undefined4 *)(iVar6 + 0x10),0x40);
    *(undefined4 *)(iVar1 + 0x38) = uVar8;
    uVar8 = FUN_101c16ea(*(undefined4 *)(iVar1 + 0x3c),*(undefined4 *)(iVar6 + 0x14),0x40);
    *(undefined4 *)(iVar1 + 0x3c) = uVar8;
  }
  if (((uVar4 >> 0xb & 1) == 0) && (iVar6 = *(int *)(param_1 + 0x80), *(int *)(iVar6 + 0x18) != 0))
  {
    iVar9 = FUN_101c17ac();
    if (iVar9 == 0) {
      if (*(int *)(iVar1 + 0x48) == 0x6f75746c) {
        uVar10 = *(uint *)(iVar6 + 0x18);
        if ((uVar10 & 1) != 0) {
          FUN_101c17d8(iVar1 + 0x6c,iVar6);
          uVar10 = *(uint *)(iVar6 + 0x18);
        }
        if ((uVar10 & 2) != 0) {
          FUN_101c1818(iVar1 + 0x6c,*(undefined4 *)(iVar6 + 0x10),*(undefined4 *)(iVar6 + 0x14));
        }
      }
    }
    else {
      iVar5 = (**(code **)(*(int *)(iVar9 + 0xc) + 0x2c))(iVar9,iVar1,iVar6,iVar6 + 0x10);
    }
    FUN_101c1847(iVar1 + 0x40,iVar6);
  }
  *(undefined4 *)(iVar1 + 0xc) = param_2;
  *(uint *)(*(int *)(iVar1 + 0x9c) + 0x28) = uVar4;
  if ((((iVar5 == 0) && (iVar5 = 0, (uVar4 & 1) == 0)) && (*(int *)(iVar1 + 0x48) != 0x62697473)) &&
     (*(int *)(iVar1 + 0x48) != 0x636f6d70)) {
    uVar11 = uVar4 >> 0x10 & 0xf;
    uVar10 = uVar4 >> 0xb & 2;
    if (uVar11 != 0) {
      uVar10 = uVar11;
    }
    if ((uVar4 & 4) == 0) {
      FUN_101c0ad4(iVar1,uVar10,0);
    }
    else {
      iVar5 = FUN_101c1946(iVar1,uVar10);
    }
  }
  return iVar5;
}

