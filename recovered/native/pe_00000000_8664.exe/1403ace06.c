/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403ace06 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403ace06(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = ram0x000140613b10 ^ (ulonglong)auStack_38;
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
  uVar2 = 0xc;
  if (DAT_1405388d0 <= fVar1) {
    uVar2 = 0;
  }
  local_18 = 8;
  if (DAT_1405388d4 <= fVar1) {
    local_18 = uVar2;
  }
  local_10 = param_2;
  FUN_1403a4b40(DAT_1405388d4,&local_10,fVar1 * DAT_1404efc60,param_3);
  if (ram0x000140613b10 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_8 ^ (ulonglong)auStack_38);
}

