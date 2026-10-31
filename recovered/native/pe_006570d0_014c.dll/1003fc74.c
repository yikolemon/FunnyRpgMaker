/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003fc74 */

void FUN_1003fc74(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int local_34;
  undefined1 local_30 [21];
  undefined1 auStack_1b [3];
  undefined4 uStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_34;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  local_34 = __alldiv(uVar1,uVar2,10000000,0);
  local_34 = local_34 * -1000000;
  iVar3 = __alldiv(uVar1,uVar2,10,0);
  uVar6 = iVar3 + local_34;
  iVar3 = 0x1f;
  if ((uVar6 | 1) != 0) {
    for (; (uVar6 | 1) >> iVar3 == 0; iVar3 = iVar3 + -1) {
    }
  }
  uVar5 = *(int *)(&DAT_102902d4 + iVar3 * 8) +
          (uint)CARRY4(*(uint *)(&DAT_102902d0 + iVar3 * 8),uVar6);
  if (uVar5 < 6) {
    iVar3 = uVar5 - 6;
    do {
      iVar4 = param_3[1];
      uVar5 = iVar4 + 1;
      if ((uint)param_3[2] < uVar5) {
        (*(code *)param_3[3])(param_3,uVar5);
        iVar4 = param_3[1];
        uVar5 = iVar4 + 1;
      }
      param_3[1] = uVar5;
      *(undefined1 *)(*param_3 + iVar4) = 0x30;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0);
  }
  uStack_18 = FUN_1002472e(local_30,uVar6,0x15);
  FUN_1001909c(uStack_18,auStack_1b);
  if (DAT_10388d00 == (local_14 ^ (uint)&local_34)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

