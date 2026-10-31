/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001b19b */

undefined8 FUN_14001b19b(undefined2 *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  undefined8 local_res20;
  undefined1 auStackY_68 [32];
  
  uVar3 = DAT_14012ea80 ^ (ulonglong)auStackY_68;
  uVar1 = param_2 - 1;
  local_res20 = param_4;
  if (uVar1 < 0x7fffffff) {
    puVar4 = (ulonglong *)FUN_140009dc3();
    uVar2 = FUN_14008ecd0(*puVar4 | 1,param_1,uVar1,param_3,(undefined4 *)0x0,&local_res20);
    uVar5 = 0x8007007a;
    if ((((int)uVar2 < 0) || (uVar1 < uVar2)) || (uVar5 = 0, uVar1 == uVar2)) {
      param_1[param_2 + -1] = 0;
    }
  }
  else {
    uVar5 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = 0;
    }
  }
  if (DAT_14012ea80 == (uVar3 ^ (ulonglong)auStackY_68)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(uVar3 ^ (ulonglong)auStackY_68);
}

