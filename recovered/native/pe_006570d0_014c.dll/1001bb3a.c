/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001bb3a */

bool __thiscall FUN_1001bb3a(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  
  puVar2 = param_2;
  if (0xf < (uint)param_2[5]) {
    puVar2 = (undefined4 *)*param_2;
  }
  iVar3 = param_2[4];
  piVar1 = param_1 + 4;
  if (0xf < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  if (*piVar1 == iVar3) {
    if (iVar3 == 0) {
      bVar4 = true;
    }
    else {
      iVar3 = FUN_102595e0(param_1,puVar2,iVar3);
      bVar4 = iVar3 == 0;
    }
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

