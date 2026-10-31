/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402779d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1402779d8(longlong *param_1,undefined8 param_2,ulonglong param_3)

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
    if (3 < (ulonglong)param_1[3]) {
      plVar4 = (longlong *)*param_1;
    }
    param_1[2] = param_3;
    local_40 = 0x140277a26;
    FUN_1404b97c0(plVar4,param_2,param_3 * 4);
    *(undefined4 *)((longlong)plVar4 + param_3 * 4) = 0;
    return param_1;
  }
  local_38 = ram0x000140613b10 ^ (ulonglong)auStack_68;
  if (0x3ffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_140212875();
  }
  uVar1 = param_1[3];
  uVar3 = param_3 | 3;
  local_40 = 0x3ffffffffffffffe;
  if (((uVar3 < 0x3fffffffffffffff) && (uVar1 <= 0x3ffffffffffffffe - (uVar1 >> 1))) &&
     (local_40 = (uVar1 >> 1) + uVar1, local_40 < uVar3)) {
    local_40 = uVar3;
  }
  lVar2 = FUN_140274b1e(param_1,&local_40);
  param_1[2] = param_3;
  param_1[3] = local_40;
  FUN_1404b97c0(lVar2,param_2,param_3 * 4);
  *(undefined4 *)(lVar2 + param_3 * 4) = 0;
  if (3 < uVar1) {
    FUN_140273000(param_1,*param_1,uVar1);
  }
  *param_1 = lVar2;
  if (ram0x000140613b10 != (local_38 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_14044aba0(local_38 ^ (ulonglong)auStack_68);
  }
  return param_1;
}

