/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400759d3 */

int FUN_1400759d3(longlong param_1,uint param_2,uint param_3,longlong *param_4,undefined4 *param_5)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
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
      uVar5 = FUN_140020a41((longlong)param_4,param_3 * 4 + uVar6 + 4 + *(int *)(param_1 + 0x4d0));
      if ((int)uVar5 != 0) {
        return (int)uVar5;
      }
      iVar2 = FUN_140021063(param_4,8);
      if (iVar2 != 0) {
        return iVar2;
      }
      uVar3 = FUN_14002120e((longlong)param_4);
      uVar4 = FUN_14002120e((longlong)param_4);
      FUN_140021187(param_4);
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
      uVar5 = FUN_140020a41((longlong)param_4,uVar3 + uVar6 + *(int *)(param_1 + 0x4d0));
      if ((int)uVar5 != 0) {
        return (int)uVar5;
      }
      iVar2 = FUN_140021063(param_4,uVar8);
      if (iVar2 != 0) {
        return iVar2;
      }
      FUN_1400211ce((longlong)param_4);
      FUN_1400211ce((longlong)param_4);
      uVar3 = FUN_14002120e((longlong)param_4);
      iVar2 = 7;
      if ((int)uVar3 < 0x666c6970) {
        if (uVar3 != 0x64757065) goto LAB_140075b93;
      }
      else {
        if (0x6a70671f < (int)uVar3) {
          if (((uVar3 == 0x6a706720) || (uVar3 == 0x7267626c)) || (uVar3 == 0x74696666)) {
            iVar2 = 2;
          }
          goto LAB_140075b93;
        }
        if (uVar3 != 0x666c6970) goto LAB_140075b93;
      }
      iVar7 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar2 = 3;
LAB_140075b93:
        FUN_140021187(param_4);
        return iVar2;
      }
      uVar1 = FUN_1400211ce((longlong)param_4);
      param_3 = (uint)uVar1;
      FUN_140021187(param_4);
    } while (param_3 <= *(uint *)(param_1 + 0x10));
  }
  return 6;
}

