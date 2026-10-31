/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0046f5b7 */

int __fastcall FUN_0046f5b7(int param_1,int param_2,uint param_3,int *param_4,undefined4 *param_5)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = *(int *)(*(int *)(param_1 + 0x32c) + param_2 * 4);
  *param_5 = 0;
  if (param_3 <= *(uint *)(param_1 + 0x10)) {
    uVar5 = *(uint *)(*(int *)(param_1 + 0x31c) + 8 + iVar7 * 4);
    uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    iVar7 = 5;
    do {
      if (*(uint *)(param_1 + 0x368) <= uVar5) {
        return 3;
      }
      if (*(uint *)(param_1 + 0x368) - uVar5 < param_3 * 4 + 0xc) {
        return 3;
      }
      iVar2 = FUN_00420696((int)param_4,param_3 * 4 + uVar5 + 4 + *(int *)(param_1 + 0x364));
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = FUN_00420be1(param_4,8);
      if (iVar2 != 0) {
        return iVar2;
      }
      uVar3 = FUN_00420d5c((int)param_4);
      uVar4 = FUN_00420d5c((int)param_4);
      FUN_00420cde(param_4);
      uVar6 = uVar4 - uVar3;
      if (uVar6 == 0) {
        return 0x9d;
      }
      if (uVar4 < uVar3) {
        return 3;
      }
      if (uVar6 < 8) {
        return 3;
      }
      if (*(int *)(param_1 + 0x368) - uVar5 < uVar4) {
        return 3;
      }
      iVar2 = FUN_00420696((int)param_4,uVar3 + uVar5 + *(int *)(param_1 + 0x364));
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = FUN_00420be1(param_4,uVar6);
      if (iVar2 != 0) {
        return iVar2;
      }
      FUN_00420d1e((int)param_4);
      FUN_00420d1e((int)param_4);
      iVar2 = 7;
      uVar3 = FUN_00420d5c((int)param_4);
      if ((int)uVar3 < 0x666c6970) {
        if (uVar3 != 0x64757065) goto LAB_0046f787;
      }
      else {
        if (0x6a70671f < (int)uVar3) {
          if (((uVar3 == 0x6a706720) || (uVar3 == 0x7267626c)) || (uVar3 == 0x74696666)) {
            iVar2 = 2;
          }
          goto LAB_0046f787;
        }
        if (uVar3 != 0x666c6970) goto LAB_0046f787;
      }
      iVar7 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar2 = 3;
LAB_0046f787:
        FUN_00420cde(param_4);
        return iVar2;
      }
      uVar1 = FUN_00420d1e((int)param_4);
      param_3 = (uint)uVar1;
      FUN_00420cde(param_4);
    } while (param_3 <= *(uint *)(param_1 + 0x10));
  }
  return 6;
}

