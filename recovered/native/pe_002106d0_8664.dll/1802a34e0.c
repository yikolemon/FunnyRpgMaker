/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802a34e0 */

uint FUN_1802a34e0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (param_1 < 2) {
    LOCK();
    UNLOCK();
    uVar1 = param_1;
    uVar2 = DAT_1804218bc;
  }
  else {
    puVar3 = (undefined4 *)FUN_18027e66c();
    *puVar3 = 0x16;
    FUN_180290a50();
    uVar1 = DAT_1804218bc;
    uVar2 = 0xffffffff;
  }
  DAT_1804218bc = uVar1;
  return uVar2;
}

