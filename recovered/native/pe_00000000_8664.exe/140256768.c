/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140256768 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short * FUN_140256768(short *param_1,short *param_2,longlong *param_3)

{
  short sVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = ram0x000140613b10 ^ (ulonglong)auStack_48;
  sVar1 = *param_1;
  if ((sVar1 == 0x7d) || (sVar1 == 0x3a)) {
    uVar2 = *(ulonglong *)(*param_3 + 0x18);
    if ((longlong)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14021738c("isplaySize: %.2f,%.2f");
    }
    *(ulonglong *)(*param_3 + 0x18) = uVar2 + 1;
LAB_140256801:
    param_3[1] = uVar2;
    if (ram0x000140613b10 == (local_18 ^ (ulonglong)auStack_48)) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_14044aba0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((ushort)(sVar1 - 0x30U) < 10) {
    local_1c = 0;
    if (sVar1 == 0x30) {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = (short *)FUN_1402574af(param_1,param_2,&local_1c);
    }
    if ((param_1 != param_2) && ((*param_1 == 0x3a || (*param_1 == 0x7d)))) {
      if (0 < *(longlong *)(*param_3 + 0x18)) {
                    /* WARNING: Subroutine does not return */
        FUN_14021738c("cing: %.2f,%.2f");
      }
      uVar2 = (ulonglong)local_1c;
      *(undefined8 *)(*param_3 + 0x18) = 0xffffffffffffffff;
      goto LAB_140256801;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_14021738c("ne.");
}

