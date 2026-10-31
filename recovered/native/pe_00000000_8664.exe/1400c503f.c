/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c503f */

undefined8
FUN_1400c503f(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  lVar1 = DAT_140f2a910;
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  if (*(char *)(*(longlong *)(lVar1 + 0x1608) + 0x10e) == '\0') {
    uVar2 = FUN_140080066(*(longlong *)(lVar1 + 0x1608),param_1,0);
    FUN_140077ef6(&local_40,&local_48,param_3,param_4);
    uVar3 = FUN_1400c524f(uVar2,param_2,local_40,local_48);
  }
  else {
    uVar3 = 0;
  }
  if (DAT_140f17b40 == (local_38 ^ (ulonglong)auStack_68)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_38 ^ (ulonglong)auStack_68);
}

