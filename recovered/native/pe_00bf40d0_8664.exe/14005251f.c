/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005251f */

ulonglong FUN_14005251f(char *param_1,uint param_2,longlong *param_3,uint param_4)

{
  char cVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  uVar3 = FUN_140020a41((longlong)param_3,param_4);
  local_2c = (uint)uVar3;
  if (local_2c == 0) {
    cVar1 = FUN_140021246(param_3,&local_2c);
    uVar3 = (ulonglong)local_2c;
    if (local_2c == 0) {
      *param_1 = cVar1;
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      if (cVar1 != '\0') {
        uVar3 = 3;
        if (cVar1 != '\x03') goto LAB_14005256b;
        uVar2 = FUN_140020aa5(param_3,&local_2c);
        uVar3 = (ulonglong)local_2c;
        if ((local_2c != 0) || (uVar3 = 3, uVar2 == 0)) goto LAB_14005256b;
        param_2 = (uint)uVar2 + (uint)uVar2 * 2 + 2;
      }
      *(uint *)(param_1 + 0x10) = param_2;
      uVar3 = FUN_140021039(param_3,param_2,(longlong *)(param_1 + 8));
    }
  }
LAB_14005256b:
  if (DAT_14012ea80 == (local_28 ^ (ulonglong)auStack_58)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_28 ^ (ulonglong)auStack_58);
}

