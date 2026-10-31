/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10233aa0 */

void __thiscall FUN_10233aa0(int param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  short *psVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  undefined4 local_3c;
  uint local_38;
  int local_34;
  int *local_30;
  undefined4 local_2c;
  undefined1 local_28 [32];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  local_38 = param_2 & 0xffff;
  sVar7 = (short)param_2;
  if (sVar7 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  uVar1 = **(uint **)(param_1 + 0x20);
  if ((uVar1 != 0) && (piVar2 = *(int **)(param_1 + 0x30), uVar1 < uVar1 + *piVar2 * 2)) {
    *piVar2 = *piVar2 + -1;
    psVar3 = (short *)**(int **)(param_1 + 0x20);
    **(int **)(param_1 + 0x20) = (int)(psVar3 + 1);
    *psVar3 = sVar7;
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    if (**(int **)(param_1 + 0xc) == param_1 + 0x3c) {
      iVar5 = *(int *)(param_1 + 0x54);
      iVar6 = *(int *)(param_1 + 0x50);
      **(int **)(param_1 + 0xc) = iVar6;
      **(int **)(param_1 + 0x1c) = iVar6;
      **(int **)(param_1 + 0x2c) = iVar5 - iVar6 >> 1;
    }
    local_30 = *(int **)(param_1 + 0x38);
    if (local_30 == (int *)0x0) {
      FUN_1026e05f(param_2,*(undefined4 *)(param_1 + 0x4c));
                    /* WARNING: Subroutine does not return */
      FUN_102283e0();
    }
    local_2c = CONCAT22(local_2c._2_2_,sVar7);
    pcVar4 = *(code **)(*local_30 + 0x1c);
    (*(code *)PTR_guard_check_icall_1035d810)
              (param_1 + 0x40,&local_2c,(int)&local_2c + 2,&local_3c,local_28,&local_8,&local_34);
    iVar5 = (*pcVar4)();
    if ((iVar5 == 0) || (iVar5 == 1)) {
      iVar5 = local_34 - (int)local_28;
      if ((iVar5 == 0) ||
         (iVar6 = FUN_1026f01a(local_28,1,iVar5,*(undefined4 *)(param_1 + 0x4c)), iVar5 == iVar6)) {
        *(undefined1 *)(param_1 + 0x3e) = 1;
      }
    }
    else if (iVar5 == 3) {
      FUN_102338f0(local_2c,*(undefined4 *)(param_1 + 0x4c));
                    /* WARNING: Subroutine does not return */
      FUN_102283e0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

