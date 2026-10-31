/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008dc30 */

uint FUN_14008dc30(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint3 extraout_var;
  
  uVar1 = FUN_1400a0dc0();
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_14009d5f0();
    if ((char)uVar2 != '\0') {
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
    FUN_1400a0e50();
    uVar1 = (uint)extraout_var << 8;
  }
  return uVar1 & 0xffffff00;
}

