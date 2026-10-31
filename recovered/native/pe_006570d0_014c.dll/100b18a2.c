/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b18a2 */

undefined4 __fastcall FUN_100b18a2(int *param_1,undefined4 param_2,int param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined3 uVar6;
  undefined4 uVar5;
  undefined4 local_3c;
  int *local_38;
  int local_34;
  int *local_30;
  int *local_2c;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_3c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c1bd0;
  local_1c = ExceptionList;
  piVar1 = *(int **)*param_1;
  if (param_4 < (uint)(((int *)*param_1)[1] - (int)piVar1 >> 4)) {
    iVar2 = piVar1[param_4 * 4];
    uVar4 = param_3 + *(int *)(iVar2 + 4);
    if (*(uint *)(*piVar1 + 4) <= uVar4) {
      uVar4 = *(uint *)(*piVar1 + 4);
    }
    ExceptionList = &local_1c;
    local_3c = param_2;
    local_24 = param_1;
    FUN_100b17a5(uVar4,piVar1 + param_4 * 4 + 1);
    local_14 = 0;
    uVar6 = (undefined3)((uint)iVar2 >> 8);
    if (param_4 == (((int *)*local_24)[1] - *(int *)*local_24 >> 4) - 1U) {
      uVar5 = CONCAT31(uVar6,(int)local_2c - (int)local_30 == 4);
    }
    else {
      local_38 = local_2c;
      local_34 = param_4 + 1;
      do {
        if (local_30 == local_38) {
          uVar5 = 0;
          goto code_r0x100b1989;
        }
        local_24 = local_30;
        cVar3 = FUN_100b18a2(*local_30,local_34);
        local_30 = local_24 + 1;
      } while (cVar3 == '\0');
      uVar5 = CONCAT31(uVar6,1);
    }
code_r0x100b1989:
    local_14 = 0xffffffff;
    FUN_10004eae();
  }
  else {
    uVar5 = 0;
  }
  ExceptionList = local_1c;
  return uVar5;
}

