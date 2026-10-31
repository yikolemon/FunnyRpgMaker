/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001d8c9 */

int FUN_14001d8c9(longlong param_1,undefined4 param_2,uint param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined1 (*pauVar10) [16];
  undefined8 uVar11;
  longlong lVar12;
  uint uVar13;
  undefined4 uVar14;
  bool bVar15;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (*(longlong *)(param_1 + 0x80) == 0) {
    return 0x23;
  }
  plVar1 = *(longlong **)(param_1 + 0x78);
  if (plVar1 == (longlong *)0x0) {
    return 0x23;
  }
  FUN_14001dca3((longlong)plVar1);
  plVar2 = *(longlong **)(param_1 + 0x90);
  plVar3 = *(longlong **)(plVar2[1] + 0x130);
  if ((*(short *)(*(longlong *)(param_1 + 0x80) + 0x18) == 0) ||
     (*(short *)(*(longlong *)(param_1 + 0x80) + 0x1a) == 0)) {
    param_3 = param_3 | 1;
  }
  uVar5 = param_3 | 0x801;
  if ((param_3 >> 10 & 1) == 0) {
    uVar5 = param_3;
  }
  uVar13 = uVar5 & 0xfffffff1 | 10;
  if ((uVar5 & 1) == 0) {
    uVar13 = uVar5;
  }
  uVar5 = uVar13 & 0xfffffffb;
  if ((uVar13 >> 0x16 & 1) == 0) {
    uVar5 = uVar13;
  }
  if ((((plVar3 == (longlong *)0x0) || ((uVar5 & 0x8002) != 0)) ||
      ((*(uint *)(param_1 + 8) & 0x2001) != 1)) ||
     (((uVar5 >> 0xb & 1) == 0 &&
      (((*(int **)(param_1 + 0xd0))[2] == 0) == (**(int **)(param_1 + 0xd0) == 0))))) {
LAB_14001daf2:
    iVar6 = (**(code **)(plVar2[3] + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x80),param_2,uVar5);
    if (iVar6 != 0) {
      return iVar6;
    }
    iVar6 = 0;
    if ((int)plVar1[0xc] == 0x6f75746c) {
      uVar11 = FUN_14001dd67((ushort *)(plVar1 + 0x13));
      if ((int)uVar11 != 0) {
        return (int)uVar11;
      }
      iVar6 = 0;
      if ((uVar5 & 2) == 0) {
        FUN_14001ddc3((longlong)plVar1,(byte)(uVar5 >> 4) & 1);
      }
    }
  }
  else {
    if (((uVar5 & 0x20) == 0) && ((*(byte *)(*plVar2 + 1) & 4) != 0)) {
      pauVar10 = (undefined1 (*) [16])FUN_14001c397(param_1);
      pauVar10 = FUN_14008de20(pauVar10,(undefined1 (*) [16])0x14011bd85);
      if (pauVar10 == (undefined1 (*) [16])0x0) {
        bVar15 = false;
      }
      else {
        bVar15 = (int)plVar2[7] == 1;
      }
      if ((((uVar5 & 0xf0000) != 0x10000) || ((*(byte *)(*plVar2 + 1) >> 3 & 1) != 0 || bVar15)) &&
         (((*(byte *)(param_1 + 8) & 8) == 0 ||
          (((*(int *)(param_1 + 0x438) == 0 || (*(int *)(param_1 + 0x3b0) != 0)) ||
           (7 < *(uint *)(param_1 + 0x3c0))))))) goto LAB_14001daf2;
    }
    if (((((uVar5 >> 0x18 & 1) == 0) && ((*(byte *)(param_1 + 10) & 1) != 0)) &&
        ((iVar6 = (**(code **)(plVar2[3] + 0x78))
                            (plVar1,*(undefined8 *)(param_1 + 0x80),param_2,uVar5 | 0x800000),
         iVar6 == 0 && ((int)plVar1[0xc] == 0x53564720)))) ||
       (((((*(byte *)(param_1 + 8) & 2) != 0 && ((uVar5 & 8) == 0)) &&
         (iVar6 = (**(code **)(plVar2[3] + 0x78))
                            (plVar1,*(undefined8 *)(param_1 + 0x80),param_2,uVar5 | 0x4000),
         iVar6 == 0)) && ((int)plVar1[0xc] == 0x62697473)))) {
      iVar6 = 0;
    }
    else {
      lVar12 = *(longlong *)(param_1 + 0xd0);
      uVar14 = *(undefined4 *)(lVar12 + 0x18);
      *(undefined4 *)(lVar12 + 0x18) = 0;
      iVar6 = (**(code **)(*(longlong *)(*plVar3 + 0x18) + 0x18))
                        (plVar3,plVar1,*(undefined8 *)(param_1 + 0x80),param_2,uVar5);
      *(undefined4 *)(lVar12 + 0x18) = uVar14;
    }
  }
  if ((uVar5 & 0x10) == 0) {
    uVar14 = (undefined4)plVar1[8];
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined4 *)((longlong)plVar1 + 0x4c);
    uVar14 = 0;
  }
  *(undefined4 *)(plVar1 + 0xb) = uVar14;
  *(undefined4 *)((longlong)plVar1 + 0x5c) = uVar7;
  if (((uVar5 >> 0xd & 1) == 0) && ((*(byte *)(param_1 + 8) & 1) != 0)) {
    lVar12 = *(longlong *)(param_1 + 0x80);
    iVar8 = FUN_14001de7c(*(uint *)(plVar1 + 10),*(uint *)(lVar12 + 0x1c),0x40);
    *(int *)(plVar1 + 10) = iVar8;
    iVar8 = FUN_14001de7c(*(uint *)((longlong)plVar1 + 0x54),*(uint *)(lVar12 + 0x20),0x40);
    *(int *)((longlong)plVar1 + 0x54) = iVar8;
  }
  if (((uVar5 >> 0xb & 1) == 0) && (piVar4 = *(int **)(param_1 + 0xd0), piVar4[6] != 0)) {
    lVar12 = FUN_14001defb((longlong)plVar1);
    if (lVar12 == 0) {
      if ((int)plVar1[0xc] == 0x6f75746c) {
        uVar13 = piVar4[6];
        if ((uVar13 & 1) != 0) {
          FUN_14001df2d((longlong)(plVar1 + 0x13),piVar4);
          uVar13 = piVar4[6];
        }
        if ((uVar13 & 2) != 0) {
          FUN_14001df78((longlong)(plVar1 + 0x13),piVar4[4],piVar4[5]);
        }
      }
    }
    else {
      iVar6 = (**(code **)(*(longlong *)(lVar12 + 0x18) + 0x48))(lVar12,plVar1,piVar4,piVar4 + 4);
    }
    FUN_14001df9f((int *)(plVar1 + 0xb),piVar4);
  }
  *(undefined4 *)(plVar1 + 3) = param_2;
  *(uint *)(plVar1[0x1e] + 0x30) = uVar5;
  if ((((iVar6 == 0) && (iVar6 = 0, (uVar5 & 1) == 0)) && ((int)plVar1[0xc] != 0x62697473)) &&
     ((int)plVar1[0xc] != 0x636f6d70)) {
    uVar9 = uVar5 >> 0x10 & 0xf;
    uVar13 = uVar5 >> 0xb & 2;
    if (uVar9 != 0) {
      uVar13 = uVar9;
    }
    if ((uVar5 & 4) != 0) {
      iVar6 = FUN_14001e02f((longlong)plVar1,uVar13);
      return iVar6;
    }
    iVar6 = 0;
    FUN_14001d0e5(plVar1,uVar13,(uint *)0x0);
  }
  return iVar6;
}

