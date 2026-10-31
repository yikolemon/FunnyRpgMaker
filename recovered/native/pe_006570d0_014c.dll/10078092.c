/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10078092 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_10078092(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  byte local_159c [512];
  uint local_139c [1249];
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)local_159c;
  iVar6 = param_1[2];
  uVar3 = (param_1[3] - iVar6) - 0x14;
  if (0x145 < uVar3) {
    uVar3 = 0x146;
  }
  param_1[5] = uVar3;
  bVar5 = *(byte *)(iVar6 + (uint)*param_2);
  bVar1 = *(byte *)(iVar6 + (uint)param_2[1]);
  bVar2 = *(byte *)(iVar6 + (uint)param_2[2]);
  local_18 = 0xffffffff;
  uVar3 = 0x1571;
  iVar6 = 2;
  do {
    uVar3 = ((uVar3 >> 0x1e ^ uVar3) * 0x6c078965 + iVar6) - 1;
    local_139c[iVar6] = uVar3;
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0x271);
  local_139c[1] = (uint)bVar1 << 8 | (uint)bVar5 << 0x10 | (uint)bVar2;
  local_139c[1] = local_139c[1] << 0xd ^ local_139c[1];
  local_139c[1] = local_139c[1] >> 0x11 ^ local_139c[1];
  local_139c[1] = local_139c[1] << 5 ^ local_139c[1];
  iVar6 = 2;
  uVar3 = local_139c[1];
  do {
    uVar3 = ((uVar3 >> 0x1e ^ uVar3) * 0x6c078965 + iVar6) - 1;
    local_139c[iVar6] = uVar3;
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0x271);
  local_139c[0] = 0x270;
  iVar6 = 0;
  do {
    uVar4 = FUN_100783dc();
    *(undefined4 *)(local_159c + iVar6) = uVar4;
    iVar6 = iVar6 + 4;
  } while (iVar6 != 0x200);
  iVar6 = param_1[2];
  if (10 < (uint)(param_1[3] - iVar6)) {
    uVar3 = 10;
    do {
      *(byte *)(iVar6 + uVar3) = *(byte *)(iVar6 + uVar3) ^ local_159c[(uVar3 & 0x7f) * 4];
      uVar3 = uVar3 + 1;
      iVar6 = param_1[2];
    } while (uVar3 < (uint)(param_1[3] - iVar6));
  }
  thunk_FUN_1000b6c9(iVar6 + 0xb,iVar6 + 0xf,param_1);
  iVar6 = param_1[2];
  *(char *)(param_1 + 1) = (char)*param_1 * '\x03' + *(char *)(iVar6 + 7);
  bVar5 = *(byte *)((int)param_1 + 1) ^ *(byte *)((int)param_1 + 2);
  *(byte *)((int)param_1 + 5) = bVar5;
  *(byte *)((int)param_1 + 6) = *(byte *)(iVar6 + 7) ^ *(byte *)((int)param_1 + 3);
  *(byte *)((int)param_1 + 7) =
       (*(byte *)((int)param_1 + 2) - (char)*param_1) + *(char *)(iVar6 + 7);
  param_1[6] = (uint)bVar5;
  param_1[7] = (uint)bVar5;
  if (DAT_10388d00 == (local_14 ^ (uint)local_159c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

