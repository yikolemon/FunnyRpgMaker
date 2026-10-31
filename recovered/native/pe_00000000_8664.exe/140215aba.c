/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140215aba */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140215aba(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined2 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = ram0x000140613b10 ^ (ulonglong)auStack_68;
  lVar1 = param_1[2];
  if (0x7ffffffffffffffeU - lVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140212875();
  }
  uVar2 = param_1[3];
  uVar5 = param_2 + lVar1 | 7;
  local_48 = 0x7ffffffffffffffe;
  if (((uVar5 < 0x7fffffffffffffff) && (uVar2 <= 0x7ffffffffffffffe - (uVar2 >> 1))) &&
     (local_48 = (uVar2 >> 1) + uVar2, local_48 < uVar5)) {
    local_48 = uVar5;
  }
  lVar4 = FUN_140212886(param_1,&local_48);
  param_1[2] = param_2 + lVar1;
  param_1[3] = local_48;
  if (uVar2 < 8) {
    FUN_1404b97c0(lVar4,param_1,lVar1 * 2);
    *(undefined2 *)(lVar4 + lVar1 * 2) = param_4;
    *(undefined2 *)(lVar4 + 2 + lVar1 * 2) = 0;
  }
  else {
    lVar3 = *param_1;
    FUN_1404b97c0(lVar4,lVar3,lVar1 * 2);
    *(undefined2 *)(lVar4 + lVar1 * 2) = param_4;
    *(undefined2 *)(lVar4 + 2 + lVar1 * 2) = 0;
    FUN_140212bec(param_1,lVar3,uVar2);
  }
  *param_1 = lVar4;
  if (ram0x000140613b10 != (local_40 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_14044aba0(local_40 ^ (ulonglong)auStack_68);
  }
  return param_1;
}

