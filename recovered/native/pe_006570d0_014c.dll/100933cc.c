/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100933cc */

undefined4 __fastcall FUN_100933cc(int param_1)

{
  short sVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if (*(int *)(param_1 + 0x48) == -1) goto LAB_100934bc;
  uVar4 = *(uint *)(param_1 + 0x38);
  if ((short)uVar4 < 0) {
    cVar3 = FUN_100935d0(*(undefined2 *)(param_1 + 0x4e));
    if (cVar3 == '\0') {
      uVar4 = *(uint *)(param_1 + 0x38);
      goto LAB_100933f8;
    }
LAB_100934a1:
    FUN_1009301c();
  }
  else {
LAB_100933f8:
    if (((uVar4 >> 0xe & 1) != 0) &&
       (cVar3 = FUN_10093604(*(undefined2 *)(param_1 + 0x4e)), cVar3 != '\0')) goto LAB_100934a1;
    sVar1 = *(short *)(param_1 + 0x4e);
    uVar4 = *(uint *)(param_1 + 0x38);
    if (sVar1 == 0x78) {
      if ((uVar4 >> 0xb & 1) == 0) goto LAB_10093462;
      FUN_1009301c();
      uVar5 = 2;
LAB_1009348e:
      FUN_1009362c(uVar5);
    }
    else {
      if (sVar1 == 0x75) {
        if ((uVar4 >> 10 & 1) != 0) {
          FUN_1009301c();
          uVar5 = 4;
          goto LAB_1009348e;
        }
      }
      else if ((sVar1 == 99) && ((uVar4 >> 0x11 & 1) != 0)) {
        FUN_1009301c();
        uVar2 = *(ushort *)(param_1 + 0x4e);
        if (uVar2 < 0x61) {
          if ((ushort)(uVar2 - 0x5b) < 0xffe6) goto LAB_100934bc;
        }
        else if (0x7a < uVar2) goto LAB_100934bc;
        *(uint *)(param_1 + 0x44) = uVar2 & 0x1f;
        goto LAB_100934a1;
      }
LAB_10093462:
      if (((uVar4 >> 0xc & 1) == 0) || (cVar3 = FUN_10093650(), cVar3 == '\0')) {
        uVar5 = FUN_10093670();
        return uVar5;
      }
      if (*(int *)(param_1 + 0x44) == 0) goto LAB_100934bc;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x44);
  *(short *)(param_1 + 0x50) = (short)uVar4;
  if (uVar4 < 0x10000) {
    return CONCAT31((int3)(uVar4 >> 8),1);
  }
LAB_100934bc:
                    /* WARNING: Subroutine does not return */
  FUN_1001d9e4(2);
}

