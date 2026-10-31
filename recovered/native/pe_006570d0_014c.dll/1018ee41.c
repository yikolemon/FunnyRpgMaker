/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018ee41 */

void FUN_1018ee41(int param_1,uint param_2,uint param_3,ushort param_4,uint param_5)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  param_2 = param_2 & 0xffff;
  iVar6 = param_4 + param_2;
  iVar7 = 0;
  iVar5 = 0;
  if (*(ushort *)(param_1 + 0x38) != 0) {
    iVar5 = (uint)*(ushort *)(param_1 + 0x34) + (uint)*(ushort *)(param_1 + 0x38);
  }
  sVar1 = FUN_100fbc6a(iVar5,iVar6);
  iVar5 = (param_3 & 0xffff) + (param_5 & 0xffff);
  if (*(ushort *)(param_1 + 0x3a) != 0) {
    iVar7 = (uint)*(ushort *)(param_1 + 0x36) + (uint)*(ushort *)(param_1 + 0x3a);
  }
  sVar2 = FUN_100fbc6a(iVar7,iVar5);
  uVar3 = FUN_1018f00e(*(undefined2 *)(param_1 + 0x34),param_2);
  *(undefined2 *)(param_1 + 0x34) = uVar3;
  sVar4 = FUN_1018f00e(*(undefined2 *)(param_1 + 0x36),param_3 & 0xffff);
  *(short *)(param_1 + 0x36) = sVar4;
  *(short *)(param_1 + 0x38) = sVar1 - *(short *)(param_1 + 0x34);
  *(short *)(param_1 + 0x3a) = sVar2 - sVar4;
  uVar3 = FUN_1018f00e(*(undefined2 *)(param_1 + 0x2c),param_2);
  *(undefined2 *)(param_1 + 0x2c) = uVar3;
  uVar3 = FUN_1018f00e(*(undefined2 *)(param_1 + 0x2e),param_3 & 0xffff);
  *(undefined2 *)(param_1 + 0x2e) = uVar3;
  sVar1 = FUN_100fbc6a((uint)*(ushort *)(param_1 + 0x30) + (uint)*(ushort *)(param_1 + 0x2c),iVar6);
  *(short *)(param_1 + 0x30) = sVar1 - *(short *)(param_1 + 0x2c);
  sVar1 = FUN_100fbc6a((uint)*(ushort *)(param_1 + 0x32) + (uint)*(ushort *)(param_1 + 0x2e),iVar5);
  *(short *)(param_1 + 0x32) = sVar1 - *(short *)(param_1 + 0x2e);
  if ((*(int *)(param_1 + 4) == 3) || (*(int *)(param_1 + 4) == 0)) {
    *(undefined4 *)(param_1 + 4) = 3;
    iVar6 = *(int *)(param_1 + 0x3c);
    if (iVar6 == *(int *)(param_1 + 0x40)) {
      if (iVar6 == 0) {
        iVar5 = 8;
      }
      else {
        iVar5 = iVar6 / 2 + iVar6;
      }
      iVar7 = iVar6 + 1;
      if (iVar6 + 1 < iVar5) {
        iVar7 = iVar5;
      }
      iVar5 = FUN_100fa1fa(iVar7 * 8);
      if (*(int *)(param_1 + 0x44) != 0) {
        FUN_1025b2d0(iVar5,*(int *)(param_1 + 0x44),*(int *)(param_1 + 0x3c) << 3);
        FUN_100fa2cb(*(undefined4 *)(param_1 + 0x44));
      }
      *(int *)(param_1 + 0x44) = iVar5;
      *(int *)(param_1 + 0x40) = iVar7;
      iVar6 = *(int *)(param_1 + 0x3c);
    }
    else {
      iVar5 = *(int *)(param_1 + 0x44);
    }
    *(uint *)(iVar5 + 4 + iVar6 * 8) = param_5 << 0x10 | (uint)param_4;
    *(uint *)(iVar5 + iVar6 * 8) = param_3 * 0x10000 + param_2;
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  }
  return;
}

