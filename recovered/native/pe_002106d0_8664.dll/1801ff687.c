/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ff687 */

void FUN_1801ff687(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  int *local_1d0;
  int local_1c0;
  int local_1bc;
  undefined1 local_1b8 [8];
  undefined8 local_1b0 [47];
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_1f8;
  local_1c0 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  piVar7 = *(int **)(param_1 + 0x2e0);
  (*(code *)param_2[0xf])(param_2,local_1b8,0x10,&local_1bc);
  if (local_1bc < 0) {
    iVar3 = 0xa2;
  }
  else {
    iVar3 = 3;
    if (0xffffffef < local_1bc - 0x11U) {
      if ((piVar7 == (int *)0x0) || (*piVar7 == 0)) {
        iVar3 = FUN_1801ff85c(param_1,local_1bc,0);
        local_1c0 = iVar3;
        if (iVar3 != 0) goto LAB_1801ff7fb;
        piVar7 = *(int **)(param_1 + 0x2e0);
      }
      else if (*piVar7 != local_1bc) goto LAB_1801ff7fb;
      lVar5 = *(longlong *)(piVar7 + 0x42);
      if (lVar5 == 0) {
        local_1d0 = &local_1c0;
        local_1d8 = 0;
        lVar5 = FUN_1801cc8d6(uVar1,4,0,local_1bc * 2);
        *(longlong *)(piVar7 + 0x42) = lVar5;
        iVar3 = local_1c0;
        if (local_1c0 != 0) goto LAB_1801ff7fb;
      }
      *(longlong *)(piVar7 + 0x44) = lVar5 + (longlong)local_1bc * 4;
      uVar1 = *param_2;
      uVar2 = param_2[2];
      if (local_1bc < 1) {
        iVar3 = 0;
      }
      else {
        puVar6 = local_1b0;
        lVar5 = 0;
        do {
          *param_2 = puVar6[-1];
          param_2[2] = *puVar6;
          uVar4 = (*(code *)param_2[10])(param_2,0);
          *(undefined4 *)(*(longlong *)(piVar7 + 0x42) + lVar5 * 4) = uVar4;
          *(undefined4 *)(*(longlong *)(piVar7 + 0x44) + lVar5 * 4) = uVar4;
          lVar5 = lVar5 + 1;
          puVar6 = puVar6 + 3;
          iVar3 = local_1c0;
        } while (lVar5 < local_1bc);
      }
      *param_2 = uVar1;
      param_2[2] = uVar2;
    }
  }
LAB_1801ff7fb:
  *(int *)(param_2 + 3) = iVar3;
  if (DAT_180402640 != (local_38 ^ (ulonglong)auStack_1f8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_38 ^ (ulonglong)auStack_1f8);
  }
  return;
}

