/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f9332 */

undefined8 FUN_1801f9332(longlong param_1,longlong param_2)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_58;
  uVar6 = (**(code **)(param_1 + 0x2a0))(param_1,0x676c7966,param_2,(undefined4 *)(param_1 + 0x3f8))
  ;
  if ((char)uVar6 == -0x72) {
    *(undefined4 *)(param_1 + 0x3f8) = 0;
    uVar5 = 0;
  }
  else {
    if ((int)uVar6 != 0) goto LAB_1801f94aa;
    uVar5 = 0;
    if (*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x50) == 0) {
      uVar5 = FUN_1801ceb6f(param_2);
    }
  }
  *(undefined4 *)(param_1 + 0x3fc) = uVar5;
  iVar3 = (**(code **)(param_1 + 0x2a0))(param_1,0x6c6f6361,param_2,&local_34);
  uVar6 = 0x90;
  if (iVar3 != 0) goto LAB_1801f94aa;
  bVar7 = 2 - (*(short *)(param_1 + 0x132) == 0);
  uVar4 = 0x10000 << (bVar7 & 0x1f);
  if (uVar4 < local_34) {
    local_34 = uVar4;
  }
  uVar4 = local_34 >> (bVar7 & 0x1f);
  *(uint *)(param_1 + 0x438) = uVar4;
  uVar9 = *(int *)(param_1 + 0x10) + 1;
  if (uVar4 < uVar9) {
    uVar9 = uVar9 << (bVar7 & 0x1f);
    uVar10 = *(ulonglong *)(param_1 + 0xf8);
    uVar1 = *(ushort *)(param_1 + 0xf4);
    iVar3 = FUN_1801ceb6f(param_2);
    if (uVar1 == 0) {
LAB_1801f9444:
      uVar4 = *(int *)(param_2 + 8) - iVar3;
    }
    else {
      uVar11 = (ulonglong)uVar1 * 0x10 + uVar10;
      uVar4 = 0x7fffffff;
      bVar2 = false;
      do {
        uVar8 = *(int *)(uVar10 + 8) - iVar3;
        if (0 < (int)uVar8 && (int)uVar8 < (int)uVar4) {
          bVar2 = true;
          uVar4 = uVar8;
        }
        uVar10 = uVar10 + 0x10;
      } while (uVar10 < uVar11);
      if (!bVar2) goto LAB_1801f9444;
    }
    if (uVar4 < uVar9) {
      *(uint *)(param_1 + 0x10) =
           *(int *)(param_1 + 0x438) + -1 + (uint)(*(int *)(param_1 + 0x438) == 0);
    }
    else {
      *(int *)(param_1 + 0x438) = *(int *)(param_1 + 0x10) + 1;
      local_34 = uVar9;
    }
  }
  uVar6 = FUN_1801cec36(param_2,local_34,param_1 + 0x440);
LAB_1801f94aa:
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_58)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_58);
}

