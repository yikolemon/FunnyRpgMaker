/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140177a7f */

int FUN_140177a7f(longlong param_1,uint param_2,uint param_3,undefined8 param_4,undefined4 *param_5)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x480) + (ulonglong)param_2 * 4);
  *param_5 = 0;
  if (param_3 <= *(uint *)(param_1 + 0x10)) {
    uVar6 = *(uint *)(*(longlong *)(param_1 + 0x468) + 8 + (ulonglong)(uint)(iVar7 << 2));
    uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    iVar7 = 5;
    do {
      if (*(uint *)(param_1 + 0x4d4) <= uVar6) {
        return 3;
      }
      if (*(uint *)(param_1 + 0x4d4) - uVar6 < param_3 * 4 + 0xc) {
        return 3;
      }
      iVar2 = FUN_14012d612(param_4,param_3 * 4 + uVar6 + 4 + *(int *)(param_1 + 0x4d0));
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = FUN_14012dc34(param_4,8);
      if (iVar2 != 0) {
        return iVar2;
      }
      uVar3 = FUN_14012dddf(param_4);
      uVar4 = FUN_14012dddf(param_4);
      FUN_14012dd58(param_4);
      uVar8 = uVar4 - uVar3;
      if (uVar8 == 0) {
        return 0x9d;
      }
      if (uVar4 < uVar3) {
        return 3;
      }
      if (uVar8 < 8) {
        return 3;
      }
      if (*(int *)(param_1 + 0x4d4) - uVar6 < uVar4) {
        return 3;
      }
      iVar2 = FUN_14012d612(param_4,uVar3 + uVar6 + *(int *)(param_1 + 0x4d0));
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = FUN_14012dc34(param_4,uVar8);
      if (iVar2 != 0) {
        return iVar2;
      }
      FUN_14012dd9f(param_4);
      FUN_14012dd9f(param_4);
      iVar2 = FUN_14012dddf(param_4);
      iVar5 = 7;
      if (iVar2 < 0x666c6970) {
        if (iVar2 != 0x64757065) goto LAB_140177c3f;
      }
      else {
        if (0x6a70671f < iVar2) {
          if (((iVar2 == 0x6a706720) || (iVar2 == 0x7267626c)) || (iVar2 == 0x74696666)) {
            iVar5 = 2;
          }
          goto LAB_140177c3f;
        }
        if (iVar2 != 0x666c6970) goto LAB_140177c3f;
      }
      iVar7 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar5 = 3;
LAB_140177c3f:
        FUN_14012dd58(param_4);
        return iVar5;
      }
      uVar1 = FUN_14012dd9f(param_4);
      param_3 = (uint)uVar1;
      FUN_14012dd58(param_4);
    } while (param_3 <= *(uint *)(param_1 + 0x10));
  }
  return 6;
}

