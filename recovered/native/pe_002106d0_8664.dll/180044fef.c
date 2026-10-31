/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180044fef */

short * FUN_180044fef(longlong param_1,short *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  short *psVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_58;
  psVar4 = (short *)(param_1 + 2);
  if (psVar4 == param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_180005ebc("Invalid format string.");
  }
  if (*psVar4 == 0x7b) {
    puVar1 = *(undefined8 **)(param_3 + 0x20);
    lVar2 = puVar1[2];
    uVar3 = lVar2 + 1;
    if ((ulonglong)puVar1[3] < uVar3) {
      (**(code **)*puVar1)(puVar1);
      lVar2 = puVar1[2];
      uVar3 = lVar2 + 1;
    }
    puVar1[2] = uVar3;
    *(undefined2 *)(puVar1[1] + lVar2 * 2) = 0x7b;
    *(undefined8 **)(param_3 + 0x20) = puVar1;
  }
  else {
    if (*psVar4 == 0x7d) {
      lVar2 = *(longlong *)(param_3 + 0x18);
      if (lVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180005ebc("Can not switch from manual to automatic indexing");
      }
      *(longlong *)(param_3 + 0x18) = lVar2 + 1;
    }
    else {
      local_28 = -1;
      local_30 = param_3;
      psVar4 = (short *)FUN_180045298(psVar4);
      if (psVar4 == param_2) {
LAB_180045119:
                    /* WARNING: Subroutine does not return */
        FUN_180005ebc("Missing \'}\' in format string.");
      }
      if (*psVar4 == 0x3a) {
        psVar4 = (short *)FUN_180045386(param_3,local_28,psVar4 + 1,param_2);
        if ((psVar4 == param_2) || (*psVar4 != 0x7d)) {
                    /* WARNING: Subroutine does not return */
          FUN_180005ebc("Unknown format specifier.");
        }
        goto LAB_1800450dd;
      }
      lVar2 = local_28;
      if (*psVar4 != 0x7d) goto LAB_180045119;
    }
    FUN_1800451cc(param_3,lVar2,psVar4);
  }
LAB_1800450dd:
  if (DAT_180402640 != (local_20 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_20 ^ (ulonglong)auStack_58);
  }
  return psVar4 + 1;
}

