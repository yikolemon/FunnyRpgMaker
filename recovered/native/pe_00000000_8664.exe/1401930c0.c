/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401930c0 */

undefined4 FUN_1401930c0(bool param_1)

{
  undefined4 uVar1;
  
  if (param_1 != false) {
    if (DAT_140f32720 != 0) {
      common_flush_all(param_1);
    }
    return 1;
  }
  uVar1 = FUN_1401b2570(&PTR_LAB_140eb2a20,&DAT_140eb2b20);
  return uVar1;
}

