/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140326de7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140326de7(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  char *pcVar7;
  float fVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  lVar5 = DAT_14062a630;
  local_40 = ram0x000140613b10 ^ (ulonglong)auStack_68;
  cVar6 = *(char *)(DAT_14062a630 + 0x82);
  if (cVar6 == *(char *)(DAT_14062a630 + 0x139)) {
    *(undefined4 *)(DAT_14062a630 + 0x1fe0) = *(undefined4 *)(param_1 + 0xc4);
    lVar4 = *(longlong *)(param_1 + 0x428);
    local_48 = lVar4;
    if (cVar6 == '\0') {
      fVar1 = *(float *)(lVar5 + 0x1694);
      if (0.0 <= fVar1) {
        fVar2 = *(float *)(lVar4 + 0x70);
        fVar8 = (float)FUN_14032b926();
        fVar3 = *(float *)(lVar5 + 0x1698);
        if (((fVar3 < fVar8) && (0.0 <= fVar3)) && (fVar1 < fVar2)) goto LAB_140326e3f;
      }
    }
    else {
LAB_140326e3f:
      cVar6 = FUN_14032dd81(0xe5);
      if (cVar6 != '\0') {
        FUN_14032e019("OVE_SPEED_ADD",&local_48,8,0);
        FUN_14032dfe4();
        if (ram0x000140613b10 == (local_40 ^ (ulonglong)auStack_68)) {
          FUN_14033370d(lVar4);
          return;
        }
        goto LAB_140326f40;
      }
    }
  }
  else if (((cVar6 != '\0') && (DAT_1404bda40 <= *(float *)(DAT_14062a630 + 0x269c))) &&
          (*(int *)(DAT_14062a630 + 0x167c) != 0)) {
    pcVar7 = "08X, Payload \"%s\" (%d bytes)";
    if (*(char **)(DAT_14062a630 + 0x2a30) != (char *)0x0) {
      pcVar7 = *(char **)(DAT_14062a630 + 0x2a30);
    }
    FUN_1403190c7("opup",pcVar7);
  }
  if (ram0x000140613b10 == (local_40 ^ (ulonglong)auStack_68)) {
    return;
  }
LAB_140326f40:
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_40 ^ (ulonglong)auStack_68);
}

