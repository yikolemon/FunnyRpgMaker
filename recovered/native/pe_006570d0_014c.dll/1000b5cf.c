/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000b5cf */

undefined8 FUN_1000b5cf(byte *param_1,byte *param_2,uint *param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  
  bVar1 = *param_1;
  uVar5 = (uint)bVar1;
  *param_3 = uVar5;
  if ((char)bVar1 < '\0') {
    iVar3 = 2;
    if (((0x1d < (byte)(bVar1 + 0x3e)) && (iVar3 = 3, (bVar1 & 0xf0) != 0xe0)) &&
       (iVar3 = 4, 4 < (byte)(bVar1 + 0x10))) {
      *param_3 = 0xfffd;
      param_2 = param_1 + 1;
      uVar4 = 0;
      goto LAB_1000b5ea;
    }
    pbVar2 = param_1 + 1;
    if (pbVar2 == param_2) {
      *param_3 = 0xfffd;
      uVar4 = 0;
      goto LAB_1000b5ea;
    }
    if (uVar5 < 0xf0) {
      if (uVar5 == 0xe0) {
        if (0x9f < *pbVar2) goto LAB_1000b690;
      }
      else if ((uVar5 != 0xed) || (*pbVar2 < 0xa0)) {
LAB_1000b690:
        uVar5 = uVar5 & *(uint *)(&UNK_1028b3fc + iVar3 * 4);
        *param_3 = uVar5;
        iVar6 = iVar3 + -1;
        pbVar2 = param_1;
        do {
          pbVar2 = pbVar2 + 1;
          if ((param_2 <= pbVar2) || (-0x41 < (char)*pbVar2)) goto LAB_1000b683;
          uVar5 = uVar5 << 6 | *pbVar2 & 0x3f;
          *param_3 = uVar5;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        param_2 = param_1 + iVar3;
        goto LAB_1000b5e6;
      }
    }
    else if (uVar5 == 0xf0) {
      if (0x8f < *pbVar2) goto LAB_1000b690;
    }
    else if ((uVar5 != 0xf4) || (*pbVar2 < 0x90)) goto LAB_1000b690;
LAB_1000b683:
    *param_3 = 0xfffd;
    uVar4 = 0;
    param_2 = pbVar2;
  }
  else {
    param_2 = param_1 + 1;
LAB_1000b5e6:
    uVar4 = 1;
  }
LAB_1000b5ea:
  return CONCAT44(uVar4,param_2);
}

