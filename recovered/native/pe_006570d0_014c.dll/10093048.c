/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10093048 */

void __fastcall FUN_10093048(int param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined2 uVar5;
  
  if ((*(uint *)(param_1 + 0x38) & 0x80080) != 0) {
    iVar3 = *(ushort *)(param_1 + 0x4e) - 0x30;
    if ((ushort)iVar3 < 10) {
      *(int *)(param_1 + 0x44) = iVar3;
      FUN_1009301c();
      uVar1 = *(uint *)(param_1 + 0x38);
      uVar4 = *(uint *)(param_1 + 0x44);
      if ((uVar4 == 0 & (byte)(uVar1 >> 0x13)) != 1) {
        if (-1 < (char)uVar1) {
          return;
        }
        if ((uVar1 >> 8 & 1) == 0) {
          FUN_100933ac(3,uVar4);
          uVar4 = *(uint *)(param_1 + 0x44);
        }
        if (uVar4 != 0) {
          if (((uVar4 <= *(uint *)(param_1 + 8)) && (uVar4 < *(uint *)(param_1 + 0x1c))) &&
             ((*(uint *)(*(int *)(param_1 + 0x10) + (uVar4 >> 5) * 4) >> (uVar4 & 0x1f) & 1) != 0))
          {
            FUN_1001de2a(uVar4);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_1001d9e4(3);
        }
        goto LAB_1009311a;
      }
      if ((ushort)(*(short *)(param_1 + 0x4e) - 0x30U) < 10) goto LAB_1009311a;
      uVar5 = 0;
      goto LAB_100930bb;
    }
    *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  }
  cVar2 = FUN_100933cc(0);
  if (cVar2 == '\0') {
    if (((*(byte *)(param_1 + 0x3a) & 1) != 0) && (cVar2 = FUN_100934c6(1), cVar2 != '\0')) {
      return;
    }
LAB_1009311a:
                    /* WARNING: Subroutine does not return */
    FUN_1001d9e4(2);
  }
  uVar5 = *(undefined2 *)(param_1 + 0x50);
LAB_100930bb:
  FUN_1009321a(uVar5);
  return;
}

