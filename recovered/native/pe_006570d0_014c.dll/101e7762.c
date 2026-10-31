/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e7762 */

int __fastcall FUN_101e7762(int param_1,uint param_2)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_2c;
  uint local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_2c;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  local_28 = param_2;
  iVar4 = FUN_101c2a50(uVar2,4,0,param_2,0,&local_18);
  iVar6 = 0;
  if (local_18 == 0) {
    pbVar5 = *(byte **)(param_1 + 0x20);
    local_2c = uVar2;
    if (local_28 != 0) {
      uVar7 = 0;
      iVar6 = iVar4;
      local_24 = iVar4;
      local_20 = param_1;
      do {
        iVar4 = local_24;
        pbVar3 = *(byte **)(local_20 + 0x24);
        if (pbVar3 <= pbVar5) goto LAB_101e7894;
        bVar1 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        local_1c = (bVar1 & 0x3f) + 1;
        uVar8 = local_28 - uVar7;
        if ((bVar1 & 0x3f) < local_28 - uVar7) {
          uVar8 = local_1c;
        }
        if ((char)bVar1 < '\0') {
          if (uVar8 != 0) {
            _memset((void *)(local_24 + uVar7 * 4),0,uVar8 * 4);
            uVar7 = uVar7 + uVar8;
          }
        }
        else {
          iVar6 = local_24;
          if (bVar1 < 0x40) {
            if ((uint)((int)pbVar3 - (int)pbVar5) < uVar8) {
LAB_101e7894:
              FUN_101c0017(local_2c,iVar6);
              iVar6 = 0;
              goto LAB_101e78a0;
            }
            for (; uVar8 != 0; uVar8 = uVar8 - 1) {
              bVar1 = *pbVar5;
              pbVar5 = pbVar5 + 1;
              *(int *)(local_24 + uVar7 * 4) = (int)(char)bVar1 << 0x10;
              uVar7 = uVar7 + 1;
            }
          }
          else {
            if ((uint)((int)pbVar3 - (int)pbVar5) < uVar8 * 2) goto LAB_101e7894;
            for (; uVar8 != 0; uVar8 = uVar8 - 1) {
              bVar1 = *pbVar5;
              pbVar3 = pbVar5 + 1;
              pbVar5 = pbVar5 + 2;
              *(uint *)(local_24 + uVar7 * 4) = (uint)CONCAT11(bVar1,*pbVar3) << 0x10;
              uVar7 = uVar7 + 1;
            }
          }
        }
        iVar6 = iVar4;
        param_1 = local_20;
      } while (uVar7 < local_28);
    }
    *(byte **)(param_1 + 0x20) = pbVar5;
    iVar6 = iVar4;
  }
LAB_101e78a0:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_2c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar6;
}

