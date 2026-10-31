/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401be550 */

double FUN_1401be550(int param_1)

{
  undefined4 *puVar1;
  double dVar2;
  
  dVar2 = DAT_140ebc2b8;
  if (param_1 != 0) {
    dVar2 = DAT_140ebc2c0;
  }
  dVar2 = dVar2 * DAT_140ebc2b8;
  puVar1 = (undefined4 *)FUN_14019e8cc();
  *puVar1 = 0x22;
  return dVar2;
}

