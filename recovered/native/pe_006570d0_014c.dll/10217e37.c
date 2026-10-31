/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10217e37 */

int __fastcall
FUN_10217e37(int param_1,int param_2,uint param_3,undefined4 param_4,undefined4 *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = *(int *)(*(int *)(param_1 + 0x32c) + param_2 * 4);
  *param_5 = 0;
  if (param_3 <= *(uint *)(param_1 + 0x10)) {
    uVar4 = *(uint *)(*(int *)(param_1 + 0x31c) + 8 + iVar7 * 4);
    uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    iVar7 = 5;
    do {
      if (*(uint *)(param_1 + 0x368) <= uVar4) {
        return 3;
      }
      if (*(uint *)(param_1 + 0x368) - uVar4 < param_3 * 4 + 0xc) {
        return 3;
      }
      iVar1 = FUN_101c461e(param_4,param_3 * 4 + uVar4 + 4 + *(int *)(param_1 + 0x364));
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = FUN_101c4b69(param_4,8);
      if (iVar1 != 0) {
        return iVar1;
      }
      uVar2 = FUN_101c4ce4(param_4);
      uVar3 = FUN_101c4ce4(param_4);
      FUN_101c4c66(param_4);
      uVar6 = uVar3 - uVar2;
      if (uVar6 == 0) {
        return 0x9d;
      }
      if (uVar3 < uVar2) {
        return 3;
      }
      if (uVar6 < 8) {
        return 3;
      }
      if (*(int *)(param_1 + 0x368) - uVar4 < uVar3) {
        return 3;
      }
      iVar1 = FUN_101c461e(param_4,uVar2 + uVar4 + *(int *)(param_1 + 0x364));
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = FUN_101c4b69(param_4,uVar6);
      if (iVar1 != 0) {
        return iVar1;
      }
      FUN_101c4ca6(param_4);
      FUN_101c4ca6(param_4);
      iVar5 = 7;
      iVar1 = FUN_101c4ce4(param_4);
      if (iVar1 < 0x666c6970) {
        if (iVar1 != 0x64757065) goto LAB_10218007;
      }
      else {
        if (0x6a70671f < iVar1) {
          if (((iVar1 == 0x6a706720) || (iVar1 == 0x7267626c)) || (iVar1 == 0x74696666)) {
            iVar5 = 2;
          }
          goto LAB_10218007;
        }
        if (iVar1 != 0x666c6970) goto LAB_10218007;
      }
      iVar7 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar5 = 3;
LAB_10218007:
        FUN_101c4c66(param_4);
        return iVar5;
      }
      param_3 = FUN_101c4ca6(param_4);
      param_3 = param_3 & 0xffff;
      FUN_101c4c66(param_4);
    } while (param_3 <= *(uint *)(param_1 + 0x10));
  }
  return 6;
}

