/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10095d66 */

bool __thiscall FUN_10095d66(undefined4 *param_1,char *param_2)

{
  size_t *psVar1;
  size_t sVar2;
  int iVar3;
  bool bVar4;
  
  sVar2 = _strlen(param_2);
  psVar1 = param_1 + 4;
  if (0xf < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  if (*psVar1 == sVar2) {
    if (sVar2 == 0) {
      bVar4 = true;
    }
    else {
      iVar3 = FUN_102595e0(param_1,param_2,sVar2);
      bVar4 = iVar3 == 0;
    }
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

