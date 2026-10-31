/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001d79c */

void FUN_18001d79c(longlong param_1)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  uint uVar5;
  
  if ((*(uint *)(param_1 + 0x60) & 0x80080) != 0) {
    bVar1 = *(char *)(param_1 + 0x75) - 0x30;
    if (bVar1 < 10) {
      *(uint *)(param_1 + 0x6c) = (uint)bVar1;
      FUN_18001d674(param_1);
      uVar3 = *(ulonglong *)(param_1 + 0x60);
      uVar5 = *(uint *)(param_1 + 0x6c);
      if ((uVar5 == 0 & (byte)(uVar3 >> 0x13)) != 1) {
        if (-1 < (char)uVar3) {
          return;
        }
        if (((uint)uVar3 >> 8 & 1) == 0) {
          FUN_18001dc3e(param_1,3);
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
        goto LAB_18001d88f;
      }
      if ((byte)(*(char *)(param_1 + 0x75) - 0x30U) < 10) goto LAB_18001d88f;
      uVar4 = 0;
      goto LAB_18001d815;
    }
    *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  }
  cVar2 = FUN_18001dcee(param_1,0);
  if (cVar2 == '\0') {
    if (((*(byte *)(param_1 + 0x62) & 1) != 0) && (cVar2 = FUN_18001de0c(param_1,1), cVar2 != '\0'))
    {
      return;
    }
LAB_18001d88f:
                    /* WARNING: Subroutine does not return */
    FUN_18001d772(param_1,2);
  }
  uVar4 = *(undefined1 *)(param_1 + 0x76);
LAB_18001d815:
  FUN_18001d9e6(param_1 + 0x38,uVar4);
  return;
}

