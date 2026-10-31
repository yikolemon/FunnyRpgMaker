/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006dcc8 */

void FUN_14006dcc8(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)((longlong)param_1 + 4);
  puVar1 = (undefined8 *)param_1[1];
  if (iVar2 != 0) {
    do {
      FUN_14006dd35(puVar1,param_2);
      puVar1 = puVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar1 = (undefined8 *)param_1[1];
  }
  FUN_14001c53d(param_2,(longlong)puVar1);
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

