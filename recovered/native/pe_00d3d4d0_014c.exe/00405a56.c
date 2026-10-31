/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00405a56 */

int __fastcall FUN_00405a56(int param_1)

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

