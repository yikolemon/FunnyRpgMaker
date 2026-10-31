/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14010678c */

undefined8 FUN_14010678c(longlong param_1)

{
  longlong lVar1;
  
  if ((*(ushort *)(param_1 + 0x20) < 0x100) &&
     (lVar1 = FUN_1401c4fe0("imgui",(int)(char)*(ushort *)(param_1 + 0x20),6), lVar1 != 0)) {
    return 0;
  }
  return 1;
}

