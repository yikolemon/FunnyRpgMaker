/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140095cb0 */

undefined8 FUN_140095cb0(longlong param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar4 = *(ulonglong *)(param_1 + 0x60) >> 0xd & 0x7ffff;
  if ((*(ushort *)(param_1 + 0x76) == 0x62 & (byte)uVar4) == 1) {
    FUN_14009474c(param_1);
    uVar2 = 8;
LAB_140095d1d:
    *(undefined2 *)(param_1 + 0x78) = uVar2;
  }
  else {
    if ((*(ulonglong *)(param_1 + 0x60) & 0x80080) != 0) {
      iVar3 = *(ushort *)(param_1 + 0x76) - 0x30;
      if ((ushort)iVar3 < 10) {
        *(int *)(param_1 + 0x6c) = iVar3;
        FUN_14009474c(param_1);
        if ((((*(byte *)(param_1 + 0x62) & 8) == 0) || (*(int *)(param_1 + 0x6c) != 0)) ||
           ((ushort)(*(short *)(param_1 + 0x76) - 0x30U) < 10)) goto LAB_140095d65;
        uVar2 = 0;
        goto LAB_140095d1d;
      }
      *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
    }
    cVar1 = FUN_140094dda(param_1,CONCAT71((int7)(uVar4 >> 8),1));
    if (cVar1 == '\0') {
      if (((*(byte *)(param_1 + 0x62) & 1) != 0) &&
         (cVar1 = FUN_140094efe(param_1,0), cVar1 != '\0')) {
        return 2;
      }
LAB_140095d65:
                    /* WARNING: Subroutine does not return */
      FUN_14009484e(param_1,2);
    }
  }
  return 1;
}

