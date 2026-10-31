/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10254dd0 */

void FUN_10254dd0(undefined4 *param_1,undefined4 param_2,int *param_3,byte param_4,int param_5)

{
  int iVar1;
  byte *pbVar2;
  code *pcVar3;
  uint uVar4;
  
  do {
    if (param_5 == 0) {
      *param_1 = param_2;
      param_1[1] = param_3;
      return;
    }
    if (param_3 == (int *)0x0) {
LAB_10254e2a:
      uVar4 = (uint)param_2 >> 8;
      param_2 = CONCAT31((int3)uVar4,1);
    }
    else {
      if (*(int *)param_3[8] == 0) {
LAB_10254e0f:
        pcVar3 = *(code **)(*param_3 + 0xc);
        (*(code *)PTR_guard_check_icall_1035d810)(param_4);
        uVar4 = (*pcVar3)();
      }
      else {
        iVar1 = *(int *)param_3[0xc];
        if (iVar1 < 1) goto LAB_10254e0f;
        *(int *)param_3[0xc] = iVar1 + -1;
        pbVar2 = *(byte **)param_3[8];
        *(byte **)param_3[8] = pbVar2 + 1;
        *pbVar2 = param_4;
        uVar4 = (uint)param_4;
      }
      if (uVar4 == 0xffffffff) goto LAB_10254e2a;
    }
    param_5 = param_5 + -1;
  } while( true );
}

