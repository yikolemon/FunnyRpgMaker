/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001dec4 */

undefined4 __fastcall FUN_1001dec4(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x48) == -1) goto LAB_1001dfb2;
  uVar3 = *(uint *)(param_1 + 0x38);
  if ((short)uVar3 < 0) {
    cVar2 = FUN_1001e0c6((int)*(char *)(param_1 + 0x4d));
    if (cVar2 == '\0') {
      uVar3 = *(uint *)(param_1 + 0x38);
      goto LAB_1001def0;
    }
LAB_1001df98:
    FUN_1001d8ea();
  }
  else {
LAB_1001def0:
    if (((uVar3 >> 0xe & 1) != 0) &&
       (cVar2 = FUN_1001e0f4((int)*(char *)(param_1 + 0x4d)), cVar2 != '\0')) goto LAB_1001df98;
    cVar2 = *(char *)(param_1 + 0x4d);
    uVar3 = *(uint *)(param_1 + 0x38);
    if (cVar2 == 'x') {
      if ((uVar3 >> 0xb & 1) == 0) goto LAB_1001df5b;
      FUN_1001d8ea();
      uVar4 = 2;
LAB_1001df87:
      FUN_1001e11c(uVar4);
    }
    else {
      if (cVar2 == 'u') {
        if ((uVar3 >> 10 & 1) != 0) {
          FUN_1001d8ea();
          uVar4 = 4;
          goto LAB_1001df87;
        }
      }
      else if ((cVar2 == 'c') && ((uVar3 >> 0x11 & 1) != 0)) {
        FUN_1001d8ea();
        bVar1 = *(byte *)(param_1 + 0x4d);
        if (bVar1 < 0x61) {
          if ((byte)(bVar1 + 0xa5) < 0xe6) goto LAB_1001dfb2;
        }
        else if (0x7a < bVar1) goto LAB_1001dfb2;
        *(uint *)(param_1 + 0x44) = bVar1 & 0x1f;
        goto LAB_1001df98;
      }
LAB_1001df5b:
      if (((uVar3 >> 0xc & 1) == 0) || (cVar2 = FUN_1001e140(), cVar2 == '\0')) {
        uVar4 = FUN_1001e160();
        return uVar4;
      }
      if (*(int *)(param_1 + 0x44) == 0) goto LAB_1001dfb2;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x44);
  *(char *)(param_1 + 0x4e) = (char)uVar3;
  if (uVar3 < 0x100) {
    return CONCAT31((int3)(uVar3 >> 8),1);
  }
LAB_1001dfb2:
                    /* WARNING: Subroutine does not return */
  FUN_1001d9e4(2);
}

