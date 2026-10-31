/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402564bf */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short * FUN_1402564bf(longlong param_1,short *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  short *psVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = ram0x000140613b10 ^ (ulonglong)auStack_58;
  psVar4 = (short *)(param_1 + 2);
  if (psVar4 == param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_14021738c("ne.");
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
        FUN_14021738c("isplaySize: %.2f,%.2f");
      }
      *(longlong *)(param_3 + 0x18) = lVar2 + 1;
    }
    else {
      local_28 = -1;
      local_30 = param_3;
      psVar4 = (short *)FUN_140256768(psVar4);
      if (psVar4 == param_2) {
LAB_1402565e9:
                    /* WARNING: Subroutine does not return */
        FUN_14021738c("elements don\'t have stable identifiers so we need to provide one.");
      }
      if (*psVar4 == 0x3a) {
        psVar4 = (short *)FUN_140256856(param_3,local_28,psVar4 + 1,param_2);
        if ((psVar4 == param_2) || (*psVar4 != 0x7d)) {
                    /* WARNING: Subroutine does not return */
          FUN_14021738c(
                       " clicking outside the scrollbar grab.\nWhen disabled, always scroll to clicked location.\nWhen enabled, Shift+Click scrolls to clicked location."
                       );
        }
        goto LAB_1402565ad;
      }
      lVar2 = local_28;
      if (*psVar4 != 0x7d) goto LAB_1402565e9;
    }
    FUN_14025669c(param_3,lVar2,psVar4);
  }
LAB_1402565ad:
  if (ram0x000140613b10 != (local_20 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_14044aba0(local_20 ^ (ulonglong)auStack_58);
  }
  return psVar4 + 1;
}

