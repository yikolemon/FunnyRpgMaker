/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10113d60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10113d60(undefined4 param_1,uint param_2,undefined4 param_3)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  double dVar8;
  float local_20;
  undefined4 local_1c;
  float local_18;
  uint local_14;
  
  iVar3 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_20;
  pcVar4 = (char *)FUN_100f9590(DAT_1039d74c,param_1);
  if ((*pcVar4 == '\x01') && (fVar1 = *(float *)(pcVar4 + 4), 0.0 <= fVar1)) {
    uVar5 = (uint)((param_2 & 0xfe) != 0);
    if ((uVar5 == 0 && (param_2 & 1) == 0) || ((fVar1 == 0.0 && (!NAN(fVar1))))) {
      if ((fVar1 == 0.0) && (!NAN(fVar1))) {
LAB_10113ea7:
        uVar7 = FUN_10113c9d(param_1,param_3);
        if (DAT_10388d00 == (local_14 ^ (uint)&local_20)) {
          return uVar7;
        }
        goto LAB_10113ec8;
      }
    }
    else {
      local_20 = fVar1;
      FUN_101136f5(uVar5 | param_2,&local_18,&local_1c);
      if (local_18 < local_20) {
        iVar6 = FUN_1011376b(param_1,local_18,local_1c);
        bVar2 = 0 < iVar6;
        if ((param_2 & 0xf0) != 0 && 0 < iVar6) {
          dVar8 = (*(double *)(iVar3 + 0x18) - (double)local_20) + _DAT_102b8db0;
          bVar2 = true;
          if (((param_2 & 0x20) != 0) && (dVar8 < *(double *)(iVar3 + 0x1570))) {
            bVar2 = false;
          }
          if (((param_2 & 0x40) != 0) && (dVar8 < *(double *)(iVar3 + 0x1578))) {
            bVar2 = false;
          }
          if (((char)param_2 < '\0') && (dVar8 < *(double *)(iVar3 + 0x1580))) goto LAB_10113d98;
        }
        if (bVar2) goto LAB_10113ea7;
      }
    }
  }
LAB_10113d98:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_20)) {
    return 0;
  }
LAB_10113ec8:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

