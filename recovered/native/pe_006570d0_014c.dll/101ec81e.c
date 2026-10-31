/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ec81e */

undefined4 __fastcall FUN_101ec81e(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *param_1;
  *(undefined2 *)(param_1 + 0x17) = 0;
  uVar4 = 0x97;
  if (((short)param_1[3] != 0) && (*(short *)((int)param_1 + 0xe) != 0)) {
    param_1[0xf] = param_1[6];
    param_1[0x10] = param_1[7];
    param_1[0x11] = param_1[8];
    param_1[0x12] = param_1[9];
    param_1[0xc] = param_1[3];
    param_1[0xd] = param_1[4];
    param_1[0xe] = param_1[5];
    param_1[0xf] = param_1[6];
    FUN_101e8692(param_1);
    if ((*(byte *)(iVar6 + 0xb0) & 8) != 0) {
      iVar5 = FUN_101c2523((uint)*(ushort *)(param_1 + 0xc) << 6,*(undefined2 *)(iVar6 + 0x44));
      param_1[0xd] = iVar5;
      iVar5 = FUN_101c2523((uint)*(ushort *)((int)param_1 + 0x32) << 6,*(undefined2 *)(iVar6 + 0x44)
                          );
      param_1[0xe] = iVar5;
      lVar3 = (longlong)(int)*(short *)(iVar6 + 0x4c) * (longlong)param_1[0xd];
      iVar6 = (int)(lVar3 >> 0x3f);
      lVar3 = lVar3 + CONCAT44(iVar6,iVar6) + 0x8000;
      param_1[0x12] =
           ((int)((ulonglong)lVar3 >> 0x20) << 0x10 | (uint)lVar3 >> 0x10) + 0x20 & 0xffffffc0;
    }
    uVar1 = *(ushort *)(param_1 + 0xc);
    uVar2 = *(ushort *)((int)param_1 + 0x32);
    if (uVar1 < uVar2) {
      param_1[0x16] = param_1[0xe];
      *(ushort *)(param_1 + 0x17) = uVar2;
      iVar6 = FUN_101c2523(uVar1,uVar2);
      param_1[0x13] = iVar6;
      iVar6 = 0x10000;
    }
    else {
      param_1[0x16] = param_1[0xd];
      *(ushort *)(param_1 + 0x17) = uVar1;
      param_1[0x13] = 0x10000;
      iVar6 = FUN_101c2523(uVar2,uVar1);
    }
    param_1[0x14] = iVar6;
    iVar6 = FUN_101ec931();
    param_1[0x18] = iVar6;
    param_1[0xb] = (int)(param_1 + 0xc);
    param_1[0x37] = -1;
    uVar4 = 0;
  }
  return uVar4;
}

