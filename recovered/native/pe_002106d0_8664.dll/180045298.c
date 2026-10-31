/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180045298 */

short * FUN_180045298(short *param_1,short *param_2,longlong *param_3)

{
  short sVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  sVar1 = *param_1;
  if ((sVar1 == 0x7d) || (sVar1 == 0x3a)) {
    uVar2 = *(ulonglong *)(*param_3 + 0x18);
    if ((longlong)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180005ebc("Can not switch from manual to automatic indexing");
    }
    *(ulonglong *)(*param_3 + 0x18) = uVar2 + 1;
LAB_180045331:
    param_3[1] = uVar2;
    if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_48)) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((ushort)(sVar1 - 0x30U) < 10) {
    local_1c = 0;
    if (sVar1 == 0x30) {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = (short *)FUN_180045fdf(param_1,param_2,&local_1c);
    }
    if ((param_1 != param_2) && ((*param_1 == 0x3a || (*param_1 == 0x7d)))) {
      if (0 < *(longlong *)(*param_3 + 0x18)) {
                    /* WARNING: Subroutine does not return */
        FUN_180005ebc("Can not switch from automatic to manual indexing");
      }
      uVar2 = (ulonglong)local_1c;
      *(undefined8 *)(*param_3 + 0x18) = 0xffffffffffffffff;
      goto LAB_180045331;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_180005ebc("Invalid format string.");
}

