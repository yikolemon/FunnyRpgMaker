/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14032e019 */

undefined4 FUN_14032e019(undefined8 param_1,undefined8 param_2,ulonglong param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  lVar2 = DAT_14062a630;
  if ((1 < param_4) && (*(int *)(DAT_14062a630 + 0x244c) != -1)) goto LAB_14032e174;
  FUN_14030fc6b(DAT_14062a630 + 0x2450,param_1,0x21);
  uVar6 = *(uint *)(lVar2 + 0x24c4);
  if ((int)uVar6 < 0) {
    uVar6 = 0;
    uVar3 = FUN_14030fcc8(0);
    if (*(longlong *)(lVar2 + 0x24c8) != 0) {
      FUN_1404b97c0(uVar3,*(longlong *)(lVar2 + 0x24c8),(longlong)*(int *)(lVar2 + 0x24c0));
      FUN_14030fda4(*(undefined8 *)(lVar2 + 0x24c8));
    }
    *(undefined8 *)(lVar2 + 0x24c8) = uVar3;
    *(undefined4 *)(lVar2 + 0x24c4) = 0;
  }
  *(undefined4 *)(lVar2 + 0x24c0) = 0;
  uVar5 = (uint)param_3;
  if (param_3 < 0x11) {
    if (param_3 != 0) {
      lVar4 = lVar2 + 0x24d0;
      *(undefined8 *)(lVar2 + 0x24d0) = 0;
      *(undefined8 *)(lVar2 + 0x24d8) = 0;
      *(longlong *)(lVar2 + 0x2438) = lVar4;
      goto LAB_14032e168;
    }
    *(undefined8 *)(lVar2 + 0x2438) = 0;
  }
  else {
    if ((int)uVar6 < (int)uVar5) {
      uVar7 = 8;
      if (uVar6 != 0) {
        uVar7 = (uVar6 >> 1) + uVar6;
      }
      uVar8 = (ulonglong)uVar7;
      if (uVar7 <= uVar5) {
        uVar8 = param_3 & 0xffffffff;
      }
      lVar4 = FUN_14030fcc8(uVar8);
      if (*(longlong *)(lVar2 + 0x24c8) != 0) {
        FUN_1404b97c0(lVar4,*(longlong *)(lVar2 + 0x24c8),(longlong)*(int *)(lVar2 + 0x24c0));
        FUN_14030fda4(*(undefined8 *)(lVar2 + 0x24c8));
      }
      *(longlong *)(lVar2 + 0x24c8) = lVar4;
      *(int *)(lVar2 + 0x24c4) = (int)uVar8;
    }
    else {
      lVar4 = *(longlong *)(lVar2 + 0x24c8);
    }
    *(uint *)(lVar2 + 0x24c0) = uVar5;
    *(longlong *)(lVar2 + 0x2438) = lVar4;
    param_3 = (ulonglong)(int)uVar5;
LAB_14032e168:
    FUN_1404b97c0(lVar4,param_2,param_3);
  }
  *(uint *)(lVar2 + 0x2440) = uVar5;
LAB_14032e174:
  iVar1 = *(int *)(lVar2 + 4);
  *(int *)(lVar2 + 0x244c) = iVar1;
  return CONCAT31((int3)((uint)(iVar1 + -1) >> 8),
                  *(int *)(lVar2 + 0x24b4) == iVar1 + -1 || *(int *)(lVar2 + 0x24b4) == iVar1);
}

