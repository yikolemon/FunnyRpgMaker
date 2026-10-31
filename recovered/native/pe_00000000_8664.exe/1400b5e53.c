/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400b5e53 */

ulonglong FUN_1400b5e53(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
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
  
  lVar2 = DAT_140f2a910;
  local_98 = param_8;
  local_a0 = param_7;
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_e8;
  psVar5 = (size_t *)FUN_1400b2976(param_4);
  pcVar6 = (char *)FUN_1400bace1(param_6,local_68,0x20);
  if (*pcVar6 == '\0') {
    pcVar6 = (char *)psVar5[2];
  }
  local_c8 = pcVar6;
  FUN_1400b2988(local_88,0x20,param_4,param_5);
  FUN_140077ced(local_88);
  pbVar1 = (byte *)(lVar2 + 0x1fe6);
  *pbVar1 = *pbVar1 | 1;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c0 = 0x10001000;
  local_c8 = (char *)0x20;
  cVar3 = FUN_1400baeb5(param_1,param_2,param_3,local_88);
  if (cVar3 == '\0') {
    uVar9 = 0;
  }
  else {
    _Size = *psVar5;
    FUN_1401c5180(local_90,param_5,_Size);
    local_c8 = (char *)0x0;
    FUN_1400b2f4d(local_88,param_4,param_5,pcVar6);
    lVar8 = local_98;
    lVar7 = local_a0;
    if (local_a0 != 0 || local_98 != 0) {
      if (local_a0 != 0 && local_98 != 0) {
        iVar4 = FUN_1400b3169(param_4,local_a0,local_98);
        if (0 < iVar4) {
          FUN_1400be977(&param_7,&param_8);
          lVar7 = param_7;
          lVar8 = param_8;
        }
      }
      FUN_1400b329a(param_4,param_5,lVar7,lVar8);
    }
    pbVar1 = (byte *)(lVar2 + 0x1fe6);
    *pbVar1 = *pbVar1 & 0xfe;
    iVar4 = memcmp(local_90,param_5,_Size);
    uVar9 = CONCAT71((int7)((ulonglong)lVar8 >> 8),iVar4 != 0);
    if (iVar4 != 0) {
      FUN_1400807a3(param_2);
    }
  }
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_e8)) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_e8);
}

