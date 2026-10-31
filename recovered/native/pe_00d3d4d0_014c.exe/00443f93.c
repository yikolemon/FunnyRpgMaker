/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00443f93 */

undefined4 __fastcall FUN_00443f93(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  byte *pbVar7;
  
  iVar3 = *param_1;
  *(undefined2 *)(param_1 + 0x17) = 0;
  uVar5 = 0x97;
  if (((short)param_1[3] != 0) && (*(short *)((int)param_1 + 0xe) != 0)) {
    param_1[0xf] = param_1[6];
    param_1[0x10] = param_1[7];
    param_1[0x11] = param_1[8];
    param_1[0x12] = param_1[9];
    param_1[0xc] = param_1[3];
    param_1[0xd] = param_1[4];
    param_1[0xe] = param_1[5];
    param_1[0xf] = param_1[6];
    FUN_0043fe02(param_1);
    if ((*(byte *)(iVar3 + 0xb0) & 8) != 0) {
      iVar6 = FUN_0041eaa0((uint)*(ushort *)(param_1 + 0xc) << 6,(uint)*(ushort *)(iVar3 + 0x44));
      param_1[0xd] = iVar6;
      iVar6 = FUN_0041eaa0((uint)*(ushort *)((int)param_1 + 0x32) << 6,
                           (uint)*(ushort *)(iVar3 + 0x44));
      param_1[0xe] = iVar6;
      lVar4 = (longlong)(int)*(short *)(iVar3 + 0x4c) * (longlong)param_1[0xd];
      iVar6 = (int)(lVar4 >> 0x3f);
      lVar4 = lVar4 + CONCAT44(iVar6,iVar6) + 0x8000;
      param_1[0x12] =
           ((int)((ulonglong)lVar4 >> 0x20) << 0x10 | (uint)lVar4 >> 0x10) + 0x20 & 0xffffffc0;
    }
    uVar1 = *(ushort *)(param_1 + 0xc);
    uVar2 = *(ushort *)((int)param_1 + 0x32);
    if (uVar1 < uVar2) {
      param_1[0x16] = param_1[0xe];
      *(ushort *)(param_1 + 0x17) = uVar2;
      iVar6 = FUN_0041eaa0((uint)uVar1,(uint)uVar2);
      param_1[0x13] = iVar6;
      iVar6 = 0x10000;
    }
    else {
      param_1[0x16] = param_1[0xd];
      *(ushort *)(param_1 + 0x17) = uVar1;
      param_1[0x13] = 0x10000;
      iVar6 = FUN_0041eaa0((uint)uVar2,(uint)uVar1);
    }
    param_1[0x14] = iVar6;
    pbVar7 = FUN_004440a6(iVar3,(uint)*(ushort *)(param_1 + 0xc));
    param_1[0x18] = (int)pbVar7;
    param_1[0xb] = (int)(param_1 + 0xc);
    param_1[0x37] = -1;
    uVar5 = 0;
  }
  return uVar5;
}

