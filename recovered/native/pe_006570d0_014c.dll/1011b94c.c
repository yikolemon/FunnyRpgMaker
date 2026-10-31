/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011b94c */

undefined4 * __fastcall FUN_1011b94c(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    param_2 = FUN_1011b53b(param_1);
  }
  if ((*(byte *)(param_1 + 0x27b5) & 4) != 0) {
    FUN_100f99e6("[docking] DockContextAddNode 0x%08X\n",param_2);
  }
  puVar1 = (undefined4 *)FUN_100fa1fa(0xb0);
  FUN_1011c190(param_2);
  FUN_100fb37c(*puVar1,puVar1);
  return puVar1;
}

