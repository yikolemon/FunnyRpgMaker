/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140020ebc */

void FUN_140020ebc(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
                  longlong param_5,int *param_6)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  int *piVar6;
  
  lVar5 = 0;
  lVar3 = 0;
  piVar6 = param_6;
  do {
    *param_4 = 0;
    if (param_2 == 0) {
      *piVar6 = 0;
      piVar4 = piVar6;
LAB_140020f24:
      iVar1 = (**(code **)((longlong)&PTR_FUN_1400e6740 + lVar5))
                        (param_1,param_2,param_3,param_4,param_5);
      *piVar4 = iVar1;
    }
    else {
      uVar2 = FUN_140020a41(param_2,0);
      *piVar6 = (int)uVar2;
      if ((int)uVar2 == 0) {
        piVar4 = param_6 + lVar3;
        goto LAB_140020f24;
      }
    }
    lVar3 = lVar3 + 1;
    piVar6 = piVar6 + 1;
    param_5 = param_5 + 4;
    param_4 = param_4 + 1;
    lVar5 = lVar5 + 0x10;
    if (lVar5 == 0x90) {
      return;
    }
  } while( true );
}

