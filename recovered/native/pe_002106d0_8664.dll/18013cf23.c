/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18013cf23 */

ulonglong FUN_18013cf23(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                       void *param_5,undefined8 param_6,longlong param_7,longlong param_8)

{
  byte *pbVar1;
  size_t _Size;
  longlong lVar2;
  char cVar3;
  int iVar4;
  size_t *psVar5;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_e8 [32];
  char *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a0;
  longlong local_98;
  undefined1 local_90 [8];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  lVar2 = DAT_180419160;
  local_98 = param_8;
  local_a0 = param_7;
  local_48 = DAT_180402640 ^ (ulonglong)auStack_e8;
  psVar5 = (size_t *)FUN_180139a46(param_4);
  pcVar6 = (char *)FUN_180141db1(param_6,local_68,0x20);
  if (*pcVar6 == '\0') {
    pcVar6 = (char *)psVar5[2];
  }
  local_c8 = pcVar6;
  FUN_180139a58(local_88,0x20,param_4,param_5);
  FUN_1800fea31(local_88);
  pbVar1 = (byte *)(lVar2 + 0x1fe6);
  *pbVar1 = *pbVar1 | 1;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c0 = 0x10001000;
  local_c8 = (char *)0x20;
  cVar3 = FUN_180141f85(param_1,param_2,param_3,local_88);
  if (cVar3 == '\0') {
    uVar9 = 0;
  }
  else {
    _Size = *psVar5;
    FUN_1802a82f0(local_90,param_5,_Size);
    local_c8 = (char *)0x0;
    FUN_18013a01d(local_88,param_4,param_5,pcVar6);
    lVar8 = local_98;
    lVar7 = local_a0;
    if (local_a0 != 0 || local_98 != 0) {
      if (local_a0 != 0 && local_98 != 0) {
        iVar4 = FUN_18013a239(param_4,local_a0,local_98);
        if (0 < iVar4) {
          FUN_180145a47(&param_7,&param_8);
          lVar7 = param_7;
          lVar8 = param_8;
        }
      }
      FUN_18013a36a(param_4,param_5,lVar7,lVar8);
    }
    pbVar1 = (byte *)(lVar2 + 0x1fe6);
    *pbVar1 = *pbVar1 & 0xfe;
    iVar4 = memcmp(local_90,param_5,_Size);
    uVar9 = CONCAT71((int7)((ulonglong)lVar8 >> 8),iVar4 != 0);
    if (iVar4 != 0) {
      FUN_18010748b(param_2);
    }
  }
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_e8)) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_e8);
}

