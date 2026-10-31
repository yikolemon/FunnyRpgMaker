/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020e8ac */

int FUN_18020e8ac(longlong param_1,longlong *param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  short *psVar12;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    iVar5 = 0x23;
  }
  else {
    iVar5 = 6;
    if (param_3 < *(uint *)(lVar1 + 0x10)) {
      lVar2 = *(longlong *)(lVar1 + 0x1b0);
      lVar8 = (ulonglong)param_3 * 0x10;
      uVar11 = (int)*(short *)(lVar2 + 2 + lVar8) - (int)*(short *)(lVar2 + lVar8);
      uVar4 = (int)*(short *)(lVar2 + 8 + lVar8) + (int)*(short *)(lVar2 + 6 + lVar8);
      if (((int)uVar4 < 0) || ((uint)*(ushort *)((longlong)param_2 + 0x1a) << 2 < uVar4)) {
        uVar4 = 0;
      }
      if (((int)uVar11 < 0) || ((uint)*(ushort *)(param_2 + 3) << 2 < uVar11)) {
        uVar11 = 0;
      }
      uVar3 = *(undefined8 *)(lVar1 + 0xa0);
      psVar12 = (short *)(lVar2 + lVar8);
      *(uint *)(param_1 + 0x68) = uVar4;
      *(uint *)(param_1 + 0x6c) = uVar11;
      *(undefined2 *)(param_1 + 0x80) = 1;
      *(undefined1 *)(param_1 + 0x82) = 1;
      switch(*(uint *)(lVar1 + 0x1d0) & 3) {
      case 0:
        uVar7 = uVar11 + 7 >> 3;
        break;
      case 1:
        uVar7 = uVar11 + 0xf >> 3 & 0xffffffe;
        break;
      case 2:
        uVar7 = uVar11 + 0x1f >> 3 & 0xffffffc;
        break;
      case 3:
        uVar7 = uVar11 + 0x3f >> 3 & 0xffffff8;
      }
      *(uint *)(param_1 + 0x70) = uVar7;
      *(undefined4 *)(param_1 + 0x60) = 0x62697473;
      *(int *)(param_1 + 0x90) = (int)*psVar12;
      *(int *)(param_1 + 0x94) = (int)psVar12[3];
      *(int *)(param_1 + 0x40) = (int)psVar12[2] << 6;
      *(int *)(param_1 + 0x38) = (int)*psVar12 << 6;
      *(int *)(param_1 + 0x3c) = (int)psVar12[3] << 6;
      *(uint *)(param_1 + 0x30) = uVar11 << 6;
      *(uint *)(param_1 + 0x34) = uVar4 << 6;
      FUN_1801cc280(param_1 + 0x30,(*(int *)(lVar1 + 0x154) + *(int *)(lVar1 + 0x150)) * 0x40);
      iVar9 = 0;
      iVar5 = 0;
      if (((param_4 >> 0x16 & 1) == 0) && (iVar5 = FUN_1801cab28(param_1), iVar5 == 0)) {
        iVar10 = *(int *)(param_1 + 0x68) * *(int *)(param_1 + 0x70);
        iVar5 = FUN_1801ce63e(uVar3,*(undefined4 *)(psVar12 + 6));
        if ((iVar5 == 0) &&
           (iVar5 = FUN_1801ce682(uVar3,*(undefined8 *)(param_1 + 0x78),iVar10), iVar5 == 0)) {
          uVar4 = *(uint *)(lVar1 + 0x1d0);
          if ((uVar4 & 8) == 0) {
            FUN_180210378(*(undefined8 *)(param_1 + 0x78),iVar10);
            uVar4 = *(uint *)(lVar1 + 0x1d0);
          }
          iVar5 = 0;
          if (((uVar4 >> 3 ^ uVar4 >> 2) & 1) != 0) {
            iVar6 = 1 << ((byte)uVar4 >> 4 & 3);
            iVar5 = iVar9;
            if (iVar6 == 4) {
              FUN_1802103d7(*(undefined8 *)(param_1 + 0x78),iVar10);
            }
            else if (iVar6 == 2) {
              FUN_1802103be(*(undefined8 *)(param_1 + 0x78),iVar10);
            }
          }
        }
      }
    }
  }
  return iVar5;
}

