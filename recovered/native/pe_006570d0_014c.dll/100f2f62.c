/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f2f62 */

int * __thiscall FUN_100f2f62(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_1 != param_2) {
    puVar2 = (undefined4 *)*param_1;
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = puVar2 + 1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        if ((undefined4 *)puVar2[0x1e] == (undefined4 *)0x0) {
          (**(code **)*puVar2)(1);
        }
        else {
          (*(code *)**(undefined4 **)puVar2[0x1e])(puVar2);
        }
      }
    }
    iVar3 = *param_2;
    *param_2 = 0;
    *param_1 = iVar3;
    *(char *)(param_1 + 1) = (char)param_2[1];
  }
  return param_1;
}

