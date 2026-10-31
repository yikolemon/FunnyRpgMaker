/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10137bfa */

bool FUN_10137bfa(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7,int param_8)

{
  byte *pbVar1;
  char cVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int local_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  undefined1 local_5c [8];
  undefined1 local_54 [32];
  undefined1 local_34 [32];
  uint local_14;
  
  iVar6 = DAT_1039d74c;
  local_64 = param_8;
  local_6c = param_7;
  local_14 = DAT_10388d00 ^ (uint)&local_6c;
  puVar3 = (undefined4 *)FUN_10133ec9(param_4);
  pcVar4 = (char *)FUN_1013daf5(param_6,local_34,0x20);
  if (*pcVar4 == '\0') {
    pcVar4 = (char *)puVar3[2];
  }
  FUN_10133ed7(local_54,0x20,param_4,param_5,pcVar4);
  FUN_100fa42b(local_54);
  local_60 = iVar6;
  pbVar1 = (byte *)(iVar6 + 0x1e86);
  *pbVar1 = *pbVar1 | 1;
  cVar2 = FUN_1013dc91(param_1,param_2,param_3,local_54,(undefined4)DAT_102b9540,DAT_102b9540._4_4_,
                       0,0);
  if (cVar2 == '\0') {
    bVar8 = false;
  }
  else {
    local_68 = *puVar3;
    FUN_1025b2d0(local_5c,param_5,local_68);
    FUN_1013461a(local_54,param_4,param_5,pcVar4,0);
    iVar6 = local_64;
    if (local_6c != 0 || local_64 != 0) {
      iVar7 = local_6c;
      if ((local_6c != 0 && local_64 != 0) &&
         (iVar5 = FUN_101347e7(param_4,local_6c,local_64), iVar7 = local_6c, 0 < iVar5)) {
        FUN_101412d9(&param_7,&param_8);
        iVar7 = param_7;
        iVar6 = param_8;
      }
      FUN_1013490f(param_4,param_5,iVar7,iVar6);
    }
    *(byte *)(local_60 + 0x1e86) = *(byte *)(local_60 + 0x1e86) & 0xfe;
    iVar6 = FUN_102595e0(local_5c,param_5,local_68);
    bVar8 = iVar6 != 0;
    if (bVar8) {
      FUN_10102913(param_2);
    }
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_6c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return bVar8;
}

