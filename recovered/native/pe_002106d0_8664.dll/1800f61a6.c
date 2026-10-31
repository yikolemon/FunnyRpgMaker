/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f61a6 */

void FUN_1800f61a6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_1800188ac();
  LOCK();
  uVar1 = *puVar2;
  *puVar2 = param_2;
  UNLOCK();
  if (((uint)uVar1 & 3) == 2) {
    WakeByAddressAll(param_1);
    return;
  }
  return;
}

