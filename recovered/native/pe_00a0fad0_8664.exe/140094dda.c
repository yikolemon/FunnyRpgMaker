/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140094dda */

undefined8 FUN_140094dda(longlong param_1,undefined4 param_2)

{
  short sVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  
  if (*(int *)(param_1 + 0x70) == -1) goto LAB_140094ef0;
  uVar4 = (uint)*(undefined8 *)(param_1 + 0x60);
  if ((short)*(undefined8 *)(param_1 + 0x60) < 0) {
    cVar3 = FUN_140095028(param_1,*(undefined2 *)(param_1 + 0x76));
    if (cVar3 == '\0') {
      uVar4 = (uint)*(undefined8 *)(param_1 + 0x60);
      goto LAB_140094e10;
    }
LAB_140094ed1:
    FUN_14009474c(param_1);
  }
  else {
LAB_140094e10:
    if (((uVar4 >> 0xe & 1) != 0) &&
       (cVar3 = FUN_14009505c(param_1,*(undefined2 *)(param_1 + 0x76)), cVar3 != '\0'))
    goto LAB_140094ed1;
    sVar1 = *(short *)(param_1 + 0x76);
    uVar4 = (uint)*(undefined8 *)(param_1 + 0x60);
    if (sVar1 == 0x78) {
      if ((uVar4 >> 0xb & 1) == 0) goto LAB_140094e84;
      FUN_14009474c(param_1);
      uVar5 = 2;
LAB_140094ebe:
      FUN_140095080(param_1,uVar5);
    }
    else {
      if (sVar1 == 0x75) {
        if ((uVar4 >> 10 & 1) != 0) {
          FUN_14009474c(param_1);
          uVar5 = 4;
          goto LAB_140094ebe;
        }
      }
      else if ((sVar1 == 99) && ((uVar4 >> 0x11 & 1) != 0)) {
        FUN_14009474c(param_1);
        uVar2 = *(ushort *)(param_1 + 0x76);
        if (uVar2 < 0x61) {
          if ((ushort)(uVar2 - 0x5b) < 0xffe6) goto LAB_140094ef0;
        }
        else if (0x7a < uVar2) goto LAB_140094ef0;
        *(uint *)(param_1 + 0x6c) = uVar2 & 0x1f;
        goto LAB_140094ed1;
      }
LAB_140094e84:
      if (((uVar4 >> 0xc & 1) == 0) || (cVar3 = FUN_1400950b8(param_1), cVar3 == '\0')) {
        uVar5 = FUN_1400950e2(param_1,param_2);
        return uVar5;
      }
      if (*(int *)(param_1 + 0x6c) == 0) goto LAB_140094ef0;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x6c);
  *(short *)(param_1 + 0x78) = (short)uVar4;
  if (uVar4 < 0x10000) {
    return CONCAT71((uint7)(uint3)(uVar4 >> 8),1);
  }
LAB_140094ef0:
                    /* WARNING: Subroutine does not return */
  FUN_14009484e(param_1,2);
}

