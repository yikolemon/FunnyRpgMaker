/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025f331 */

bool __thiscall FUN_1025f331(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  bool bVar2;
  
  if (((*(uint *)(*param_1 + 0xc) >> 0xc & 1) == 0) || (*(int *)(*param_1 + 4) != 0)) {
    iVar1 = FUN_1026defe((int)param_2,*param_1,param_3);
    bVar2 = iVar1 != -1;
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}

