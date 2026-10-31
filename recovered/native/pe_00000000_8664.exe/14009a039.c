/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009a039 */

undefined4 * FUN_14009a039(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    param_2 = FUN_140099b30(param_1);
  }
  if ((*(byte *)(param_1 + 0x2acd) & 4) != 0) {
    FUN_1400772a6("[docking] DockContextAddNode 0x%08X\n",param_2);
  }
  puVar1 = (undefined4 *)FUN_140077ab4(0xd8);
  FUN_14009a920(puVar1,param_2);
  FUN_140078d44(param_1 + 0x2930,*puVar1,puVar1);
  return puVar1;
}

