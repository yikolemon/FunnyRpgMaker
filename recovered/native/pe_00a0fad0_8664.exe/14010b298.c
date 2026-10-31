/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14010b298 */

undefined4 FUN_14010b298(bool param_1)

{
  undefined4 uVar1;
  
  if (param_1 != false) {
    if (DAT_140354b18 != 0) {
      common_flush_all(param_1);
    }
    return 1;
  }
  uVar1 = FUN_1401247e8(&PTR_LAB_140166370,&DAT_140166470);
  return uVar1;
}

