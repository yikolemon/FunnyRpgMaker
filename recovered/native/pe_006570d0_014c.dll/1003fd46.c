/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003fd46 */

void FUN_1003fd46(int param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_2c [21];
  undefined1 auStack_17 [3];
  undefined4 uStack_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)auStack_2c;
  iVar4 = *(int *)(param_1 + 0x10);
  iVar2 = __alldiv(iVar4,*(undefined4 *)(param_1 + 0x14),10000000,0);
  iVar4 = iVar4 * 100;
  uVar1 = iVar2 * -1000000000 + iVar4;
  uVar3 = iVar2 * -1000000000 + iVar4 + 1;
  iVar4 = 0x1f;
  if (uVar3 != 0) {
    for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
    }
  }
  uVar3 = *(int *)(&DAT_102902d4 + iVar4 * 8) +
          (uint)CARRY4(*(uint *)(&DAT_102902d0 + iVar4 * 8),uVar1);
  if (uVar3 < 9) {
    iVar4 = uVar3 - 9;
    do {
      iVar2 = param_3[1];
      uVar3 = iVar2 + 1;
      if ((uint)param_3[2] < uVar3) {
        (*(code *)param_3[3])(param_3,uVar3);
        iVar2 = param_3[1];
        uVar3 = iVar2 + 1;
      }
      param_3[1] = uVar3;
      *(undefined1 *)(*param_3 + iVar2) = 0x30;
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0);
  }
  uStack_14 = FUN_1002472e(auStack_2c,uVar1,0x15);
  FUN_1001909c(uStack_14,auStack_17);
  if (DAT_10388d00 == (local_10 ^ (uint)auStack_2c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

