/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10092396 */

undefined4 FUN_10092396(int *param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 local_5c [52];
  int local_28;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_5c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3960;
  local_1c = ExceptionList;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    ExceptionList = &local_1c;
    local_28 = FUN_10228350(0x44);
    local_14 = 0;
    iVar1 = *(int *)(param_2 + 4);
    if (iVar1 == 0) {
      puVar2 = &DAT_10356101;
    }
    else {
      puVar2 = (undefined1 *)(iVar1 + 0x1c);
      if (*(undefined1 **)(iVar1 + 0x18) != (undefined1 *)0x0) {
        puVar2 = *(undefined1 **)(iVar1 + 0x18);
      }
    }
    local_21 = 1;
    FUN_1000daa4(puVar2);
    local_14 = 1;
    local_22 = 1;
    FUN_100924b0(local_5c,0);
    *param_1 = local_28;
    local_22 = 0;
    local_14 = 0xffffffff;
    FUN_1000dcbe();
  }
  ExceptionList = local_1c;
  return 2;
}

