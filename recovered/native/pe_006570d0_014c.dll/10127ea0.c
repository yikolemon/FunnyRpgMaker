/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10127ea0 */

void FUN_10127ea0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  float fVar7;
  float fVar8;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  uint local_10;
  
  iVar4 = DAT_1039d74c;
  local_10 = DAT_10388d00 ^ (uint)&local_20;
  if ((*(uint *)(DAT_1039d74c + 0x30) & 2) == 0) {
    bVar6 = 0;
  }
  else {
    bVar6 = *(byte *)(DAT_1039d74c + 0x34) & 1;
  }
  if ((((*(uint *)(DAT_1039d74c + 0x30) & 1) == 0) ||
      (cVar5 = FUN_10113d60(0x20e,0,0xffffffff), cVar5 == '\0')) &&
     ((bVar6 == 0 ||
      (cVar5 = FUN_10113d60((uint)*(byte *)(iVar4 + 0x65) * 2 + 0x27b,0,0xffffffff), cVar5 == '\0'))
     )) goto LAB_1012806c;
  if ((*(byte *)(iVar4 + 0x27b4) & 0x10) != 0) {
    FUN_100f99e6("[nav] NavUpdateCancelRequest()\n");
  }
  if (*(int *)(iVar4 + 0x1528) != 0) {
    if (DAT_10388d00 == (local_10 ^ (uint)&local_20)) {
      FUN_101028d8();
      return;
    }
    goto LAB_10128083;
  }
  if (*(int *)(iVar4 + 0x2050) == 0) {
    iVar1 = *(int *)(iVar4 + 0x2048);
    if ((((iVar1 == 0) || (iVar1 == *(int *)(iVar1 + 0x3a8))) ||
        (iVar2 = *(int *)(iVar1 + 0x3b8), (*(byte *)(iVar2 + 0xf) & 4) != 0)) ||
       (iVar3 = *(int *)(iVar2 + 0x3a0), iVar3 == 0)) {
      iVar2 = *(int *)(iVar4 + 0x1fbc);
      if (((0 < iVar2) &&
          (iVar3 = *(int *)(*(int *)(iVar4 + 0x1fc4) + -0x24 + iVar2 * 0x28), iVar3 != 0)) &&
         ((*(byte *)(iVar3 + 0xf) & 8) == 0)) {
        FUN_1011630c(iVar2 + -1,1);
        goto LAB_1012806c;
      }
      cVar5 = *(char *)(iVar4 + 0x68);
      if (cVar5 == '\0') {
        if ((iVar1 != 0) && (*(char *)(iVar4 + 0x69) != '\0')) goto LAB_10128026;
LAB_10128050:
        if (*(char *)(iVar4 + 0x69) == '\x01') {
          *(undefined4 *)(iVar4 + 0x2044) = 0;
          goto LAB_10128060;
        }
      }
      else {
        if (iVar1 != 0) {
LAB_10128026:
          if ((*(byte *)(iVar1 + 0xf) & 4) != 0) {
            *(undefined4 *)(iVar1 + 0x3c4) = 0;
            cVar5 = *(char *)(iVar4 + 0x68);
          }
          if (cVar5 == '\0') goto LAB_10128050;
        }
        *(undefined4 *)(iVar4 + 0x2044) = 0;
        if (*(char *)(iVar4 + 0x69) == '\x01') {
LAB_10128060:
          FUN_101034e2(0,0);
        }
      }
LAB_1012806c:
      if (DAT_10388d00 == (local_10 ^ (uint)&local_20)) {
        return;
      }
      goto LAB_10128083;
    }
    FUN_101034e2(iVar3,0);
    fVar7 = (float)*(undefined8 *)(iVar2 + 0x50);
    fVar8 = (float)((ulonglong)*(undefined8 *)(iVar2 + 0x50) >> 0x20);
    fStack_18 = (float)*(undefined8 *)(iVar3 + 0x154);
    local_20 = fVar7 - fStack_18;
    fStack_14 = (float)((ulonglong)*(undefined8 *)(iVar3 + 0x154) >> 0x20);
    fStack_1c = fVar8 - fStack_14;
    fStack_18 = ((float)*(undefined8 *)(iVar2 + 0x58) + fVar7) - fStack_18;
    fStack_14 = ((float)((ulonglong)*(undefined8 *)(iVar2 + 0x58) >> 0x20) + fVar8) - fStack_14;
    FUN_1011714e(*(undefined4 *)(iVar2 + 0xbc),0,0,&local_20);
  }
  else {
    FUN_10128a26();
  }
  if (DAT_10388d00 == (local_10 ^ (uint)&local_20)) {
    FUN_101170bb();
    return;
  }
LAB_10128083:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

