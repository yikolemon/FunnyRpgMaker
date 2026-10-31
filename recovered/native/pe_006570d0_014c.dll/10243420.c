/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10243420 */

void FUN_10243420(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int *param_4,
                 undefined4 param_5,int param_6)

{
  int iVar1;
  short *psVar2;
  code *pcVar3;
  uint uVar4;
  short sVar5;
  
  do {
    if (param_6 == 0) {
      *param_2 = param_3;
      param_2[1] = param_4;
      return;
    }
    if (param_4 == (int *)0x0) {
LAB_1024347e:
      uVar4 = (uint)param_3 >> 8;
      param_3 = CONCAT31((int3)uVar4,1);
    }
    else {
      if (*(int *)param_4[8] == 0) {
LAB_1024345d:
        pcVar3 = *(code **)(*param_4 + 0xc);
        (*(code *)PTR_guard_check_icall_1035d810)(param_5);
        sVar5 = (*pcVar3)();
      }
      else {
        iVar1 = *(int *)param_4[0xc];
        if (iVar1 < 1) goto LAB_1024345d;
        *(int *)param_4[0xc] = iVar1 + -1;
        psVar2 = *(short **)param_4[8];
        *(short **)param_4[8] = psVar2 + 1;
        sVar5 = (short)param_5;
        *psVar2 = sVar5;
      }
      if (sVar5 == -1) goto LAB_1024347e;
    }
    param_6 = param_6 + -1;
  } while( true );
}

