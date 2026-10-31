/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403ac14c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403ac14c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = ram0x000140613b10 ^ (ulonglong)auStack_48;
  if (((float)s_0123456789abcdefghijklmnopqrstuv_140538870._16_4_ <= *(float *)(param_1 + 0x14)) ||
     ((*(byte *)(param_1 + 0x4f) & 0x10) != 0)) {
    local_1c = 0;
    lVar1 = FUN_1403abe4c(param_1,param_2,&local_1c);
    puVar2 = (undefined4 *)(lVar1 + 4);
    if (lVar1 == 0) {
      puVar2 = &local_1c;
    }
    uVar3 = *puVar2;
  }
  else {
    lVar1 = FUN_1403abe4c(param_1,param_2,0);
    puVar2 = (undefined4 *)(param_1 + 0x10);
    if (lVar1 != 0) {
      puVar2 = (undefined4 *)(lVar1 + 4);
    }
    uVar3 = *puVar2;
  }
  if (ram0x000140613b10 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(uVar3);
}

