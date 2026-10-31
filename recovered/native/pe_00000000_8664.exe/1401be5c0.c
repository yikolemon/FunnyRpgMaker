/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401be5c0 */

double FUN_1401be5c0(int param_1)

{
  double dVar1;
  undefined4 *puVar2;
  double dVar3;
  
  dVar3 = DAT_1401ced60;
  if (param_1 != 0) {
    dVar3 = DAT_140e8e150;
  }
  dVar1 = DAT_1401ced60 / 0.0;
  puVar2 = (undefined4 *)FUN_14019e8cc();
  *puVar2 = 0x22;
  return dVar1 * dVar3;
}

