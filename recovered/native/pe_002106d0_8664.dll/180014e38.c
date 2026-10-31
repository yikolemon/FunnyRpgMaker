/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180014e38 */

void FUN_180014e38(char *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  if (*param_1 == '\0') {
    local_20 = *(ulonglong *)(param_1 + 0x48);
    uVar1 = (uint)(local_20 >> 3) & 0x3f;
    FUN_180014db0(param_1,&DAT_1802b0760,((ulonglong)(0x37 < uVar1) << 6 | 0x38) - (ulonglong)uVar1)
    ;
    FUN_180014db0(param_1,&local_20,8);
    lVar2 = 0x14;
    do {
      *(undefined4 *)(param_1 + lVar2 * 4 + 0x10) = *(undefined4 *)(param_1 + lVar2 * 4);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x18);
    thunk_FUN_1802a89a0(param_1 + 1,0,0x40);
    param_1[0x48] = '\0';
    param_1[0x49] = '\0';
    param_1[0x4a] = '\0';
    param_1[0x4b] = '\0';
    param_1[0x4c] = '\0';
    param_1[0x4d] = '\0';
    param_1[0x4e] = '\0';
    param_1[0x4f] = '\0';
    *param_1 = '\x01';
  }
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
}

