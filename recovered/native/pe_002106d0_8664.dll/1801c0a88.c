/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c0a88 */

undefined8 FUN_1801c0a88(longlong param_1)

{
  longlong lVar1;
  
  if ((*(ushort *)(param_1 + 0x20) < 0x100) &&
     (lVar1 = FUN_1802a8150("imgui",(int)(char)*(ushort *)(param_1 + 0x20),6), lVar1 != 0)) {
    return 0;
  }
  return 1;
}

