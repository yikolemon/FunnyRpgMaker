/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1023e730 */

void FUN_1023e730(undefined4 *param_1,undefined4 param_2,int *param_3,short *param_4,int param_5)

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
    sVar5 = *param_4;
    if (param_3 == (int *)0x0) {
LAB_1023e797:
      uVar4 = (uint)param_2 >> 8;
      param_2 = CONCAT31((int3)uVar4,1);
    }
    else {
      if (*(int *)param_3[8] == 0) {
LAB_1023e776:
        pcVar3 = *(code **)(*param_3 + 0xc);
        (*(code *)PTR_guard_check_icall_1035d810)(sVar5);
        sVar5 = (*pcVar3)();
      }
      else {
        iVar1 = *(int *)param_3[0xc];
        if (iVar1 < 1) goto LAB_1023e776;
        *(int *)param_3[0xc] = iVar1 + -1;
        psVar2 = *(short **)param_3[8];
        *(short **)param_3[8] = psVar2 + 1;
        *psVar2 = sVar5;
      }
      if (sVar5 == -1) goto LAB_1023e797;
    }
    param_4 = param_4 + 1;
    param_5 = param_5 + -1;
  } while( true );
}

