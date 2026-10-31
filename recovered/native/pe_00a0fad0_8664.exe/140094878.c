/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140094878 */

void FUN_140094878(longlong param_1)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined2 uVar4;
  uint uVar5;
  
  if ((*(uint *)(param_1 + 0x60) & 0x80080) != 0) {
    iVar2 = *(ushort *)(param_1 + 0x76) - 0x30;
    if ((ushort)iVar2 < 10) {
      *(int *)(param_1 + 0x6c) = iVar2;
      FUN_14009474c(param_1);
      uVar3 = *(ulonglong *)(param_1 + 0x60);
      uVar5 = *(uint *)(param_1 + 0x6c);
      if ((uVar5 == 0 & (byte)(uVar3 >> 0x13)) != 1) {
        if (-1 < (char)uVar3) {
          return;
        }
        if (((uint)uVar3 >> 8 & 1) == 0) {
          FUN_140094d2a(param_1,3);
          uVar5 = *(uint *)(param_1 + 0x6c);
        }
        if (uVar5 != 0) {
          uVar3 = (ulonglong)(int)uVar5;
          if (((uVar3 <= *(uint *)(param_1 + 0x10)) && (uVar3 < *(ulonglong *)(param_1 + 0x30))) &&
             ((*(uint *)(*(longlong *)(param_1 + 0x18) + (uVar3 >> 5) * 4) >> (uVar5 & 0x1f) & 1) !=
              0)) {
            FUN_140094d50(param_1 + 0x38,uVar5);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_14009484e(param_1,3);
        }
        goto LAB_140094971;
      }
      if ((ushort)(*(short *)(param_1 + 0x76) - 0x30U) < 10) goto LAB_140094971;
      uVar4 = 0;
      goto LAB_1400948f7;
    }
    *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  }
  cVar1 = FUN_140094dda(param_1,0);
  if (cVar1 == '\0') {
    if (((*(byte *)(param_1 + 0x62) & 1) != 0) && (cVar1 = FUN_140094efe(param_1,1), cVar1 != '\0'))
    {
      return;
    }
LAB_140094971:
                    /* WARNING: Subroutine does not return */
    FUN_14009484e(param_1,2);
  }
  uVar4 = *(undefined2 *)(param_1 + 0x78);
LAB_1400948f7:
  FUN_140094ac8(param_1 + 0x38,uVar4);
  return;
}

