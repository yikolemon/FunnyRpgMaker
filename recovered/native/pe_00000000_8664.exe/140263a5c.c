/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140263a5c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140263a5c(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = ram0x000140613b10 ^ (ulonglong)auStack_48;
  uVar1 = param_1[3];
  lVar2 = (uVar1 >> 5) * 4 + *param_1;
  uVar3 = (longlong)uVar1 >> 0x3f & 0xe000000000000000;
  uVar1 = (ulonglong)((uint)uVar1 & 0x1f);
  local_10 = uVar1 - 1;
  local_18 = lVar2 + uVar3 + (uVar1 - 1 >> 5) * 4;
  if (uVar1 == 0) {
    local_18 = (uVar3 - 4) + lVar2;
    local_10 = 0x1f;
  }
  FUN_140266940(param_1,local_28);
  if (ram0x000140613b10 == (local_8 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_8 ^ (ulonglong)auStack_48);
}

