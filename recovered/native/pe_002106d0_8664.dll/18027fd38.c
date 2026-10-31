/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18027fd38 */

undefined8 FUN_18027fd38(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = (uint)(param_1 >> 0x3f) & 3;
  if ((((int)param_1 + uVar1 & 3) == uVar1) &&
     (lVar2 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(param_1),8) + param_1,
     param_1 != ((lVar2 >> 6) - (lVar2 >> 0x3f)) * 100)) {
    return 1;
  }
  param_1 = param_1 + 0x76c;
  lVar2 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(param_1),8) + param_1;
  lVar2 = ((lVar2 >> 8) - (lVar2 >> 0x3f)) * 400;
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),param_1 == lVar2);
}

