/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f1ad0 */

void __thiscall FUN_100f1ad0(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)FUN_10018d26(param_1);
  LOCK();
  uVar1 = *puVar2;
  *puVar2 = param_2;
  UNLOCK();
  if ((uVar1 & 3) == 2) {
    WakeByAddressAll(param_1);
  }
  return;
}

