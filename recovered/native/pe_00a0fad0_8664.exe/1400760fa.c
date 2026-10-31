/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400760fa */

ulonglong FUN_1400760fa(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 unaff_RBX;
  bool bVar3;
  undefined1 local_68 [8];
  longlong local_60;
  byte local_58;
  longlong local_48 [2];
  int local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_140007025();
  puVar2 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar2 = (undefined8 *)*param_1;
  }
  iVar1 = FUN_1400dcbb0(puVar2,local_68,0xb,0xffffffff);
  local_30 = FUN_140007025();
  local_38[0] = iVar1;
  if (iVar1 == 0) {
    if ((local_58 & 0x10) == 0) {
      bVar3 = local_60 == 0;
    }
    else {
      FUN_140078fcc(local_48,param_1,local_38);
      bVar3 = local_38[0] == 0;
      FUN_140005942();
      if (local_38[0] != 0) goto LAB_14007619b;
      bVar3 = bVar3 && local_48[0] == 0;
    }
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar3) & 0xffffffff;
  }
LAB_14007619b:
                    /* WARNING: Subroutine does not return */
  FUN_14004137b("is_empty",local_38,param_1);
}

