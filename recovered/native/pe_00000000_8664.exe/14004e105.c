/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14004e105 */

void FUN_14004e105(longlong *param_1,byte *param_2,byte *param_3,uint *param_4)

{
  byte bVar1;
  byte *pbVar2;
  longlong lVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  
  bVar1 = *param_2;
  *param_4 = (uint)bVar1;
  if ((char)bVar1 < '\0') {
    lVar6 = 2;
    if (((0x1d < (byte)(bVar1 + 0x3e)) && (lVar6 = 3, (bVar1 & 0xf0) != 0xe0)) &&
       (lVar6 = 4, 4 < (byte)(bVar1 + 0x10))) {
      *param_4 = 0xfffd;
      param_3 = param_2 + 1;
      uVar4 = 0;
      goto LAB_14004e11f;
    }
    pbVar2 = param_2 + 1;
    if (pbVar2 == param_3) {
      *param_4 = 0xfffd;
      uVar4 = 0;
      goto LAB_14004e11f;
    }
    uVar5 = (uint)bVar1;
    if (uVar5 < 0xf0) {
      if (uVar5 == 0xe0) {
        if (0x9f < *pbVar2) goto LAB_14004e1d8;
      }
      else if ((uVar5 != 0xed) || (*pbVar2 < 0xa0)) {
LAB_14004e1d8:
        uVar5 = uVar5 & (&UINT_1401ced2c)[lVar6];
        *param_4 = uVar5;
        lVar3 = lVar6 + -1;
        pbVar2 = param_2;
        do {
          pbVar2 = pbVar2 + 1;
          if ((param_3 <= pbVar2) || (-0x41 < (char)*pbVar2)) goto LAB_14004e1c9;
          uVar5 = *pbVar2 & 0x3f | uVar5 << 6;
          *param_4 = uVar5;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
        param_3 = param_2 + lVar6;
        goto LAB_14004e119;
      }
    }
    else if (uVar5 == 0xf0) {
      if (0x8f < *pbVar2) goto LAB_14004e1d8;
    }
    else if ((uVar5 != 0xf4) || (*pbVar2 < 0x90)) goto LAB_14004e1d8;
LAB_14004e1c9:
    *param_4 = 0xfffd;
    uVar4 = 0;
    param_3 = pbVar2;
  }
  else {
    param_3 = param_2 + 1;
LAB_14004e119:
    uVar4 = 1;
  }
LAB_14004e11f:
  *param_1 = (longlong)param_3;
  *(undefined1 *)(param_1 + 1) = uVar4;
  return;
}

