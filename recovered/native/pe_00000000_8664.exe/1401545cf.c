/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401545cf */

ulonglong FUN_1401545cf(char *param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  uVar3 = FUN_14012d612(param_3,param_4);
  local_2c = (uint)uVar3;
  if (local_2c == 0) {
    cVar1 = FUN_14012de17(param_3,&local_2c);
    uVar3 = (ulonglong)local_2c;
    if (local_2c == 0) {
      *param_1 = cVar1;
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      if (cVar1 != '\0') {
        uVar3 = 3;
        if (cVar1 != '\x03') goto LAB_14015461b;
        uVar2 = FUN_14012d676(param_3,&local_2c);
        uVar3 = (ulonglong)local_2c;
        if ((local_2c != 0) || (uVar3 = 3, uVar2 == 0)) goto LAB_14015461b;
        param_2 = (uint)uVar2 + (uint)uVar2 * 2 + 2;
      }
      *(int *)(param_1 + 0x10) = param_2;
      uVar3 = FUN_14012dc0a(param_3,param_2,param_1 + 8);
    }
  }
LAB_14015461b:
  if (DAT_140f17b40 == (local_28 ^ (ulonglong)auStack_58)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_28 ^ (ulonglong)auStack_58);
}

