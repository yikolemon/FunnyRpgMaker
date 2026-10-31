/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00405085 */

int * __cdecl FUN_00405085(void *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_30;
  local_14 = 0xffffffff;
  local_18 = &LAB_00407040;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_0047f2d0(&local_30,0);
  local_14 = 0;
  local_24 = DAT_0051b9f4;
  local_28 = DAT_0051b9f4;
  uVar1 = FUN_00405392((int *)&DAT_0051bb3c);
  piVar2 = (int *)FUN_0040541e(param_1,uVar1);
  if ((piVar2 == (int *)0x0) && (piVar2 = local_24, local_24 == (int *)0x0)) {
    iVar3 = FUN_00405456((int *)&local_28,(int)param_1);
    if (iVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_0040556f();
    }
    local_14 = 1;
    local_2c = local_28;
    local_24 = local_28;
    FUN_0047f3b0(local_28);
    (**(code **)(*local_24 + 4))();
    DAT_0051b9f4 = local_28;
    local_2c = (int *)0x0;
    piVar2 = local_28;
  }
  local_14 = 0xffffffff;
  FUN_0047f310(&local_30);
  ExceptionList = local_1c;
  return piVar2;
}

