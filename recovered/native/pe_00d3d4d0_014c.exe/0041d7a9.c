/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041d7a9 */

int __cdecl FUN_0041d7a9(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  undefined1 (*pauVar8) [16];
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (*(int *)(param_1 + 0x58) == 0) {
    return 0x23;
  }
  piVar1 = *(int **)(param_1 + 0x54);
  if (piVar1 == (int *)0x0) {
    return 0x23;
  }
  FUN_0041db34((int)piVar1);
  piVar2 = *(int **)(param_1 + 0x60);
  piVar3 = *(int **)(piVar2[1] + 0xa0);
  if ((*(short *)(*(int *)(param_1 + 0x58) + 0xc) == 0) ||
     (*(short *)(*(int *)(param_1 + 0x58) + 0xe) == 0)) {
    param_3 = param_3 | 1;
  }
  uVar6 = param_3 | 0x801;
  if ((param_3 >> 10 & 1) == 0) {
    uVar6 = param_3;
  }
  uVar11 = uVar6 & 0xfffffff1 | 10;
  if ((uVar6 & 1) == 0) {
    uVar11 = uVar6;
  }
  uVar6 = uVar11 & 0xfffffffb;
  if ((uVar11 >> 0x16 & 1) == 0) {
    uVar6 = uVar11;
  }
  if ((((piVar3 == (int *)0x0) || ((uVar6 & 0x8002) != 0)) ||
      ((*(uint *)(param_1 + 8) & 0x2001) != 1)) ||
     (((uVar6 >> 0xb & 1) == 0 &&
      (((*(int **)(param_1 + 0x80))[2] == 0) == (**(int **)(param_1 + 0x80) == 0))))) {
LAB_0041d9aa:
    iVar7 = (**(code **)(piVar2[3] + 0x48))(piVar1,*(undefined4 *)(param_1 + 0x58),param_2,uVar6);
    if (iVar7 != 0) {
      return iVar7;
    }
    iVar7 = 0;
    if (piVar1[0x12] == 0x6f75746c) {
      iVar10 = FUN_0041dbcc((ushort *)(piVar1 + 0x1b));
      if (iVar10 != 0) {
        return iVar10;
      }
      if ((uVar6 & 2) == 0) {
        FUN_0041dc21((int)piVar1,(uint)((byte)(uVar6 >> 4) & 1));
      }
    }
  }
  else {
    if (((uVar6 & 0x20) == 0) && ((*(byte *)(*piVar2 + 1) & 4) != 0)) {
      pauVar8 = (undefined1 (*) [16])FUN_0041c491(param_1);
      pauVar8 = FUN_00488210(pauVar8,(undefined1 (*) [16])0x5048e4);
      if (pauVar8 == (undefined1 (*) [16])0x0) {
        bVar13 = false;
      }
      else {
        bVar13 = piVar2[7] == 1;
      }
      if ((((uVar6 & 0xf0000) != 0x10000) || ((*(byte *)(*piVar2 + 1) >> 3 & 1) != 0 || bVar13)) &&
         (((*(byte *)(param_1 + 8) & 8) == 0 ||
          (((*(int *)(param_1 + 0x300) == 0 || (*(int *)(param_1 + 0x2b0) != 0)) ||
           (7 < *(uint *)(param_1 + 0x2b8))))))) goto LAB_0041d9aa;
    }
    if (((((uVar6 >> 0x18 & 1) == 0) && ((*(byte *)(param_1 + 10) & 1) != 0)) &&
        ((iVar7 = (**(code **)(piVar2[3] + 0x48))
                            (piVar1,*(undefined4 *)(param_1 + 0x58),param_2,uVar6 | 0x800000),
         iVar7 == 0 && (piVar1[0x12] == 0x53564720)))) ||
       (((((*(byte *)(param_1 + 8) & 2) != 0 && ((uVar6 & 8) == 0)) &&
         (iVar7 = (**(code **)(piVar2[3] + 0x48))
                            (piVar1,*(undefined4 *)(param_1 + 0x58),param_2,uVar6 | 0x4000),
         iVar7 == 0)) && (piVar1[0x12] == 0x62697473)))) {
      iVar7 = 0;
    }
    else {
      iVar10 = *(int *)(param_1 + 0x80);
      uVar4 = *(undefined4 *)(iVar10 + 0x18);
      *(undefined4 *)(iVar10 + 0x18) = 0;
      iVar7 = (**(code **)(*(int *)(*piVar3 + 0x14) + 0xc))
                        (piVar3,piVar1,*(undefined4 *)(param_1 + 0x58),param_2,uVar6);
      *(undefined4 *)(iVar10 + 0x18) = uVar4;
    }
  }
  if ((uVar6 & 0x10) == 0) {
    iVar10 = piVar1[10];
    iVar9 = 0;
  }
  else {
    iVar9 = piVar1[0xd];
    iVar10 = 0;
  }
  piVar1[0x10] = iVar10;
  piVar1[0x11] = iVar9;
  if (((uVar6 >> 0xd & 1) == 0) && ((*(byte *)(param_1 + 8) & 1) != 0)) {
    iVar10 = *(int *)(param_1 + 0x58);
    iVar9 = FUN_0041dcda(piVar1[0xe],*(uint *)(iVar10 + 0x10),0x40);
    piVar1[0xe] = iVar9;
    iVar10 = FUN_0041dcda(piVar1[0xf],*(uint *)(iVar10 + 0x14),0x40);
    piVar1[0xf] = iVar10;
  }
  if (((uVar6 >> 0xb & 1) == 0) && (puVar5 = *(uint **)(param_1 + 0x80), puVar5[6] != 0)) {
    iVar10 = FUN_0041dd9c((int)piVar1);
    if (iVar10 == 0) {
      if (piVar1[0x12] == 0x6f75746c) {
        uVar11 = puVar5[6];
        if ((uVar11 & 1) != 0) {
          FUN_0041ddc8((int)(piVar1 + 0x1b),puVar5);
          uVar11 = puVar5[6];
        }
        if ((uVar11 & 2) != 0) {
          FUN_0041de08((int)(piVar1 + 0x1b),puVar5[4],puVar5[5]);
        }
      }
    }
    else {
      iVar7 = (**(code **)(*(int *)(iVar10 + 0xc) + 0x2c))(iVar10,piVar1,puVar5,puVar5 + 4);
    }
    FUN_0041de37((uint *)(piVar1 + 0x10),puVar5);
  }
  piVar1[3] = param_2;
  *(uint *)(piVar1[0x27] + 0x28) = uVar6;
  if ((((iVar7 == 0) && (iVar7 = 0, (uVar6 & 1) == 0)) && (piVar1[0x12] != 0x62697473)) &&
     (piVar1[0x12] != 0x636f6d70)) {
    uVar12 = uVar6 >> 0x10 & 0xf;
    uVar11 = uVar6 >> 0xb & 2;
    if (uVar12 != 0) {
      uVar11 = uVar12;
    }
    if ((uVar6 & 4) == 0) {
      FUN_0041d0c4(piVar1,uVar11,(uint *)0x0);
    }
    else {
      iVar7 = FUN_0041df36((int)piVar1,uVar11);
    }
  }
  return iVar7;
}

