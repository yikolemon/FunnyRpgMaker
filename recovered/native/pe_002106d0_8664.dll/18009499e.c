/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009499e */

undefined8 FUN_18009499e(longlong param_1,undefined4 param_2)

{
  short sVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  
  if (*(int *)(param_1 + 0x70) == -1) goto LAB_180094ab4;
  uVar4 = (uint)*(undefined8 *)(param_1 + 0x60);
  if ((short)*(undefined8 *)(param_1 + 0x60) < 0) {
    cVar3 = FUN_180094bec(param_1,*(undefined2 *)(param_1 + 0x76));
    if (cVar3 == '\0') {
      uVar4 = (uint)*(undefined8 *)(param_1 + 0x60);
      goto LAB_1800949d4;
    }
LAB_180094a95:
    FUN_180094520(param_1);
  }
  else {
LAB_1800949d4:
    if (((uVar4 >> 0xe & 1) != 0) &&
       (cVar3 = FUN_180094c20(param_1,*(undefined2 *)(param_1 + 0x76)), cVar3 != '\0'))
    goto LAB_180094a95;
    sVar1 = *(short *)(param_1 + 0x76);
    uVar4 = (uint)*(undefined8 *)(param_1 + 0x60);
    if (sVar1 == 0x78) {
      if ((uVar4 >> 0xb & 1) == 0) goto LAB_180094a48;
      FUN_180094520(param_1);
      uVar5 = 2;
LAB_180094a82:
      FUN_180094c44(param_1,uVar5);
    }
    else {
      if (sVar1 == 0x75) {
        if ((uVar4 >> 10 & 1) != 0) {
          FUN_180094520(param_1);
          uVar5 = 4;
          goto LAB_180094a82;
        }
      }
      else if ((sVar1 == 99) && ((uVar4 >> 0x11 & 1) != 0)) {
        FUN_180094520(param_1);
        uVar2 = *(ushort *)(param_1 + 0x76);
        if (uVar2 < 0x61) {
          if ((ushort)(uVar2 - 0x5b) < 0xffe6) goto LAB_180094ab4;
        }
        else if (0x7a < uVar2) goto LAB_180094ab4;
        *(uint *)(param_1 + 0x6c) = uVar2 & 0x1f;
        goto LAB_180094a95;
      }
LAB_180094a48:
      if (((uVar4 >> 0xc & 1) == 0) || (cVar3 = FUN_180094c7c(param_1), cVar3 == '\0')) {
        uVar5 = FUN_180094ca6(param_1,param_2);
        return uVar5;
      }
      if (*(int *)(param_1 + 0x6c) == 0) goto LAB_180094ab4;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x6c);
  *(short *)(param_1 + 0x78) = (short)uVar4;
  if (uVar4 < 0x10000) {
    return CONCAT71((uint7)(uint3)(uVar4 >> 8),1);
  }
LAB_180094ab4:
                    /* WARNING: Subroutine does not return */
  FUN_18001d772(param_1,2);
}

