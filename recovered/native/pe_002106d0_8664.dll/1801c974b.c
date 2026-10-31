/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c974b */

void FUN_1801c974b(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1801c68b0();
  local_38 = 0;
  uStack_30 = 0;
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x48) + 8);
  (**(code **)(**(longlong **)(lVar1 + 8) + 0x108))(*(longlong **)(lVar1 + 8),1,puVar2,0);
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    (**(code **)(**(longlong **)(lVar1 + 8) + 400))(*(longlong **)(lVar1 + 8),*puVar2,&local_38);
  }
  FUN_1801c7c74(*(undefined8 *)(param_1 + 0x40));
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_58);
}

