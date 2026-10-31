/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076b4b3 */

undefined4 FUN_14076b4b3(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x1000;
  if ((param_1 != 0x20f) && (param_1 != 0x213)) {
    uVar1 = 0;
    if ((param_1 & 0xfffffffb) - 0x210 < 3) {
      uVar1 = *(undefined4 *)((ulonglong)(param_1 & 0xfffffffb) * 4 + 0x102b7fc0);
    }
  }
  return uVar1;
}

