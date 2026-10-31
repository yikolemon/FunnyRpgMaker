/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c770d */

void FUN_1801c770d(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)FUN_1801c68b0();
  local_40 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_50 = (longlong *)0x0;
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x48) + 0x28))
            ((longlong *)**(undefined8 **)(param_1 + 0x48),0,0,&local_40);
  (**(code **)(*(longlong *)*puVar1 + 0x130))((longlong *)*puVar1,0,&local_48);
  (**(code **)(*(longlong *)*puVar1 + 0x140))((longlong *)*puVar1,&local_50);
  (**(code **)(*(longlong *)*puVar1 + 0x128))((longlong *)*puVar1,0,local_40);
  (**(code **)(*(longlong *)*puVar1 + 0x138))((longlong *)*puVar1,0);
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_58 = 0;
    local_68 = 0;
    local_60 = 0x3f800000;
    (**(code **)(*(longlong *)*puVar1 + 0x158))((longlong *)*puVar1,0,0,1);
  }
  FUN_1801c6300(*(undefined8 *)(param_1 + 0x40));
  (**(code **)(*(longlong *)*puVar1 + 0x128))((longlong *)*puVar1,0,local_48);
  (**(code **)(*(longlong *)*puVar1 + 0x138))((longlong *)*puVar1,local_50);
  (**(code **)(*local_40 + 0x10))();
  (**(code **)(*local_48 + 0x10))();
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  if (DAT_180402640 == (local_38 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_38 ^ (ulonglong)auStack_88);
}

