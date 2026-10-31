/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043eed2 */

int __fastcall FUN_0043eed2(int param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_2c;
  iVar4 = *(int *)(param_1 + 0x1c);
  local_28 = param_2;
  iVar3 = FUN_0041efcd(iVar4,4,0,param_2,0,&local_18);
  iVar6 = 0;
  if (local_18 == 0) {
    pbVar5 = *(byte **)(param_1 + 0x20);
    local_2c = iVar4;
    if (local_28 != 0) {
      uVar7 = 0;
      iVar4 = iVar3;
      local_24 = iVar3;
      local_20 = param_1;
      do {
        iVar3 = local_24;
        pbVar2 = *(byte **)(local_20 + 0x24);
        if (pbVar2 <= pbVar5) goto LAB_0043f004;
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
          iVar4 = local_24;
          if (bVar1 < 0x40) {
            if ((uint)((int)pbVar2 - (int)pbVar5) < uVar8) {
LAB_0043f004:
              FUN_0041c607(local_2c,iVar4);
              iVar6 = 0;
              goto LAB_0043f010;
            }
            for (; uVar8 != 0; uVar8 = uVar8 - 1) {
              bVar1 = *pbVar5;
              pbVar5 = pbVar5 + 1;
              *(int *)(local_24 + uVar7 * 4) = (int)(char)bVar1 << 0x10;
              uVar7 = uVar7 + 1;
            }
          }
          else {
            if ((uint)((int)pbVar2 - (int)pbVar5) < uVar8 * 2) goto LAB_0043f004;
            for (; uVar8 != 0; uVar8 = uVar8 - 1) {
              bVar1 = *pbVar5;
              pbVar2 = pbVar5 + 1;
              pbVar5 = pbVar5 + 2;
              *(uint *)(local_24 + uVar7 * 4) = (uint)CONCAT11(bVar1,*pbVar2) << 0x10;
              uVar7 = uVar7 + 1;
            }
          }
        }
        iVar4 = iVar3;
        param_1 = local_20;
      } while (uVar7 < local_28);
    }
    *(byte **)(param_1 + 0x20) = pbVar5;
    iVar6 = iVar3;
  }
LAB_0043f010:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_2c)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_2c);
  }
  return iVar6;
}

