/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ceab9 */

void FUN_1801ceab9(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
                  longlong param_5,int *param_6)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  int *piVar5;
  
  lVar4 = 0;
  lVar2 = 0;
  piVar5 = param_6;
  do {
    *param_4 = 0;
    if (param_2 == 0) {
      *piVar5 = 0;
      piVar3 = piVar5;
LAB_1801ceb21:
      iVar1 = (**(code **)((longlong)&PTR_FUN_1803295f0 + lVar4))
                        (param_1,param_2,param_3,param_4,param_5);
      *piVar3 = iVar1;
    }
    else {
      iVar1 = FUN_1801ce63e(param_2,0);
      *piVar5 = iVar1;
      if (iVar1 == 0) {
        piVar3 = param_6 + lVar2;
        goto LAB_1801ceb21;
      }
    }
    lVar2 = lVar2 + 1;
    piVar5 = piVar5 + 1;
    param_5 = param_5 + 4;
    param_4 = param_4 + 1;
    lVar4 = lVar4 + 0x10;
    if (lVar4 == 0x90) {
      return;
    }
  } while( true );
}

