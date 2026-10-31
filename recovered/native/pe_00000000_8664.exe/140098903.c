/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140098903 */

void FUN_140098903(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x2acd) & 4) != 0) {
    FUN_1400772a6("[docking] DockContextRebuildNodes\n");
  }
  FUN_140096b54(0);
  FUN_140098456();
  FUN_140098956(param_1,*(undefined8 *)(param_1 + 0x2958),*(undefined4 *)(param_1 + 0x2950));
  FUN_140098b11(param_1,0);
  return;
}

