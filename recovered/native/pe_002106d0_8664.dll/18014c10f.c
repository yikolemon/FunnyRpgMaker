/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18014c10f */

undefined8
FUN_18014c10f(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  lVar1 = DAT_180419160;
  local_38 = DAT_180402640 ^ (ulonglong)auStack_68;
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
  if (*(char *)(*(longlong *)(lVar1 + 0x1608) + 0x10e) == '\0') {
    uVar2 = FUN_180106d4e(*(longlong *)(lVar1 + 0x1608),param_1,0);
    FUN_1800fec3a(&local_40,&local_48,param_3,param_4);
    uVar3 = FUN_18014c31f(uVar2,param_2,local_40,local_48);
  }
  else {
    uVar3 = 0;
  }
  if (DAT_180402640 == (local_38 ^ (ulonglong)auStack_68)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_38 ^ (ulonglong)auStack_68);
}

