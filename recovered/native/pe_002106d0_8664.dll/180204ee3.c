/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180204ee3 */

ulonglong FUN_180204ee3(char *param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_58;
  uVar3 = FUN_1801ce63e(param_3,param_4);
  local_2c = (uint)uVar3;
  if (local_2c == 0) {
    cVar1 = FUN_1801cee43(param_3,&local_2c);
    uVar3 = (ulonglong)local_2c;
    if (local_2c == 0) {
      *param_1 = cVar1;
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      if (cVar1 != '\0') {
        uVar3 = 3;
        if (cVar1 != '\x03') goto LAB_180204f2f;
        uVar2 = FUN_1801ce6a2(param_3,&local_2c);
        uVar3 = (ulonglong)local_2c;
        if ((local_2c != 0) || (uVar3 = 3, uVar2 == 0)) goto LAB_180204f2f;
        param_2 = (uint)uVar2 + (uint)uVar2 * 2 + 2;
      }
      *(int *)(param_1 + 0x10) = param_2;
      uVar3 = FUN_1801cec36(param_3,param_2,param_1 + 8);
    }
  }
LAB_180204f2f:
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_58)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_58);
}

