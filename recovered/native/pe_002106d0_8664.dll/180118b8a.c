/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180118b8a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180118b8a(undefined4 param_1,uint param_2,undefined4 param_3)

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
  
  lVar3 = DAT_180419160;
  local_40 = DAT_180402640 ^ (ulonglong)auStack_68;
  pcVar5 = (char *)FUN_1800fdb8a(DAT_180419160,param_1);
  if ((*pcVar5 == '\x01') && (fVar1 = *(float *)(pcVar5 + 4), 0.0 <= fVar1)) {
    uVar7 = (uint)((param_2 & 0xfe) != 0);
    if ((uVar7 == 0 && (param_2 & 1) == 0) || ((fVar1 == 0.0 && (!NAN(fVar1))))) {
      if ((fVar1 == 0.0) && (!NAN(fVar1))) {
LAB_180118cce:
        if (DAT_180402640 == (local_40 ^ (ulonglong)auStack_68)) {
          uVar6 = FUN_180118ab7(param_1,param_3);
          return uVar6;
        }
        goto LAB_180118cfb;
      }
    }
    else {
      FUN_1801184dd(uVar7 | param_2,&local_44,&local_48);
      if (local_44 < fVar1) {
        iVar4 = FUN_180118547(param_1,local_44,local_48);
        bVar2 = 0 < iVar4;
        if ((param_2 & 0xf0) != 0 && 0 < iVar4) {
          dVar8 = (*(double *)(lVar3 + 0x18) - (double)fVar1) + _DAT_1802de868;
          bVar2 = true;
          if (((param_2 & 0x20) != 0) && (dVar8 < *(double *)(lVar3 + 0x16c8))) {
            bVar2 = false;
          }
          if (((param_2 & 0x40) != 0) && (dVar8 < *(double *)(lVar3 + 0x16d0))) {
            bVar2 = false;
          }
          if (((char)param_2 < '\0') && (dVar8 < *(double *)(lVar3 + 0x16d8))) goto LAB_180118bd3;
        }
        if (bVar2) goto LAB_180118cce;
      }
    }
  }
LAB_180118bd3:
  if (DAT_180402640 == (local_40 ^ (ulonglong)auStack_68)) {
    return 0;
  }
LAB_180118cfb:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_40 ^ (ulonglong)auStack_68);
}

