/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10020804 */

void __fastcall FUN_10020804(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x20);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    puVar3 = (undefined4 *)*param_1;
    if ((undefined4 *)*param_1 != (undefined4 *)0x0 && *piVar1 == 0) {
      do {
        puVar2 = (undefined4 *)puVar3[3];
        puVar3[3] = 0;
        (**(code **)*puVar3)(1);
        puVar3 = puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
  }
  *param_1 = 0;
  return;
}

