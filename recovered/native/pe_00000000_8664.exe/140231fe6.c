/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140231fe6 */

void FUN_140231fe6(longlong *param_1)

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

