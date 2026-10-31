/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00488ae1 */

void FUN_00488ae1(undefined4 *param_1)

{
  int iVar1;
  
  LOCK();
  iVar1 = *(int *)*param_1 + -1;
  *(int *)*param_1 = iVar1;
  UNLOCK();
  if ((iVar1 == 0) && ((undefined *)*param_1 != &DAT_0051b118)) {
    FUN_00495f00((LPVOID)*param_1);
    *param_1 = &DAT_0051b118;
  }
  return;
}

