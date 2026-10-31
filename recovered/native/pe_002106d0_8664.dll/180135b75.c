/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180135b75 */

undefined8
FUN_180135b75(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_88;
  if (*(char *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10e) == '\0') {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    uVar1 = FUN_180106d4e(*(longlong *)(DAT_180419160 + 0x1608),param_1,0);
    local_58 = param_7;
    local_60 = param_6;
    local_68 = param_5;
    local_50 = 0;
    uVar2 = FUN_180135836(uVar1,&local_48,param_3,param_4);
  }
  else {
    uVar2 = 0;
  }
  if (DAT_180402640 == (local_38 ^ (ulonglong)auStack_88)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_38 ^ (ulonglong)auStack_88);
}

