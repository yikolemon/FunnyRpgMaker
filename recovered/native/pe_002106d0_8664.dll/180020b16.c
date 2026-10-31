/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180020b16 */

void FUN_180020b16(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x2c);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    puVar3 = (undefined8 *)*param_1;
    if ((undefined8 *)*param_1 != (undefined8 *)0x0 && *piVar1 == 0) {
      do {
        puVar2 = (undefined8 *)puVar3[2];
        puVar3[2] = 0;
        (**(code **)*puVar3)(puVar3,1);
        puVar3 = puVar2;
      } while (puVar2 != (undefined8 *)0x0);
    }
  }
  *param_1 = 0;
  return;
}

