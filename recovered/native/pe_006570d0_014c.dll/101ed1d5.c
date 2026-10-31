/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ed1d5 */

int __fastcall FUN_101ed1d5(int param_1,int param_2)

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
  int iStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&iStack_24;
  iVar3 = (**(code **)(param_1 + 0x204))(param_1,0x676c7966,param_2,(undefined4 *)(param_1 + 0x2d4))
  ;
  if ((char)iVar3 == -0x72) {
    *(undefined4 *)(param_1 + 0x2d4) = 0;
    uVar4 = 0;
  }
  else {
    if (iVar3 != 0) goto LAB_101ed348;
    uVar4 = 0;
    if (*(int *)(*(int *)(param_1 + 0x80) + 0x34) == 0) {
      uVar4 = FUN_101c4a88(param_2);
    }
  }
  *(undefined4 *)(param_1 + 0x2d8) = uVar4;
  iVar5 = (**(code **)(param_1 + 0x204))(param_1,0x6c6f6361,param_2,&uStack_18);
  iVar3 = 0x90;
  if (iVar5 != 0) goto LAB_101ed348;
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
    iVar3 = FUN_101c4a88(param_2);
    if (uVar1 == 0) {
LAB_101ed2e1:
      uVar8 = *(int *)(param_2 + 4) - iVar3;
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
      iStack_20 = param_2;
      if (!bVar2) goto LAB_101ed2e1;
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
  iVar3 = FUN_101c4b40(param_2,uStack_18,param_1 + 0x304);
LAB_101ed348:
  if (DAT_10388d00 == (local_14 ^ (uint)&iStack_24)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

