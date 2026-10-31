/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140274a52 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140274a52(undefined8 *param_1,undefined4 *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = ram0x000140613b10 ^ (ulonglong)auStack_58;
  if (0x3ffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_140212875();
  }
  if (param_3 < 4) {
    param_1[2] = param_3;
    param_1[3] = 3;
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *(undefined4 *)param_1 = *param_2;
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
    *(undefined4 *)(param_1 + 1) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  }
  else {
    local_30 = param_3 | 3;
    if (0x3ffffffffffffffd < local_30) {
      local_30 = 0x3ffffffffffffffe;
    }
    uVar4 = FUN_140274b1e(param_1,&local_30);
    *param_1 = uVar4;
    param_1[2] = param_3;
    param_1[3] = local_30;
    FUN_1404b97c0(uVar4,param_2,param_3 * 4 + 4);
  }
  if (ram0x000140613b10 == (local_28 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_28 ^ (ulonglong)auStack_58);
}

