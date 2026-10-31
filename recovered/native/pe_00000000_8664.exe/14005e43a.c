/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005e43a */

undefined8 FUN_14005e43a(longlong param_1,undefined4 param_2)

{
  short sVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  
  if (*(int *)(param_1 + 0x70) == -1) goto LAB_14005e550;
  uVar4 = (uint)*(undefined8 *)(param_1 + 0x60);
  if ((short)*(undefined8 *)(param_1 + 0x60) < 0) {
    cVar3 = FUN_14005e688(param_1,*(undefined2 *)(param_1 + 0x76));
    if (cVar3 == '\0') {
      uVar4 = (uint)*(undefined8 *)(param_1 + 0x60);
      goto LAB_14005e470;
    }
LAB_14005e531:
    FUN_14005ddac(param_1);
  }
  else {
LAB_14005e470:
    if (((uVar4 >> 0xe & 1) != 0) &&
       (cVar3 = FUN_14005e6bc(param_1,*(undefined2 *)(param_1 + 0x76)), cVar3 != '\0'))
    goto LAB_14005e531;
    sVar1 = *(short *)(param_1 + 0x76);
    uVar4 = (uint)*(undefined8 *)(param_1 + 0x60);
    if (sVar1 == 0x78) {
      if ((uVar4 >> 0xb & 1) == 0) goto LAB_14005e4e4;
      FUN_14005ddac(param_1);
      uVar5 = 2;
LAB_14005e51e:
      FUN_14005e6e0(param_1,uVar5);
    }
    else {
      if (sVar1 == 0x75) {
        if ((uVar4 >> 10 & 1) != 0) {
          FUN_14005ddac(param_1);
          uVar5 = 4;
          goto LAB_14005e51e;
        }
      }
      else if ((sVar1 == 99) && ((uVar4 >> 0x11 & 1) != 0)) {
        FUN_14005ddac(param_1);
        uVar2 = *(ushort *)(param_1 + 0x76);
        if (uVar2 < 0x61) {
          if ((ushort)(uVar2 - 0x5b) < 0xffe6) goto LAB_14005e550;
        }
        else if (0x7a < uVar2) goto LAB_14005e550;
        *(uint *)(param_1 + 0x6c) = uVar2 & 0x1f;
        goto LAB_14005e531;
      }
LAB_14005e4e4:
      if (((uVar4 >> 0xc & 1) == 0) || (cVar3 = FUN_14005e718(param_1), cVar3 == '\0')) {
        uVar5 = FUN_14005e742(param_1,param_2);
        return uVar5;
      }
      if (*(int *)(param_1 + 0x6c) == 0) goto LAB_14005e550;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x6c);
  *(short *)(param_1 + 0x78) = (short)uVar4;
  if (uVar4 < 0x10000) {
    return CONCAT71((uint7)(uint3)(uVar4 >> 8),1);
  }
LAB_14005e550:
                    /* WARNING: Subroutine does not return */
  FUN_14005deae(param_1,2);
}

