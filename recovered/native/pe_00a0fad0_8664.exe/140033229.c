/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140033229 */

longlong FUN_140033229(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  if (param_1 == param_2) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      local_2c = *(int *)(*param_1 + 0x1a8);
      cVar2 = FUN_1400217d0(&local_2c,*(undefined4 *)(*param_1 + 0x1b4));
      if ((((cVar2 == '\0') || (0x1fffffff < local_2c)) &&
          (lVar1 = *param_1, *(longlong *)(lVar1 + 0x40) == *(longlong *)(lVar1 + 0x48))) &&
         (*(longlong *)(lVar1 + 0x28) == *(longlong *)(lVar1 + 0x30))) {
        lVar3 = lVar3 + (ulonglong)*(byte *)(lVar1 + 0x20);
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  if (DAT_1401c9640 == (local_28 ^ (ulonglong)auStack_58)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_28 ^ (ulonglong)auStack_58);
}

