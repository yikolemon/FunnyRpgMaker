/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c9fe4 */

void __thiscall FUN_100c9fe4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *local_164;
  int local_160;
  undefined4 local_15c;
  undefined1 *local_158;
  undefined1 local_154 [252];
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  undefined4 local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_164;
  local_18 = &LAB_100cc3d0;
  local_1c = ExceptionList;
  local_164 = local_154;
  local_160 = 0;
  local_158 = &LAB_100190fe;
  local_15c = 0xfa;
  local_14 = 0;
  ExceptionList = &local_1c;
  local_24 = param_1;
  (**(code **)(**(int **)(param_1 + 8) + 4))(param_2,&local_164);
  iVar1 = local_160;
  if (*(int *)(local_24 + 0x48) != 0) {
    iVar2 = FUN_1026f01a(local_164,1,local_160,*(int *)(local_24 + 0x48));
    if (iVar2 != iVar1) {
      puVar3 = (undefined4 *)FUN_10268ffd();
      local_28 = *puVar3;
      FUN_1000334a(local_24 + 0x4c);
      local_14 = 1;
      FUN_10012eed(local_58,"Failed writing to file ",local_40);
      local_14 = 2;
                    /* WARNING: Subroutine does not return */
      FUN_100ca6b3(local_58,local_28);
    }
  }
  local_14 = 0xffffffff;
  if (local_164 != local_154) {
    thunk_FUN_10274120(local_164);
  }
  ExceptionList = local_1c;
  return;
}

