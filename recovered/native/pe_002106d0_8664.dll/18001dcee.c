/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001dcee */

undefined8 FUN_18001dcee(longlong param_1,undefined4 param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x70) == -1) goto LAB_18001ddfe;
  uVar3 = (uint)*(undefined8 *)(param_1 + 0x60);
  if ((short)*(undefined8 *)(param_1 + 0x60) < 0) {
    cVar2 = FUN_18001df36(param_1,*(undefined1 *)(param_1 + 0x75));
    if (cVar2 == '\0') {
      uVar3 = (uint)*(undefined8 *)(param_1 + 0x60);
      goto LAB_18001dd23;
    }
LAB_18001dde0:
    FUN_18001d674(param_1);
  }
  else {
LAB_18001dd23:
    if (((uVar3 >> 0xe & 1) != 0) &&
       (cVar2 = FUN_18001df60(param_1,*(undefined1 *)(param_1 + 0x75)), cVar2 != '\0'))
    goto LAB_18001dde0;
    cVar2 = *(char *)(param_1 + 0x75);
    uVar3 = (uint)*(undefined8 *)(param_1 + 0x60);
    if (cVar2 == 'x') {
      if ((uVar3 >> 0xb & 1) == 0) goto LAB_18001dd95;
      FUN_18001d674(param_1);
      uVar4 = 2;
LAB_18001ddcf:
      FUN_18001df82(param_1,uVar4);
    }
    else {
      if (cVar2 == 'u') {
        if ((uVar3 >> 10 & 1) != 0) {
          FUN_18001d674(param_1);
          uVar4 = 4;
          goto LAB_18001ddcf;
        }
      }
      else if ((cVar2 == 'c') && ((uVar3 >> 0x11 & 1) != 0)) {
        FUN_18001d674(param_1);
        bVar1 = *(byte *)(param_1 + 0x75);
        if (bVar1 < 0x61) {
          if ((byte)(bVar1 + 0xa5) < 0xe6) goto LAB_18001ddfe;
        }
        else if (0x7a < bVar1) goto LAB_18001ddfe;
        *(uint *)(param_1 + 0x6c) = bVar1 & 0x1f;
        goto LAB_18001dde0;
      }
LAB_18001dd95:
      if (((uVar3 >> 0xc & 1) == 0) || (cVar2 = FUN_18001dfba(param_1), cVar2 == '\0')) {
        uVar4 = FUN_18001dfe4(param_1,param_2);
        return uVar4;
      }
      if (*(int *)(param_1 + 0x6c) == 0) goto LAB_18001ddfe;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x6c);
  *(char *)(param_1 + 0x76) = (char)uVar3;
  if (uVar3 < 0x100) {
    return CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
  }
LAB_18001ddfe:
                    /* WARNING: Subroutine does not return */
  FUN_18001d772(param_1,2);
}

