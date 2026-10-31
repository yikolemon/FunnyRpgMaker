/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180121b52 */

void FUN_180121b52(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x90);
  if (((lVar1 != 0) && (lVar1 != param_2)) && (*(longlong *)(lVar1 + 0x4c8) == param_1)) {
    *(undefined8 *)(lVar1 + 0x4c8) = 0;
  }
  *(longlong *)(param_2 + 0x4c8) = param_1;
  *(longlong *)(param_1 + 0x90) = param_2;
  return;
}

