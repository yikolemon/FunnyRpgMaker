/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ef9e6 */

void __fastcall FUN_100ef9e6(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      if ((undefined4 *)puVar2[0x1e] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)puVar2[0x1e])(puVar2);
        return;
      }
      (**(code **)*puVar2)(1);
    }
  }
  return;
}

