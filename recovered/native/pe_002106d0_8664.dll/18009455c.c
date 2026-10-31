/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009455c */

void FUN_18009455c(longlong param_1)

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
      FUN_180094520(param_1);
      uVar3 = *(ulonglong *)(param_1 + 0x60);
      uVar5 = *(uint *)(param_1 + 0x6c);
      if ((uVar5 == 0 & (byte)(uVar3 >> 0x13)) != 1) {
        if (-1 < (char)uVar3) {
          return;
        }
        if (((uint)uVar3 >> 8 & 1) == 0) {
          FUN_180094978(param_1,3);
          uVar5 = *(uint *)(param_1 + 0x6c);
        }
        if (uVar5 != 0) {
          uVar3 = (ulonglong)(int)uVar5;
          if (((uVar3 <= *(uint *)(param_1 + 0x10)) && (uVar3 < *(ulonglong *)(param_1 + 0x30))) &&
             ((*(uint *)(*(longlong *)(param_1 + 0x18) + (uVar3 >> 5) * 4) >> (uVar5 & 0x1f) & 1) !=
              0)) {
            FUN_18001dc64(param_1 + 0x38,uVar5);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_18001d772(param_1,3);
        }
        goto LAB_180094655;
      }
      if ((ushort)(*(short *)(param_1 + 0x76) - 0x30U) < 10) goto LAB_180094655;
      uVar4 = 0;
      goto LAB_1800945db;
    }
    *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  }
  cVar1 = FUN_18009499e(param_1,0);
  if (cVar1 == '\0') {
    if (((*(byte *)(param_1 + 0x62) & 1) != 0) && (cVar1 = FUN_180094ac2(param_1,1), cVar1 != '\0'))
    {
      return;
    }
LAB_180094655:
                    /* WARNING: Subroutine does not return */
    FUN_18001d772(param_1,2);
  }
  uVar4 = *(undefined2 *)(param_1 + 0x78);
LAB_1800945db:
  FUN_1800947a2(param_1 + 0x38,uVar4);
  return;
}

