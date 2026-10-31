/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f408a */

void FUN_1800f408a(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      if ((undefined8 *)puVar2[0x19] != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001800f40aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)**(undefined8 **)puVar2[0x19])();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0001800f40bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}

