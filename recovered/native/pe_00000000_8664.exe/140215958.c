/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140215958 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140215958(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  ulonglong local_38;
  
  if (param_3 <= (ulonglong)param_1[3]) {
    plVar4 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      plVar4 = (longlong *)*param_1;
    }
    param_1[2] = param_3;
    local_40 = 0x1402159a2;
    FUN_1404b97c0(plVar4,param_2,param_3 * 2);
    *(undefined2 *)((longlong)plVar4 + param_3 * 2) = 0;
    return param_1;
  }
  local_38 = ram0x000140613b10 ^ (ulonglong)auStack_68;
  if (0x7ffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_140212875();
  }
  uVar1 = param_1[3];
  uVar3 = param_3 | 7;
  local_40 = 0x7ffffffffffffffe;
  if (((uVar3 < 0x7fffffffffffffff) && (uVar1 <= 0x7ffffffffffffffe - (uVar1 >> 1))) &&
     (local_40 = (uVar1 >> 1) + uVar1, local_40 < uVar3)) {
    local_40 = uVar3;
  }
  lVar2 = FUN_140212886(param_1,&local_40);
  param_1[2] = param_3;
  param_1[3] = local_40;
  FUN_1404b97c0(lVar2,param_2,param_3 * 2);
  *(undefined2 *)(lVar2 + param_3 * 2) = 0;
  if (7 < uVar1) {
    FUN_140212bec(param_1,*param_1,uVar1);
  }
  *param_1 = lVar2;
  if (ram0x000140613b10 != (local_38 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_14044aba0(local_38 ^ (ulonglong)auStack_68);
  }
  return param_1;
}

