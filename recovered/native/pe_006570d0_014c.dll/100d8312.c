/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d8312 */

undefined4 __thiscall FUN_100d8312(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_1c [4];
  int *local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_1c;
  uVar3 = FUN_100d7b05(param_2);
  FUN_100d78b0(auStack_1c,param_2,uVar3);
  if (local_18 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar3 = uVar3 & *(uint *)(param_1 + 0x18);
    iVar1 = *(int *)(param_1 + 0xc);
    piVar2 = *(int **)(iVar1 + uVar3 * 8);
    if (*(int **)(iVar1 + 4 + uVar3 * 8) == local_18) {
      if (piVar2 == local_18) {
        iVar5 = *(int *)(param_1 + 4);
        *(int *)(iVar1 + uVar3 * 8) = iVar5;
      }
      else {
        iVar5 = local_18[1];
      }
      *(int *)(iVar1 + 4 + uVar3 * 8) = iVar5;
    }
    else if (piVar2 == local_18) {
      *(int *)(iVar1 + uVar3 * 8) = *local_18;
    }
    iVar1 = *local_18;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    *(int *)local_18[1] = iVar1;
    *(int *)(iVar1 + 4) = local_18[1];
    FUN_102283a0(local_18,0x10);
    uVar4 = 1;
  }
  if (DAT_10388d00 == (local_14 ^ (uint)auStack_1c)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

