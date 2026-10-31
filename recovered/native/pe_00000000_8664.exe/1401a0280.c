/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401a0280 */

uint FUN_1401a0280(uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (param_1 < 2) {
    LOCK();
    UNLOCK();
    uVar1 = param_1;
    uVar2 = DAT_140f32b20;
  }
  else {
    puVar3 = (undefined4 *)FUN_14019e8cc();
    *puVar3 = 0x16;
    FUN_1401ae640();
    uVar1 = DAT_140f32b20;
    uVar2 = 0xffffffff;
  }
  DAT_140f32b20 = uVar1;
  return uVar2;
}

