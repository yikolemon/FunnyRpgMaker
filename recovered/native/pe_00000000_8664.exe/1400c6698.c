/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c6698 */

void FUN_1400c6698(undefined8 param_1)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = DAT_140f2a910;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  lVar2 = *(longlong *)(lVar2 + 0x1608);
  FUN_1400932c6(0);
  piVar1 = (int *)(lVar2 + 0x1e0);
  *piVar1 = *piVar1 + 1;
  FUN_1400912b0(param_1);
  return;
}

