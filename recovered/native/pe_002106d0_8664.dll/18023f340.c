/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023f340 */

void FUN_18023f340(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 local_res10 [24];
  undefined1 local_98 [8];
  longlong local_90;
  undefined1 local_88;
  longlong local_80;
  undefined1 local_78;
  longlong local_70;
  undefined2 local_68;
  longlong local_60;
  undefined2 local_58;
  longlong local_50;
  undefined1 local_48;
  longlong local_40;
  undefined1 local_38;
  
  if (param_2 == DAT_180417ea8) {
    FUN_18023d240(local_98,0);
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    FUN_18023ccf0(local_98,&DAT_18038759c);
    FUN_18023f4e0(local_98,0x3f,param_1,0);
    FUN_18023cdb0(local_98);
    if (local_40 != 0) {
      thunk_FUN_180290e40();
    }
    local_40 = 0;
    if (local_50 != 0) {
      thunk_FUN_180290e40();
    }
    local_50 = 0;
    if (local_60 != 0) {
      thunk_FUN_180290e40();
    }
    local_60 = 0;
    if (local_70 != 0) {
      thunk_FUN_180290e40();
    }
    local_70 = 0;
    if (local_80 != 0) {
      thunk_FUN_180290e40();
    }
    local_80 = 0;
    if (local_90 != 0) {
      thunk_FUN_180290e40();
    }
    local_90 = 0;
    FUN_18023d290(local_98);
    return;
  }
  FUN_18023d240(local_res10,0);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    lVar2 = _malloc_base(*(longlong *)(param_1 + 0x18) * 8);
    *(longlong *)(param_1 + 0x10) = lVar2;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180239770();
    }
    lVar2 = *(longlong *)(param_1 + 0x18);
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x10) + lVar2 * 8);
      *(longlong *)(*(longlong *)(param_1 + 0x10) + lVar2 * 8) = lVar1;
      if (lVar1 != 0) {
        (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
    }
  }
  FUN_18023d290(local_res10);
  return;
}

