/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f7592 */

longlong * FUN_1800f7592(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        if ((undefined8 *)puVar2[0x19] == (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
        else {
          (*(code *)**(undefined8 **)puVar2[0x19])();
        }
      }
    }
    lVar3 = *param_2;
    *param_2 = 0;
    *param_1 = lVar3;
    *(char *)(param_1 + 1) = (char)param_2[1];
  }
  return param_1;
}

