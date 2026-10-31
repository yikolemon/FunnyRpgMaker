/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011f647 */

void FUN_18011f647(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x2acd) & 4) != 0) {
    FUN_1800fdfea("[docking] DockContextRebuildNodes\n");
  }
  FUN_18011d898(0);
  FUN_18011f19a();
  FUN_18011f69a(param_1,*(undefined8 *)(param_1 + 0x2958),*(undefined4 *)(param_1 + 0x2950));
  FUN_18011f855(param_1,0);
  return;
}

