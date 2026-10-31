/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044494a */

int __fastcall FUN_0044494a(int param_1,int *param_2)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iStack_24;
  int *piStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&iStack_24;
  iVar3 = (**(code **)(param_1 + 0x204))(param_1,0x676c7966,param_2,(undefined4 *)(param_1 + 0x2d4))
  ;
  if ((char)iVar3 == -0x72) {
    *(undefined4 *)(param_1 + 0x2d4) = 0;
    uVar4 = 0;
  }
  else {
    if (iVar3 != 0) goto LAB_00444abd;
    uVar4 = 0;
    if (*(int *)(*(int *)(param_1 + 0x80) + 0x34) == 0) {
      uVar4 = FUN_00420b00((int)param_2);
    }
  }
  *(undefined4 *)(param_1 + 0x2d8) = uVar4;
  iVar5 = (**(code **)(param_1 + 0x204))(param_1,0x6c6f6361,param_2,&uStack_18);
  iVar3 = 0x90;
  if (iVar5 != 0) goto LAB_00444abd;
  bVar6 = 2 - (*(short *)(param_1 + 0xd2) == 0);
  uVar9 = 0x10000 << (bVar6 & 0x1f);
  if (uVar9 < uStack_18) {
    uStack_18 = uVar9;
  }
  uVar9 = uStack_18 >> (bVar6 & 0x1f);
  *(uint *)(param_1 + 0x300) = uVar9;
  uVar10 = *(int *)(param_1 + 0x10) + 1;
  if (uVar9 < uVar10) {
    uStack_1c = uVar10 << (bVar6 & 0x1f);
    uVar9 = *(uint *)(param_1 + 0x9c);
    uVar1 = *(ushort *)(param_1 + 0x98);
    iVar3 = FUN_00420b00((int)param_2);
    if (uVar1 == 0) {
LAB_00444a56:
      uVar8 = param_2[1] - iVar3;
    }
    else {
      uVar11 = (uint)uVar1 * 0x10 + uVar9;
      bVar2 = false;
      uVar10 = 0x7fffffff;
      do {
        uVar7 = *(int *)(uVar9 + 8) - iVar3;
        uVar8 = uVar7;
        if ((int)uVar7 < 1 || (int)uVar10 <= (int)uVar7) {
          uVar8 = uVar10;
        }
        if ((int)uVar7 >= 1 && (int)uVar10 > (int)uVar7) {
          bVar2 = true;
        }
        uVar9 = uVar9 + 0x10;
        uVar10 = uVar8;
      } while (uVar9 < uVar11);
      iStack_24 = param_1;
      piStack_20 = param_2;
      if (!bVar2) goto LAB_00444a56;
    }
    if (uVar8 < uStack_1c) {
      *(uint *)(param_1 + 0x10) =
           *(int *)(param_1 + 0x300) + -1 + (uint)(*(int *)(param_1 + 0x300) == 0);
    }
    else {
      *(int *)(param_1 + 0x300) = *(int *)(param_1 + 0x10) + 1;
      uStack_18 = uStack_1c;
    }
  }
  iVar3 = FUN_00420bb8(param_2,uStack_18,(int *)(param_1 + 0x304));
LAB_00444abd:
  if (DAT_0050e8c0 == (local_14 ^ (uint)&iStack_24)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&iStack_24);
}

