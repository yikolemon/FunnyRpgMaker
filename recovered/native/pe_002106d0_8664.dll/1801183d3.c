/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801183d3 */

undefined4 FUN_1801183d3(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = 0x1000;
  if ((param_1 != 0x20f) && (param_1 != 0x213)) {
    uVar2 = (param_1 & 0xfffffffb) - 0x210;
    uVar1 = 0;
    if (uVar2 < 3) {
      uVar1 = *(undefined4 *)(&DAT_1802de3b0 + (ulonglong)uVar2 * 4);
    }
  }
  return uVar1;
}

