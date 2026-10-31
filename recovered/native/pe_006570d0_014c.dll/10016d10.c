/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10016d10 */

void __thiscall FUN_10016d10(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 local_1c [4];
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = local_1c;
  local_c = 0xffffffff;
  local_10 = &LAB_10059000;
  local_14 = ExceptionList;
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 == *(undefined4 **)(param_1 + 8)) {
    ExceptionList = &local_14;
    FUN_10016db8(puVar1,param_2);
    ExceptionList = local_14;
  }
  else {
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    *puVar1 = *param_2;
    puVar1[1] = uVar2;
    puVar1[2] = uVar3;
    puVar1[3] = uVar4;
    *(undefined1 *)param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x10;
  }
  return;
}

