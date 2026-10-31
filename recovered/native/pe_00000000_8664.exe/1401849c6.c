/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401849c6 */

int FUN_1401849c6(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  
  iVar1 = -2;
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    if ((*(code **)(param_1 + 0x30) != (code *)0x0) && (*(longlong *)(param_1 + 0x38) != 0)) {
      plVar2 = (longlong *)(**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x40),1,0x1bf0);
      if (plVar2 == (longlong *)0x0) {
        iVar1 = -4;
      }
      else {
        *(longlong **)(param_1 + 0x28) = plVar2;
        *plVar2 = param_1;
        plVar2[8] = 0;
        *(undefined4 *)(plVar2 + 1) = 0x3f34;
        iVar1 = FUN_140186558(param_1,param_2);
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),plVar2);
          *(undefined8 *)(param_1 + 0x28) = 0;
        }
      }
    }
  }
  return iVar1;
}

