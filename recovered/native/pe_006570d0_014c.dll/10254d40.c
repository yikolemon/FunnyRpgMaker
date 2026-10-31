/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10254d40 */

void FUN_10254d40(undefined4 *param_1,undefined4 param_2,int *param_3,byte *param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  code *pcVar4;
  uint uVar5;
  
  do {
    if (param_5 == 0) {
      *param_1 = param_2;
      param_1[1] = param_3;
      return;
    }
    bVar1 = *param_4;
    if (param_3 == (int *)0x0) {
LAB_10254da1:
      uVar5 = (uint)param_2 >> 8;
      param_2 = CONCAT31((int3)uVar5,1);
    }
    else {
      if (*(int *)param_3[8] == 0) {
LAB_10254d87:
        pcVar4 = *(code **)(*param_3 + 0xc);
        (*(code *)PTR_guard_check_icall_1035d810)(bVar1);
        uVar5 = (*pcVar4)();
      }
      else {
        iVar2 = *(int *)param_3[0xc];
        if (iVar2 < 1) goto LAB_10254d87;
        *(int *)param_3[0xc] = iVar2 + -1;
        pbVar3 = *(byte **)param_3[8];
        *(byte **)param_3[8] = pbVar3 + 1;
        *pbVar3 = bVar1;
        uVar5 = (uint)bVar1;
      }
      if (uVar5 == 0xffffffff) goto LAB_10254da1;
    }
    param_4 = param_4 + 1;
    param_5 = param_5 + -1;
  } while( true );
}

