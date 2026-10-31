/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1023e7c0 */

void FUN_1023e7c0(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5
                 )

{
  int iVar1;
  short *psVar2;
  code *pcVar3;
  uint uVar4;
  short sVar5;
  
  do {
    if (param_5 == 0) {
      *param_1 = param_2;
      param_1[1] = param_3;
      return;
    }
    if (param_3 == (int *)0x0) {
LAB_1023e81e:
      uVar4 = (uint)param_2 >> 8;
      param_2 = CONCAT31((int3)uVar4,1);
    }
    else {
      if (*(int *)param_3[8] == 0) {
LAB_1023e7fd:
        pcVar3 = *(code **)(*param_3 + 0xc);
        (*(code *)PTR_guard_check_icall_1035d810)(param_4);
        sVar5 = (*pcVar3)();
      }
      else {
        iVar1 = *(int *)param_3[0xc];
        if (iVar1 < 1) goto LAB_1023e7fd;
        *(int *)param_3[0xc] = iVar1 + -1;
        psVar2 = *(short **)param_3[8];
        *(short **)param_3[8] = psVar2 + 1;
        sVar5 = (short)param_4;
        *psVar2 = sVar5;
      }
      if (sVar5 == -1) goto LAB_1023e81e;
    }
    param_5 = param_5 + -1;
  } while( true );
}

