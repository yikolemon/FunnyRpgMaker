/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f6a36 */

longlong * FUN_1800f6a36(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_1800f7550();
  lVar1 = *plVar2;
  *param_2 = lVar1;
  *(undefined1 *)(param_2 + 1) = 1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}

