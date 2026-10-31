/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402c1138 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1402c1138(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = ram0x000140613b10 ^ (ulonglong)auStack_68;
  plVar1 = param_1 + 3;
  cVar2 = FUN_1402739e0(plVar1);
  if (cVar2 == '\0') {
    local_40 = (param_1[1] - *param_1 >> 3) * -0x1111111111111111;
    FUN_1402bf6f0(plVar1,local_38,param_2);
    lVar3 = FUN_1402c11ec(param_1);
  }
  else {
    FUN_1402bf882(plVar1,local_38,param_2);
    lVar3 = *(longlong *)(local_38[0] + 0x30) * 0x78 + *param_1;
  }
  if (ram0x000140613b10 == (local_28 ^ (ulonglong)auStack_68)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_28 ^ (ulonglong)auStack_68);
}

