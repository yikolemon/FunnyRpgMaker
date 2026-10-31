/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000e08a */

int __fastcall FUN_1000e08a(int param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 4);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  iVar2 = 0;
  if (*piVar1 == 0) {
    iVar2 = param_1;
  }
  return iVar2;
}

