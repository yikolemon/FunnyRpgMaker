/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001da06 */

void __fastcall FUN_1001da06(int param_1)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  
  if ((*(uint *)(param_1 + 0x38) & 0x80080) != 0) {
    bVar2 = *(char *)(param_1 + 0x4d) - 0x30;
    if (bVar2 < 10) {
      *(uint *)(param_1 + 0x44) = (uint)bVar2;
      FUN_1001d8ea();
      uVar1 = *(uint *)(param_1 + 0x38);
      uVar4 = *(uint *)(param_1 + 0x44);
      if ((uVar4 == 0 & (byte)(uVar1 >> 0x13)) != 1) {
        if (-1 < (char)uVar1) {
          return;
        }
        if ((uVar1 >> 8 & 1) == 0) {
          FUN_1001de0a(3,uVar4);
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
        goto LAB_1001dad3;
      }
      if ((byte)(*(char *)(param_1 + 0x4d) - 0x30U) < 10) goto LAB_1001dad3;
      iVar5 = 0;
      goto LAB_1001da74;
    }
    *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  }
  cVar3 = FUN_1001dec4(0);
  if (cVar3 == '\0') {
    if (((*(byte *)(param_1 + 0x3a) & 1) != 0) && (cVar3 = FUN_1001dfbc(1), cVar3 != '\0')) {
      return;
    }
LAB_1001dad3:
                    /* WARNING: Subroutine does not return */
    FUN_1001d9e4(2);
  }
  iVar5 = (int)*(char *)(param_1 + 0x4e);
LAB_1001da74:
  FUN_1001dbdc(iVar5);
  return;
}

