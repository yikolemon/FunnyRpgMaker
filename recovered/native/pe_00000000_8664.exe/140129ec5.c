/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140129ec5 */

ulonglong FUN_140129ec5(longlong param_1,undefined4 param_2,uint param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  bool bVar14;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (*(longlong *)(param_1 + 0x80) == 0) {
    return 0x23;
  }
  lVar1 = *(longlong *)(param_1 + 0x78);
  if (lVar1 == 0) {
    return 0x23;
  }
  FUN_14012a29f(lVar1);
  plVar2 = *(longlong **)(param_1 + 0x90);
  plVar3 = *(longlong **)(plVar2[1] + 0x130);
  if ((*(short *)(*(longlong *)(param_1 + 0x80) + 0x18) == 0) ||
     (*(short *)(*(longlong *)(param_1 + 0x80) + 0x1a) == 0)) {
    param_3 = param_3 | 1;
  }
  uVar4 = param_3 | 0x801;
  if ((param_3 >> 10 & 1) == 0) {
    uVar4 = param_3;
  }
  uVar8 = uVar4 & 0xfffffff1 | 10;
  if ((uVar4 & 1) == 0) {
    uVar8 = uVar4;
  }
  uVar4 = uVar8 & 0xfffffffb;
  if ((uVar8 >> 0x16 & 1) == 0) {
    uVar4 = uVar8;
  }
  if ((((plVar3 == (longlong *)0x0) || ((uVar4 & 0x8002) != 0)) ||
      ((*(uint *)(param_1 + 8) & 0x2001) != 1)) ||
     (((uVar4 >> 0xb & 1) == 0 &&
      (((*(int **)(param_1 + 0xd0))[2] == 0) == (**(int **)(param_1 + 0xd0) == 0))))) {
LAB_14012a0ee:
    uVar8 = (**(code **)(plVar2[3] + 0x78))(lVar1,*(undefined8 *)(param_1 + 0x80),param_2,uVar4);
    if (uVar8 != 0) {
LAB_14012a10a:
      return (ulonglong)uVar8;
    }
    uVar13 = 0;
    if (*(int *)(lVar1 + 0x60) == 0x6f75746c) {
      uVar8 = FUN_14012a363();
      if (uVar8 != 0) goto LAB_14012a10a;
      uVar13 = 0;
      if ((uVar4 & 2) == 0) {
        FUN_14012a3bf(lVar1,CONCAT31((int3)(uVar4 >> 8),(byte)uVar4 >> 4) & 0xffffff01);
      }
    }
  }
  else {
    if (((uVar4 & 0x20) == 0) && ((*(byte *)(*plVar2 + 1) & 4) != 0)) {
      uVar10 = FUN_140128993(param_1);
      lVar11 = FUN_1401908c0(uVar10,"Type 1");
      if (lVar11 == 0) {
        bVar14 = false;
      }
      else {
        bVar14 = (int)plVar2[7] == 1;
      }
      if ((((uVar4 & 0xf0000) != 0x10000) || ((*(byte *)(*plVar2 + 1) >> 3 & 1) != 0 || bVar14)) &&
         (((*(byte *)(param_1 + 8) & 8) == 0 ||
          (((*(int *)(param_1 + 0x438) == 0 || (*(int *)(param_1 + 0x3b0) != 0)) ||
           (7 < *(uint *)(param_1 + 0x3c0))))))) goto LAB_14012a0ee;
    }
    if (((((uVar4 >> 0x18 & 1) == 0) && ((*(byte *)(param_1 + 10) & 1) != 0)) &&
        ((iVar5 = (**(code **)(plVar2[3] + 0x78))
                            (lVar1,*(undefined8 *)(param_1 + 0x80),param_2,uVar4 | 0x800000),
         iVar5 == 0 && (*(int *)(lVar1 + 0x60) == 0x53564720)))) ||
       (((((*(byte *)(param_1 + 8) & 2) != 0 && ((uVar4 & 8) == 0)) &&
         (iVar5 = (**(code **)(plVar2[3] + 0x78))
                            (lVar1,*(undefined8 *)(param_1 + 0x80),param_2,uVar4 | 0x4000),
         iVar5 == 0)) && (*(int *)(lVar1 + 0x60) == 0x62697473)))) {
      uVar13 = 0;
    }
    else {
      lVar11 = *(longlong *)(param_1 + 0xd0);
      uVar7 = *(undefined4 *)(lVar11 + 0x18);
      *(undefined4 *)(lVar11 + 0x18) = 0;
      uVar13 = (**(code **)(*(longlong *)(*plVar3 + 0x18) + 0x18))
                         (plVar3,lVar1,*(undefined8 *)(param_1 + 0x80),param_2,uVar4);
      *(undefined4 *)(lVar11 + 0x18) = uVar7;
      uVar13 = uVar13 & 0xffffffff;
    }
  }
  if ((uVar4 & 0x10) == 0) {
    uVar7 = *(undefined4 *)(lVar1 + 0x40);
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(lVar1 + 0x4c);
    uVar7 = 0;
  }
  *(undefined4 *)(lVar1 + 0x58) = uVar7;
  *(undefined4 *)(lVar1 + 0x5c) = uVar6;
  if (((uVar4 >> 0xd & 1) == 0) && ((*(byte *)(param_1 + 8) & 1) != 0)) {
    lVar11 = *(longlong *)(param_1 + 0x80);
    uVar7 = FUN_14012a478(*(undefined4 *)(lVar1 + 0x50),*(undefined4 *)(lVar11 + 0x1c),0x40);
    *(undefined4 *)(lVar1 + 0x50) = uVar7;
    uVar7 = FUN_14012a478(*(undefined4 *)(lVar1 + 0x54),*(undefined4 *)(lVar11 + 0x20),0x40);
    *(undefined4 *)(lVar1 + 0x54) = uVar7;
  }
  if (((uVar4 >> 0xb & 1) == 0) &&
     (lVar11 = *(longlong *)(param_1 + 0xd0), *(int *)(lVar11 + 0x18) != 0)) {
    lVar12 = FUN_14012a4f7(lVar1);
    if (lVar12 == 0) {
      if (*(int *)(lVar1 + 0x60) == 0x6f75746c) {
        uVar8 = *(uint *)(lVar11 + 0x18);
        if ((uVar8 & 1) != 0) {
          FUN_14012a529(lVar1 + 0x98,lVar11);
          uVar8 = *(uint *)(lVar11 + 0x18);
        }
        if ((uVar8 & 2) != 0) {
          FUN_14012a574(lVar1 + 0x98,*(undefined4 *)(lVar11 + 0x10),*(undefined4 *)(lVar11 + 0x14));
        }
      }
    }
    else {
      uVar8 = (**(code **)(*(longlong *)(lVar12 + 0x18) + 0x48))(lVar12,lVar1,lVar11,lVar11 + 0x10);
      uVar13 = (ulonglong)uVar8;
    }
    FUN_14012a59b(lVar1 + 0x58,lVar11);
  }
  *(undefined4 *)(lVar1 + 0x18) = param_2;
  *(uint *)(*(longlong *)(lVar1 + 0xf0) + 0x30) = uVar4;
  if (((((int)uVar13 == 0) && (uVar13 = 0, (uVar4 & 1) == 0)) &&
      (*(int *)(lVar1 + 0x60) != 0x62697473)) && (*(int *)(lVar1 + 0x60) != 0x636f6d70)) {
    uVar9 = uVar4 >> 0x10 & 0xf;
    uVar8 = uVar4 >> 0xb & 2;
    if (uVar9 != 0) {
      uVar8 = uVar9;
    }
    if ((uVar4 & 4) != 0) {
      uVar13 = FUN_14012a62b(lVar1,uVar8);
      return uVar13;
    }
    uVar13 = 0;
    FUN_1401296e1(lVar1,uVar8,0);
  }
  return uVar13;
}

