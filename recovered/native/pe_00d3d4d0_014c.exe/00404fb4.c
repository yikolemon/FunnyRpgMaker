/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00404fb4 */

undefined4 * __thiscall FUN_00404fb4(void *this,int *param_1)

{
  int *piVar1;
  undefined4 **ppuVar2;
  undefined1 uVar3;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_00407030;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *(int **)this = param_1;
  piVar1 = *(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x38);
  local_24 = this;
  ppuVar2 = &local_24;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
    ppuVar2 = (undefined4 **)local_20;
  }
  local_20 = (undefined1 *)ppuVar2;
  local_14 = 0;
  if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc) == 0) {
    piVar1 = *(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x3c);
    uVar3 = 1;
    if ((piVar1 != (int *)0x0) && (piVar1 != param_1)) {
      FUN_0040526c(piVar1);
      *(bool *)(local_24 + 1) = *(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc) == 0;
      ExceptionList = local_1c;
      return local_24;
    }
  }
  else {
    uVar3 = 0;
  }
  *(undefined1 *)(local_24 + 1) = uVar3;
  ExceptionList = local_1c;
  return local_24;
}

