/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009470c */

void __thiscall FUN_1009470c(int param_1,undefined2 param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint *local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_100c3a30;
  local_18 = ExceptionList;
  iVar1 = *(int *)(param_1 + 4);
  puVar2 = *(uint **)(iVar1 + 0x1c);
  ExceptionList = &local_18;
  if (puVar2 == (uint *)0x0) {
    puVar2 = (uint *)FUN_10228350(0xc);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *(uint **)(iVar1 + 0x1c) = puVar2;
    local_20 = puVar2;
  }
  else {
    uVar3 = puVar2[1];
    local_1c = (undefined1 *)&local_20;
    if (uVar3 < *puVar2) goto code_r0x10094788;
  }
  local_10 = 0xffffffff;
  FUN_100946a8(1);
  uVar3 = puVar2[1];
code_r0x10094788:
  puVar2[1] = uVar3 + 1;
  *(undefined2 *)(puVar2[2] + uVar3 * 2) = param_2;
  ExceptionList = local_18;
  return;
}

