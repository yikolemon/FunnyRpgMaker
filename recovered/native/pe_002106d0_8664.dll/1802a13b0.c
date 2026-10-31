/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802a13b0 */

double FUN_1802a13b0(int param_1)

{
  double dVar1;
  undefined4 *puVar2;
  double dVar3;
  
  dVar3 = DAT_1802ac578;
  if (param_1 != 0) {
    dVar3 = DAT_18032a160;
  }
  dVar1 = DAT_1802ac578 / 0.0;
  puVar2 = (undefined4 *)FUN_18027e66c();
  *puVar2 = 0x22;
  return dVar1 * dVar3;
}

