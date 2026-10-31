/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14032a860 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14032a860(undefined8 param_1,byte param_2,undefined4 param_3)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined8 uVar8;
  uint uVar9;
  bool bVar10;
  double dVar11;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  float local_44;
  ulonglong local_40;
  
  lVar2 = DAT_14062a630;
  local_40 = 0x14032a878;
  uVar5 = FUN_14032987c();
  lVar3 = DAT_14062a630;
  uVar9 = uVar5 & 0xf000;
  if (*(uint *)(lVar2 + 0x13c) != uVar9) {
    return 0;
  }
  uVar6 = uVar5 & 0xffff0fff;
  if (((uVar5 & 0xffff0fff) == 0) && (uVar6 = uVar9, uVar9 - 1 < (uVar9 ^ uVar9 - 1))) {
    uVar5 = 0;
    if (uVar9 != 0) {
      for (; (uVar9 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    uVar6 = uVar5 + 0x28b;
    if ((uVar5 & 0x1c) != 0xc) {
      uVar6 = uVar9;
    }
  }
  local_40 = ram0x000140613b10 ^ (ulonglong)auStack_68;
  pcVar7 = (char *)FUN_14030f05a(DAT_14062a630,uVar6);
  if ((*pcVar7 == '\x01') && (fVar1 = *(float *)(pcVar7 + 4), 0.0 <= fVar1)) {
    bVar10 = (param_2 & 0xfe) != 0;
    if ((bVar10 || (param_2 & 1) != 0) && ((fVar1 != 0.0 || (NAN(fVar1))))) {
      FUN_1403299ad(bVar10 | param_2,&local_44,&local_48);
      if (local_44 < fVar1) {
        iVar4 = FUN_140329a17(uVar6,local_44,local_48);
        bVar10 = 0 < iVar4;
        if ((param_2 & 0xf0) != 0 && 0 < iVar4) {
          dVar11 = (*(double *)(lVar3 + 0x18) - (double)fVar1) + _DAT_1404efd38;
          bVar10 = true;
          if (((param_2 & 0x20) != 0) && (dVar11 < *(double *)(lVar3 + 0x16c8))) {
            bVar10 = false;
          }
          if (((param_2 & 0x40) != 0) && (dVar11 < *(double *)(lVar3 + 0x16d0))) {
            bVar10 = false;
          }
          if (((char)param_2 < '\0') && (dVar11 < *(double *)(lVar3 + 0x16d8))) goto LAB_14032a0a3;
        }
        if (bVar10) goto LAB_14032a19e;
      }
    }
    else if ((fVar1 == 0.0) && (!NAN(fVar1))) {
LAB_14032a19e:
      if (ram0x000140613b10 == (local_40 ^ (ulonglong)auStack_68)) {
        uVar8 = FUN_140329f87(uVar6,param_3);
        return uVar8;
      }
      goto LAB_14032a1cb;
    }
  }
LAB_14032a0a3:
  if (ram0x000140613b10 == (local_40 ^ (ulonglong)auStack_68)) {
    return 0;
  }
LAB_14032a1cb:
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_40 ^ (ulonglong)auStack_68);
}

