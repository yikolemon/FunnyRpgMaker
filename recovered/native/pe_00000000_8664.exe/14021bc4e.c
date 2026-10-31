/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14021bc4e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14021bc4e(undefined4 *param_1)

{
  ulonglong uVar1;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = ram0x000140613b10 ^ (ulonglong)auStack_58;
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  local_18 = *(undefined8 *)(param_1 + 4);
  uVar1 = FUN_14021bcf9(&local_29);
  if ((uVar1 & 0xffffffff80000000) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14021738c("able ImGuiTableFlags_NoKeepColumnsVisible.");
  }
  if (ram0x000140613b10 == (local_8 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_8 ^ (ulonglong)auStack_58);
}

