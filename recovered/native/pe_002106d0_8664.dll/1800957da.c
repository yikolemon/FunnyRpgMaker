/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800957da */

undefined8 FUN_1800957da(longlong param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar4 = *(ulonglong *)(param_1 + 0x60) >> 0xd & 0x7ffff;
  if ((*(ushort *)(param_1 + 0x76) == 0x62 & (byte)uVar4) == 1) {
    FUN_180094520(param_1);
    uVar2 = 8;
LAB_180095847:
    *(undefined2 *)(param_1 + 0x78) = uVar2;
  }
  else {
    if ((*(ulonglong *)(param_1 + 0x60) & 0x80080) != 0) {
      iVar3 = *(ushort *)(param_1 + 0x76) - 0x30;
      if ((ushort)iVar3 < 10) {
        *(int *)(param_1 + 0x6c) = iVar3;
        FUN_180094520(param_1);
        if ((((*(byte *)(param_1 + 0x62) & 8) == 0) || (*(int *)(param_1 + 0x6c) != 0)) ||
           ((ushort)(*(short *)(param_1 + 0x76) - 0x30U) < 10)) goto LAB_18009588f;
        uVar2 = 0;
        goto LAB_180095847;
      }
      *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
    }
    cVar1 = FUN_18009499e(param_1,CONCAT71((int7)(uVar4 >> 8),1));
    if (cVar1 == '\0') {
      if (((*(byte *)(param_1 + 0x62) & 1) != 0) &&
         (cVar1 = FUN_180094ac2(param_1,0), cVar1 != '\0')) {
        return 2;
      }
LAB_18009588f:
                    /* WARNING: Subroutine does not return */
      FUN_18001d772(param_1,2);
    }
  }
  return 1;
}

