/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801fb25f */

int FUN_1801fb25f(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_1801fcc22();
  iVar1 = FUN_1801cc4a4(*param_1,param_2);
  if (lVar2 != 0 && iVar1 == 0) {
    (**(code **)(lVar2 + 8))
              (*(undefined8 *)param_1[7],*(undefined4 *)((longlong)param_1 + 0x1c),
               *(undefined4 *)(param_1 + 4),0,0);
  }
  return iVar1;
}

