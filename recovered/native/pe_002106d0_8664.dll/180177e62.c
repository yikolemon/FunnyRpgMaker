/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180177e62 */

undefined8 FUN_180177e62(longlong param_1,longlong param_2,uint param_3)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  byte bVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  ushort uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStack_f8 [32];
  int local_d8 [20];
  int aiStack_88 [18];
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_f8;
  local_d8[0xc] = 0;
  local_d8[0xd] = 0;
  local_d8[0xe] = 0;
  local_d8[0xf] = 0;
  local_d8[8] = 0;
  local_d8[9] = 0;
  local_d8[10] = 0;
  local_d8[0xb] = 0;
  local_d8[4] = 0;
  local_d8[5] = 0;
  local_d8[6] = 0;
  local_d8[7] = 0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_d8[2] = 0;
  local_d8[3] = 0;
  local_d8[0x10] = 0;
  FUN_1802a89a0(0,0);
  if (0 < (int)param_3) {
    uVar4 = 0;
    do {
      local_d8[*(byte *)(param_2 + uVar4)] = local_d8[*(byte *)(param_2 + uVar4)] + 1;
      uVar4 = uVar4 + 1;
    } while (param_3 != uVar4);
  }
  lVar5 = 1;
  pcVar2 = "bad sizes";
  do {
    if (1 << ((byte)lVar5 & 0x1f) < local_d8[lVar5]) goto LAB_180178052;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x10);
  iVar8 = 0;
  bVar6 = 0xf;
  pcVar2 = "bad codelengths";
  lVar5 = 0;
  iVar9 = 0;
  do {
    aiStack_88[lVar5 + 1] = iVar8;
    *(short *)(param_1 + 0x402 + lVar5 * 2) = (short)iVar8;
    *(short *)(param_1 + 0x466 + lVar5 * 2) = (short)iVar9;
    iVar1 = local_d8[lVar5 + 1];
    iVar8 = iVar8 + iVar1;
    if ((iVar1 != 0) && (1 << ((char)lVar5 + 1U & 0x1f) < iVar8)) goto LAB_180178052;
    *(int *)(param_1 + 0x424 + lVar5 * 4) = iVar8 << (bVar6 & 0x1f);
    iVar8 = iVar8 * 2;
    iVar9 = iVar9 + iVar1;
    bVar6 = bVar6 - 1;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0xf);
  *(undefined4 *)(param_1 + 0x460) = 0x10000;
  uVar3 = 1;
  if (0 < (int)param_3) {
    uVar4 = 0;
    do {
      bVar6 = *(byte *)(param_2 + uVar4);
      uVar7 = (ulonglong)bVar6;
      if (bVar6 != 0) {
        iVar8 = aiStack_88[uVar7];
        lVar5 = (longlong)(int)(iVar8 - (uint)*(ushort *)(param_1 + 0x400 + uVar7 * 2)) +
                (ulonglong)*(ushort *)(param_1 + 0x464 + uVar7 * 2);
        *(byte *)(param_1 + 0x484 + lVar5) = bVar6;
        *(ushort *)(param_1 + 0x5a4 + lVar5 * 2) = (ushort)uVar4;
        if (bVar6 < 10) {
          uVar10 = (ushort)iVar8 << 8 | (ushort)iVar8 >> 8;
          uVar11 = (uVar10 & 0xf0f) << 4 | (uVar10 & 0xf0f0) >> 4;
          uVar11 = (uVar11 >> 2 & 0x3333) + (uVar11 & 0x3333) * 4;
          uVar12 = (ulonglong)
                   ((uVar11 >> 1 & 0x5555) + (uVar11 & 0x5555) * 2 >> (0x10 - bVar6 & 0x1f));
          do {
            *(ushort *)(param_1 + uVar12 * 2) = (ushort)uVar4 | (ushort)bVar6 << 9;
            uVar12 = uVar12 + (1L << (bVar6 & 0x3f));
          } while (uVar12 < 0x200);
        }
        aiStack_88[uVar7] = iVar8 + 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != param_3);
  }
LAB_18017805c:
  if (DAT_180402640 != (local_40 ^ (ulonglong)auStack_f8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_40 ^ (ulonglong)auStack_f8);
  }
  return uVar3;
LAB_180178052:
  FUN_1801765d0(pcVar2);
  uVar3 = 0;
  goto LAB_18017805c;
}

