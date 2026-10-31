/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00405a9a */

undefined2 * __thiscall
FUN_00405a9a(void *this,short param_1,undefined2 *param_2,undefined2 *param_3)

{
  char cVar1;
  
  if (param_2 != param_3) {
    do {
      cVar1 = (**(code **)(*(int *)this + 0x10))((int)param_1,*param_2);
      if (cVar1 != '\0') {
        return param_2;
      }
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  return param_2;
}

