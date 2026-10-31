/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10018750 */

bool __thiscall FUN_10018750(undefined4 *param_1,char *param_2)

{
  size_t sVar1;
  int iVar2;
  bool bVar3;
  
  sVar1 = _strlen(param_2);
  if ((uint)param_1[1] < sVar1) {
    bVar3 = false;
  }
  else {
    iVar2 = FUN_102595e0(*param_1,param_2,sVar1);
    bVar3 = iVar2 == 0;
  }
  return bVar3;
}

