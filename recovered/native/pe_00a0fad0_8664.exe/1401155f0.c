/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401155f0 */

uint FUN_1401155f0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (param_1 < 2) {
    LOCK();
    UNLOCK();
    uVar1 = param_1;
    uVar2 = DAT_140354f50;
  }
  else {
    puVar3 = (undefined4 *)FUN_140113dd4();
    *puVar3 = 0x16;
    FUN_140120ee8();
    uVar1 = DAT_140354f50;
    uVar2 = 0xffffffff;
  }
  DAT_140354f50 = uVar1;
  return uVar2;
}

