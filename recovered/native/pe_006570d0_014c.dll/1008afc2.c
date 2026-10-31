/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008afc2 */

bool __thiscall FUN_1008afc2(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  bool bVar5;
  
  puVar3 = param_2;
  if (7 < (uint)param_2[5]) {
    puVar3 = (undefined4 *)*param_2;
  }
  iVar2 = param_2[4];
  piVar1 = param_1 + 4;
  if (7 < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  if (*piVar1 == iVar2) {
    if (iVar2 == 0) {
      bVar5 = true;
    }
    else {
      iVar4 = FUN_100047c3(param_1,puVar3,iVar2);
      bVar5 = iVar4 == iVar2;
    }
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}

