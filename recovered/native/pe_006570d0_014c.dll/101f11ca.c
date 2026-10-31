/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f11ca */

int __fastcall FUN_101f11ca(int *param_1,int param_2)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  void *pvVar5;
  void *pvVar6;
  int iVar7;
  byte *_Buf;
  byte bVar9;
  uint uVar8;
  int iVar10;
  byte *pbVar11;
  size_t _MaxCount;
  byte *local_2c;
  int local_28;
  int local_24;
  short local_1e;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_2c;
  local_24 = param_1[4];
  iVar7 = param_1[0x12];
  local_18 = 0;
  if ((char)param_1[0x17] == '\0') {
    pcVar4 = (char *)param_1[0x13];
    pcVar1 = pcVar4 + param_1[0x14];
    *param_1 = (int)pcVar4;
    param_1[2] = (int)pcVar1;
    iVar3 = 3;
    iVar7 = param_2;
    if (param_1[0x14] != 0) {
      do {
        local_28 = iVar7;
        if ((((pcVar4 + 9 < pcVar1 && *pcVar4 == 'e') && (pcVar4[1] == 'e')) && (pcVar4[2] == 'x'))
           && ((pcVar4[3] == 'e' && (pcVar4[4] == 'c')))) {
          param_1[2] = param_1[0x13] + param_1[0x14];
          (*(code *)param_1[8])(param_1);
          _Buf = (byte *)*param_1;
          local_2c = (byte *)param_1[2];
          _MaxCount = (int)local_2c - (int)_Buf;
          pvVar5 = _memchr(_Buf,10,_MaxCount);
          if (pvVar5 == (void *)0x0) {
            bVar2 = true;
          }
          else {
            pvVar6 = _memchr(_Buf,0xd,_MaxCount);
            bVar2 = pvVar6 < pvVar5;
          }
          pbVar11 = _Buf;
          if (_Buf < local_2c) goto LAB_101f141f;
          break;
        }
        (*(code *)param_1[8])(param_1);
        if (param_1[3] != 0) break;
        (*(code *)param_1[7])(param_1);
        pcVar4 = (char *)*param_1;
        iVar7 = local_28;
      } while (pcVar4 < pcVar1);
    }
  }
  else {
    local_28 = param_2;
    local_2c = (byte *)FUN_101c4a88(iVar7);
    param_1[0x16] = 0;
    while (iVar3 = FUN_101f16b9(&local_1c), iVar3 == 0) {
      if (local_1e != -0x7ffe) {
        if (param_1[0x16] == 0) {
          iVar3 = 3;
        }
        else {
          iVar3 = FUN_101c461e(iVar7,local_2c);
          local_18 = iVar3;
          if (iVar3 == 0) {
            iVar3 = FUN_101c21f6(local_24,param_1[0x16],&local_18);
            param_1[0x15] = iVar3;
            iVar3 = local_18;
            if (local_18 == 0) {
              param_1[0x16] = 0;
              goto LAB_101f1328;
            }
          }
        }
        break;
      }
      param_1[0x16] = param_1[0x16] + local_1c;
      iVar3 = FUN_101c4672(iVar7,local_1c);
      local_18 = iVar3;
      if (iVar3 != 0) break;
    }
  }
LAB_101f12d9:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_2c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar3;
  while( true ) {
    pbVar11 = pbVar11 + 1;
    _Buf = _Buf + 1;
    if (pbVar11 == local_2c) break;
LAB_101f141f:
    bVar9 = *pbVar11;
    if (((bVar9 != 9) && (bVar9 != 0x20)) && ((bVar9 != 10 && (!(bool)(bVar9 == 0xd & bVar2))))) {
      iVar7 = param_1[0x13];
      iVar10 = (param_1[0x14] + iVar7) - (int)_Buf;
      if (*(char *)((int)param_1 + 0x5d) == '\0') {
        *(undefined1 *)((int)param_1 + 0x5e) = 1;
        param_1[0x15] = iVar7;
        param_1[0x16] = iVar10;
        param_1[0x13] = 0;
        param_1[0x14] = 0;
      }
      else {
        iVar7 = FUN_101c21f6(local_24,iVar10 + 1,&local_18);
        param_1[0x15] = iVar7;
        iVar3 = local_18;
        if (local_18 != 0) break;
        param_1[0x16] = iVar10;
      }
      if ((((pbVar11 + 3 < local_2c) &&
           (((bVar9 = *pbVar11 - 0x30, bVar9 < 10 ||
             (uVar8 = CONCAT11(bVar9,*pbVar11) & 0xff, uVar8 - 0x61 < 6)) || (uVar8 - 0x41 < 6))))
          && (((bVar9 = pbVar11[1] - 0x30, bVar9 < 10 ||
               (uVar8 = CONCAT11(bVar9,pbVar11[1]) & 0xff, uVar8 - 0x61 < 6)) || (uVar8 - 0x41 < 6))
             )) && ((((bVar9 = pbVar11[2] - 0x30, bVar9 < 10 ||
                      (uVar8 = CONCAT11(bVar9,pbVar11[2]) & 0xff, uVar8 - 0x61 < 6)) ||
                     (uVar8 - 0x41 < 6)) &&
                    (((bVar9 = pbVar11[3], (byte)(bVar9 - 0x30) < 10 || (bVar9 - 0x61 < 6)) ||
                     (bVar9 - 0x41 < 6)))))) {
        *param_1 = (int)pbVar11;
        (**(code **)(*(int *)(local_28 + 4) + 0x18))(param_1,iVar7,iVar10,&local_1c,0);
        param_1[0x16] = local_1c;
        *(undefined1 *)(param_1[0x15] + local_1c) = 0;
      }
      else {
        FUN_1025b2d0(iVar7,pbVar11,iVar10);
      }
      goto LAB_101f137d;
    }
  }
  goto LAB_101f12d9;
LAB_101f1328:
  local_18 = FUN_101f16b9(&local_1c);
  iVar10 = local_1c;
  if ((local_18 != 0) || (local_1e != -0x7ffe)) goto LAB_101f1375;
  iVar3 = FUN_101c4659(iVar7,param_1[0x15] + param_1[0x16],local_1c);
  local_18 = iVar3;
  if (iVar3 != 0) goto LAB_101f12d9;
  param_1[0x16] = param_1[0x16] + iVar10;
  local_18 = 0;
  goto LAB_101f1328;
LAB_101f1375:
  local_18 = 0;
LAB_101f137d:
  (**(code **)(local_28 + 0x10))(param_1[0x15],param_1[0x16],0xd971);
  iVar3 = 3;
  if (3 < (uint)param_1[0x16]) {
    *(undefined1 *)param_1[0x15] = 0x20;
    *(undefined1 *)(param_1[0x15] + 1) = 0x20;
    *(undefined1 *)(param_1[0x15] + 2) = 0x20;
    *(undefined1 *)(param_1[0x15] + 3) = 0x20;
    iVar7 = param_1[0x15];
    param_1[1] = iVar7;
    *param_1 = iVar7;
    param_1[2] = iVar7 + param_1[0x16];
    iVar3 = local_18;
  }
  goto LAB_101f12d9;
}

