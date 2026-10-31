/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001cbde */

int FUN_14001cbde(undefined8 param_1,undefined8 param_2,uint *param_3,longlong param_4,char param_5)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [44];
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStack_68;
  plVar2 = FUN_140021ff6(param_1,(longlong)param_3);
  if (*plVar2 == 0) {
    puVar3 = (undefined8 *)FUN_14001e961(param_4,0x10,&local_3c);
    if (local_3c == 0) {
      *plVar2 = (longlong)puVar3;
      *puVar3 = param_1;
      puVar3[1] = param_2;
      uVar1 = param_3[2];
      if (*param_3 <= uVar1) {
        local_3c = FUN_14002208c(param_3,param_4);
        if (local_3c != 0) goto LAB_14001cc75;
        uVar1 = param_3[2];
      }
      param_3[2] = uVar1 + 1;
      local_3c = 0;
    }
  }
  else {
    local_3c = 0;
    if (param_5 != '\0') {
      *(undefined8 *)(*plVar2 + 8) = param_2;
      local_3c = 0;
    }
  }
LAB_14001cc75:
  if (DAT_14012ea80 == (local_38 ^ (ulonglong)auStack_68)) {
    return local_3c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_38 ^ (ulonglong)auStack_68);
}

