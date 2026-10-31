/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f4bd2 */

void __thiscall FUN_100f4bd2(int *param_1,int *param_2,undefined1 param_3)

{
  int *piVar1;
  int *local_28;
  char local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  piVar1 = (int *)*param_1;
  if ((piVar1 != (int *)0x0) && (((char)param_1[1] != '\x01' || ((char)piVar1[0x1b] != '\x01')))) {
    local_20 = (undefined1 *)&local_28;
    local_14 = 0xffffffff;
    local_18 = &LAB_100f5740;
    local_1c = ExceptionList;
    local_28 = piVar1 + 5;
    ExceptionList = &local_1c;
    FUN_100446d6();
    local_24 = '\x01';
    local_14 = 0;
    if (*(char *)((int)piVar1 + 0x75) != '\x01') {
      piVar1[2] = *param_2;
      (**(code **)(*piVar1 + 0x14))(&local_28,param_3);
      local_14 = 0xffffffff;
      if (local_24 == '\x01') {
        FUN_1022c200(local_28);
      }
      ExceptionList = local_1c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_100f2ce8(3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_100f2ce8();
}

