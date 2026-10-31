/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008c028 */

bool FUN_18008c028(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  
  puVar4 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    puVar4 = (undefined8 *)*param_2;
  }
  lVar2 = param_2[2];
  plVar1 = param_1 + 2;
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if (*plVar1 == lVar2) {
    if (lVar2 == 0) {
      bVar5 = true;
    }
    else {
      lVar3 = thunk_FUN_18023bb00(param_1,puVar4,lVar2);
      bVar5 = lVar3 == lVar2;
    }
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}

