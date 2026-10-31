/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18014d768 */

void FUN_18014d768(undefined8 param_1)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = DAT_180419160;
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
  lVar2 = *(longlong *)(lVar2 + 0x1608);
  FUN_180119fae(0);
  piVar1 = (int *)(lVar2 + 0x1e0);
  *piVar1 = *piVar1 + 1;
  FUN_180117f98(param_1);
  return;
}

