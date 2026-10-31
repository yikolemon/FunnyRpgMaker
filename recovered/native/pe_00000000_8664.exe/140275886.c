/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140275886 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140275886(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  ulonglong local_40;
  
  plVar1 = (longlong *)param_1[2];
  if (plVar1 < (longlong *)param_1[3]) {
    param_1[2] = (longlong)plVar1 + 1;
    if ((longlong *)0x3 < (longlong *)param_1[3]) {
      param_1 = (longlong *)*param_1;
    }
    *(undefined4 *)((longlong)param_1 + (longlong)plVar1 * 4) = param_2;
    *(undefined4 *)((longlong)param_1 + (longlong)plVar1 * 4 + 4) = 0;
    return plVar1;
  }
  local_40 = ram0x000140613b10 ^ (ulonglong)auStack_68;
  lVar2 = param_1[2];
  if (lVar2 == 0x3ffffffffffffffe) {
                    /* WARNING: Subroutine does not return */
    FUN_140212875();
  }
  uVar3 = param_1[3];
  uVar6 = lVar2 + 1U | 3;
  local_48 = 0x3ffffffffffffffe;
  if (((uVar6 < 0x3fffffffffffffff) && (uVar3 <= 0x3ffffffffffffffe - (uVar3 >> 1))) &&
     (local_48 = (uVar3 >> 1) + uVar3, local_48 < uVar6)) {
    local_48 = uVar6;
  }
  lVar5 = FUN_140274b1e(param_1,&local_48);
  param_1[2] = lVar2 + 1U;
  param_1[3] = local_48;
  if (uVar3 < 4) {
    FUN_1404b97c0(lVar5,param_1,lVar2 * 4);
    *(undefined4 *)(lVar5 + lVar2 * 4) = param_2;
    *(undefined4 *)(lVar5 + 4 + lVar2 * 4) = 0;
  }
  else {
    lVar4 = *param_1;
    FUN_1404b97c0(lVar5,lVar4,lVar2 * 4);
    *(undefined4 *)(lVar5 + lVar2 * 4) = param_2;
    *(undefined4 *)(lVar5 + 4 + lVar2 * 4) = 0;
    FUN_140273000(param_1,lVar4,uVar3);
  }
  *param_1 = lVar5;
  if (ram0x000140613b10 != (local_40 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_14044aba0(local_40 ^ (ulonglong)auStack_68);
  }
  return param_1;
}

