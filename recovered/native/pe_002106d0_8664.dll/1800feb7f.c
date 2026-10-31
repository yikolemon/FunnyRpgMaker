/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800feb7f */

void FUN_1800feb7f(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  ulonglong *puVar3;
  int iVar4;
  
  puVar3 = (ulonglong *)FUN_1800434e2();
  iVar1 = FUN_180272944(*puVar3 | 1,param_1,param_2,param_3,0,param_4);
  iVar2 = -1;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (param_1 != 0) {
    iVar4 = (int)param_2 + -1;
    if ((int)param_2 <= iVar2) {
      iVar2 = iVar4;
    }
    if (iVar1 < 0) {
      iVar2 = iVar4;
    }
    *(undefined1 *)(param_1 + iVar2) = 0;
  }
  return;
}

