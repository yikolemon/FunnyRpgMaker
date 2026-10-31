/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140091ea2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140091ea2(undefined4 param_1,uint param_2,undefined4 param_3)

{
  float fVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  char *pcVar5;
  undefined8 uVar6;
  uint uVar7;
  double dVar8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  float local_44;
  ulonglong local_40;
  
  lVar3 = DAT_140f2a910;
  local_40 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  pcVar5 = (char *)FUN_140076e46(DAT_140f2a910,param_1);
  if ((*pcVar5 == '\x01') && (fVar1 = *(float *)(pcVar5 + 4), 0.0 <= fVar1)) {
    uVar7 = (uint)((param_2 & 0xfe) != 0);
    if ((uVar7 == 0 && (param_2 & 1) == 0) || ((fVar1 == 0.0 && (!NAN(fVar1))))) {
      if ((fVar1 == 0.0) && (!NAN(fVar1))) {
LAB_140091fe6:
        if (DAT_140f17b40 == (local_40 ^ (ulonglong)auStack_68)) {
          uVar6 = FUN_140091dcf(param_1,param_3);
          return uVar6;
        }
        goto LAB_140092013;
      }
    }
    else {
      FUN_1400917f5(uVar7 | param_2,&local_44,&local_48);
      if (local_44 < fVar1) {
        iVar4 = FUN_14009185f(param_1,local_44,local_48);
        bVar2 = 0 < iVar4;
        if ((param_2 & 0xf0) != 0 && 0 < iVar4) {
          dVar8 = (*(double *)(lVar3 + 0x18) - (double)fVar1) + _DAT_1402115d0;
          bVar2 = true;
          if (((param_2 & 0x20) != 0) && (dVar8 < *(double *)(lVar3 + 0x16c8))) {
            bVar2 = false;
          }
          if (((param_2 & 0x40) != 0) && (dVar8 < *(double *)(lVar3 + 0x16d0))) {
            bVar2 = false;
          }
          if (((char)param_2 < '\0') && (dVar8 < *(double *)(lVar3 + 0x16d8))) goto LAB_140091eeb;
        }
        if (bVar2) goto LAB_140091fe6;
      }
    }
  }
LAB_140091eeb:
  if (DAT_140f17b40 == (local_40 ^ (ulonglong)auStack_68)) {
    return 0;
  }
LAB_140092013:
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_40 ^ (ulonglong)auStack_68);
}

