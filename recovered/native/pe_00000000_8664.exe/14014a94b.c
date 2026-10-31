/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14014a94b */

int FUN_14014a94b(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_14014c30e();
  iVar1 = FUN_14012b478(*param_1,param_2);
  if (lVar2 != 0 && iVar1 == 0) {
    (**(code **)(lVar2 + 8))
              (*(undefined8 *)param_1[7],*(undefined4 *)((longlong)param_1 + 0x1c),
               *(undefined4 *)(param_1 + 4),0,0);
  }
  return iVar1;
}

